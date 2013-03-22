/*
 * Filename: redcellantigens.cpp
 *
 * Programmer: Daniel Brook (danb358 [at] gmail.com)
 *
 * Implementation of the backend code which makes the GUI run.
 *
 * Last Updated by Daniel Brook on 20-Jan-2013 at  1:00 PM
 */

#include "redcellantigens.h"

#include <QMap>          // Needed to make array-like antigen access possible
#include <sstream>       // Stringstream to construct meaningful output


RedCellAntigens::RedCellAntigens(QObject *parent) :
    QObject(parent)
{
    /*
     * Initialize the map!
     */
    this->resetAll();
}

void RedCellAntigens::sendResult()
{
    std::stringstream output;
    std::fixed( output );
    output.precision( 2 );
    output << this->getReqToTest();

    // Send back the number of units that need screening
	// to whatever widget is watching for it.
    emit needToTest( QString::fromStdString(output.str()) );
}

void RedCellAntigens::setAntigen( ANTIGEN_TYPE name, bool present )
{
    /*
     * Update the array with the new parameter, then simply run the
     * recomputer function and when it's done, just do an emit!
     * Nothing all that special is really going on here except for the
     * signal being emitted
	 * 
     * Addendum:
     * If the user needs to set Rh factor, make aware of this.
     */
    this->antigenArray[ name ] = present;

    // Was the Rh factor not set but it's now required?
    emit needsRh( this->determineRhNeed() );
    if (this->determineRhNeed() && fac == UNDEF) {
        emit needToTest( "(Set Rh Factor)" );
        return;
    }

    this->computeUnitsNeeded();
    sendResult();
}

double RedCellAntigens::getReqToTest( void ) const
{
    return this->reqToTest;
}

bool RedCellAntigens::getAntigenStatus( ANTIGEN_TYPE name ) const
{
    return this->antigenArray[ name ];
}

int RedCellAntigens::getDesiredQty( void ) const
{
    return this->desiredQty;
}

bool RedCellAntigens::determineRhNeed( void ) const
{
    if (getAntigenStatus( C ) ||
        getAntigenStatus( c ) ||
        getAntigenStatus( E ) ||
        getAntigenStatus( e )   ) return true;

    return false;
}

/////
// Now the slots must be defined
/////
void RedCellAntigens::enable_C( bool pr )   {setAntigen( C, pr );}
void RedCellAntigens::enable_c( bool pr )   {setAntigen( c, pr );}
void RedCellAntigens::enable_E( bool pr )   {setAntigen( E, pr );}
void RedCellAntigens::enable_e( bool pr )   {setAntigen( e, pr );}
void RedCellAntigens::enable_K( bool pr )   {setAntigen( K, pr );}
void RedCellAntigens::enable_k( bool pr )   {setAntigen( k, pr );}
void RedCellAntigens::enable_Fya( bool pr ) {setAntigen( Fya, pr );}
void RedCellAntigens::enable_Fyb( bool pr ) {setAntigen( Fyb, pr );}
void RedCellAntigens::enable_M( bool pr )   {setAntigen( M, pr );}
void RedCellAntigens::enable_N( bool pr )   {setAntigen( N, pr );}
void RedCellAntigens::enable_S( bool pr )   {setAntigen( S, pr );}
void RedCellAntigens::enable_s( bool pr )   {setAntigen( s, pr );}
void RedCellAntigens::enable_Lea( bool pr ) {setAntigen( Lea, pr );}
void RedCellAntigens::enable_Leb( bool pr ) {setAntigen( Leb, pr );}
void RedCellAntigens::enable_Jka( bool pr ) {setAntigen( Jka, pr );}
void RedCellAntigens::enable_Jkb( bool pr ) {setAntigen( Jkb, pr );}
void RedCellAntigens::enable_P1( bool pr )  {setAntigen( P1, pr );}


void RedCellAntigens::setRhFactor( RH_FACTOR factor )
{
    /*
     * Update the Rh factor based on the new request, then send the
     * new results back to the interface.
     */
    this->fac = factor;

    // Was the Rh factor not set but it's now required?
    if (this->determineRhNeed() && fac == UNDEF) {
        emit needToTest( "(Set Rh Factor)" );
        return;
    }

    this->computeUnitsNeeded();

    sendResult();
}

