/*
 * Filename: redcellantigens.h
 *
 * Programmer: Daniel Brook (danb358 [at] gmail.com)
 *
 * Interface headers to the backend code which makes the GUI function
 *
 * Last Updated by Daniel Brook on 24-Dec-2012 at 10:30 AM
 */

#ifndef REDCELLANTIGENS_H
#define REDCELLANTIGENS_H

#include <QObject>
#include <QMap>

/*
 * A new data type is provided to make interactions with RedCellAntigens much
 * easier. This also greatly reduces the number of setters and getters.
 */
typedef enum {
    C, c, E, e, K, k, Fya, Fyb, M, N, S, s, Lea, Leb, Jka, Jkb, P1
} ANTIGEN_TYPE;

/*
 * Rh Factor type was also introduced for simplicity.
 */
typedef enum {
    NEGATIVE = -1, UNDEF = 0, POSITIVE = 1
} RH_FACTOR;

class RedCellAntigens : public QObject
{
    Q_OBJECT

public:
    /*
     * Default (Qt Creator provided) Constructor
     */
    explicit RedCellAntigens(QObject *parent = 0);

    /*
     * Operation will take the name of the antigen and a bool denoting if it
     * should be turned on (present = true) or off (present = false).
     *
     * NOTE: This operation has a side effect of recalculating the
     *       reqToTest parameter.
     */
    void setAntigen( ANTIGEN_TYPE name, bool present );

    /*
     * Returns the number of units that should be tested to acheive the
     * desired quantity of patient compatible units.
     */
    double getReqToTest( void ) const;

    /*
     * Returns if the requested antigen is enabled or disabled
     */
    bool getAntigenStatus( ANTIGEN_TYPE name ) const;

    /*
     * Returns how many units are being multiplied to acheive reqToTest
     */
    int getDesiredQty( void ) const;

    /*
     * Returns true if the user needs to set an Rh factor for the
     * computation to actually take place.
     */
    bool determineRhNeed( void ) const;
    
signals:
    /*
     * The number of units that should be tested to find the desired amount
     * of blood compatible with the antigens set with setAntigen(), multiplied
     * by the quantity desired, set with setQuantity().
     */
    void needToTest( QString );

    /*
     * A true/false corresponding to the need to set the Rhesus factor if
     * antigens with Rh-specific calculations are selected.
     */
    void needsRh( bool );

    /*
     * Updates any watching widgets that a change to the quantity occurred
     */
    void newQuantity( int );

    /*
     * A signal to help us call the function to override the default radio
     * button pairing (allowing both buttons to be un-set)
     */
    void rhReset( void );

    // All the possible antigens will emit whether they are on or off
    void C_set( bool );
    void c_set( bool );
    void E_set( bool );
    void e_set( bool );
    void K_set( bool );
    void k_set( bool );
    void Fya_set( bool );
    void Fyb_set( bool );
    void M_set( bool );
    void N_set( bool );
    void S_set( bool );
    void s_set( bool );
    void Lea_set( bool );
    void Leb_set( bool );
    void Jka_set( bool );
    void Jkb_set( bool );
    void P1_set( bool );

public slots:
    // Every parameter has to have its own slot it seems
    void enable_C( bool );
    void enable_c( bool );
    void enable_E( bool );
    void enable_e( bool );
    void enable_K( bool );
    void enable_k( bool );
    void enable_Fya( bool );
    void enable_Fyb( bool );
    void enable_M( bool );
    void enable_N( bool );
    void enable_S( bool );
    void enable_s( bool );
    void enable_Lea( bool );
    void enable_Leb( bool );
    void enable_Jka( bool );
    void enable_Jkb( bool );
    void enable_P1( bool );

    /*
     * Sets the Rhesus factor, which is required by antigen calculations
     * in the Rh antibody group.
     */
    void setRhFactor( RH_FACTOR fac );

    /*
     * Change the number of desired compatible units after the antigen
     * screening process is complete. Arguments of anything less than 1 will
     * be reverted to 1.
     *
     * NOTE: This operation has a side effect of recalculating the
     *       reqToTest parameter.
     */
    void setQuantity( int quantity );

    ///////////////////////// ALL RESETTING OPTIONS ///////////////////////////
    void resetAll( void );
    void resetAntigens( void );
    void resetRhFactor( void );
    void resetQuantity( void );

private:
    /*
     * Recompute function. This is internal to the class and will be run each
     * time one of the slots is activated (i.e. an instance's parameters are
     * changed in some way). This was done to allow instant access to the
     * result by accessing a data member directly (reqToTest) since now each
     * call to a slot will cause the computation will happen and the result is
     * "emitted" to any listeners connected to it.
     */
    double computeUnitsNeeded( void );

    /*
     * Because so many different slots trigger recomputes and need the output
     * to be properly formatted every time, this utility function was created.
     * This makes a nicely-formatted output otherwise scientific notation comes
     * up very often and is just not friendly to look at. Also, the output
     * to be emitted needs to be a QString anyway, so this puts us closer
     * in that direction anyway.
     */
    void sendResult( void );

    /*
     * Private data members
     */
    int desiredQty;
    RH_FACTOR fac;
    QMap< ANTIGEN_TYPE, bool > antigenArray;
    double reqToTest;
};

#endif // REDCELLANTIGENS_H