void RedCellAntigens::setQuantity( int quantity )
{
    if (quantity <= 0)
        this->desiredQty = 1;

    // Do this setting FIRST otherwise computation is with old values!
    this->desiredQty = quantity;

    // Was the Rh factor not set but it's now required?
    if (this->determineRhNeed() && fac == UNDEF) {
        emit needToTest( "(Set Rh Factor)" );
        return;
    }

    this->computeUnitsNeeded();

    sendResult();
    emit newQuantity( quantity );
}


///////////////////////////////////////////////////////////////////////////////
// (Somewhat more modular) resetter functions
///////////////////////////////////////////////////////////////////////////////
void RedCellAntigens::resetAll( void )
{
    this->resetAntigens();
    this->resetRhFactor();
    this->resetQuantity();
}

void RedCellAntigens::resetAntigens( void )
{
    setAntigen( C,   false );
    emit C_set( false );
    setAntigen( c,   false );
    emit c_set( false );
    setAntigen( E,   false );
    emit E_set( false );
    setAntigen( e,   false );
    emit e_set( false );
    setAntigen( K,   false );
    emit K_set( false );
    setAntigen( k,   false );
    emit k_set( false );
    setAntigen( Fya, false );
    emit Fya_set( false );
    setAntigen( Fyb, false );
    emit Fyb_set( false );
    setAntigen( M,   false );
    emit M_set( false );
    setAntigen( N,   false );
    emit N_set( false );
    setAntigen( S,   false );
    emit S_set( false );
    setAntigen( s,   false );
    emit s_set( false );
    setAntigen( Lea, false );
    emit Lea_set( false );
    setAntigen( Leb, false );
    emit Leb_set( false );
    setAntigen( Jka, false );
    emit Jka_set( false );
    setAntigen( Jkb, false );
    emit Jkb_set( false );
    setAntigen( P1,  false );
    emit P1_set( false );

}

void RedCellAntigens::resetRhFactor( void )
{
    this->setRhFactor( UNDEF );

    // UPDATE UI to reflect the changes/reset
    emit rhReset();
}

void RedCellAntigens::resetQuantity( void )
{
    this->setQuantity( 1 );
}


/*
 * Private function to do the actual computation
 *
 * WARNING: This function assumes that fac is set properly before it is
 *          called (hence why it's a private function). If this were called
 *          when an Rh factor was UNDEF but one of the Rh antigens were on,
 *          the integrity of the calculation could NOT be guaranteed.
 */
double RedCellAntigens::computeUnitsNeeded( void )
{
    double result = 1;

    if (this->getAntigenStatus( C )) {
        if (fac == NEGATIVE)
            result *= 0.97;
        else if (fac == POSITIVE)
            result *= 0.17;
        else
            result *= 0;
    }
    if (this->getAntigenStatus( c )) {
        if (fac == NEGATIVE)
            result *= 0.0002;
        else if (fac == POSITIVE)
            result *= 0.19;
        else
            result *= 0;
    }
    if (this->getAntigenStatus( E )) {
        if (fac == NEGATIVE)
            result *= 0.97;
        else if (fac == POSITIVE)
            result *= 0.57;
        else
            result *= 0;
    }
    if (this->getAntigenStatus( e )) {
        if (fac == NEGATIVE)
            result *= 0.0002;
        else if (fac == POSITIVE)
            result *= 0.02;
        else
            result *= 0;
    }
    if (this->getAntigenStatus( K ))    {result *= 0.91;}
    if (this->getAntigenStatus( k ))    {result *= 0.0002;}
    if (this->getAntigenStatus( Fya ))  {result *= 0.34;}
    if (this->getAntigenStatus( Fyb ))  {result *= 0.17;}
    if (this->getAntigenStatus( Jka ))  {result *= 0.23;}
    if (this->getAntigenStatus( Jkb ))  {result *= 0.28;}
    if (this->getAntigenStatus( M ))    {result *= 0.22;}
    if (this->getAntigenStatus( N ))    {result *= 0.28;}
    if (this->getAntigenStatus( S ))    {result *= 0.45;}
    if (this->getAntigenStatus( s ))    {result *= 0.11;}
    if (this->getAntigenStatus( P1 ))   {result *= 0.21;}
    if (this->getAntigenStatus( Lea ))  {result *= 0.78;}
    if (this->getAntigenStatus( Leb ))  {result *= 0.27;}

    // now that the denominator is found, do the calculation.
    return this->reqToTest = (double) this->getDesiredQty() / result;
}
