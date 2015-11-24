///////////////////////////////////////////////////////////////////////////////////////
/// @file TriDMatrix.h                                                              ///
/// @author Jeff Goymerac                                                           ///
/// @brief This header file declares/defines a templated array class  TriDMatrix    ///
///                                                                                 ///
///                                                                                 ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @class  TriDMatrix                                                              ///
/// @brief This templated class stores the values of a dense Tri matrix for our     ///
///     analysisThis class assumes the user will be using real numbers and limits   ///
///     the values to the size of double for return values.                         ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn  TriDMatrix() constructor (default)                                         ///
/// @brief Overloaded default constructor that creates a TriDMatrix object          ///
/// @pre N/A                                                                        ///
/// @post creates an empty Tri Matrix object                                        ///
/// @param none                                                                     ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn  TriDMatrix(int i) constructor with parameters                              ///
/// @brief Overloaded constructor that creates a Tri Matrix object of size i        ///
/// @pre i must be an integer value greater than or equal to zero                   ///
/// @post creates an empty Tri Matrix object containing all zeros                   ///
/// @param i - m_size is set to i                                                   ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn  TriDMatrix(const MyVect<T>& s) copy constructor                            ///
/// @brief This is a copy constructor that copies a Tri Matrix object s             ///
///       into the calling object                                                   ///
/// @pre N/A                                                                        ///
/// @post a copy of a Tri Matrix object is made                                     ///
/// @param s The Tri Matrix object to be copied                                     ///
///////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////
/// @fn ~ TriDMatrix() Destructor for TriDMatrix objects                            ///
/// @brief Destructor for  TriDMatrix                                               ///
/// @pre N/A                                                                        ///
/// @post Tri Matrix object is destroyed                                            ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator[] (int i)      Accessor                                            ///
/// @brief Accessor for MyVect objects                                              ///
/// @pre index must be valid (greater tan or equal to zero and less than m_size)    ///
/// @post N/A                                                                       ///
/// @param i chooses the value to return                                            ///
/// @return Returns the class T object stored @ that value                          ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator[] (int i)const     Accessor                                        ///
/// @brief const Accessor for MyVect objects                                        ///
/// @pre index must be valid (greater tan or equal to zero and less than m_size)    ///
/// @post N/A                                                                       ///
/// @param i chooses the value to return                                            ///
/// @return Returns a const referrence to the class T object stored @ that value    ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator= (const  TriDMatrix<T>& s)     Assignment                          ///
/// @brief Tri Matrix assignment Operator                                           ///
/// @pre N/A                                                                        ///
/// @post calling object values are set equal to those in s                         ///
/// @param s Tri Matrix object to set the calling object                            ///
/// @return Returns a referrence to the calling object with the new values          ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator+ (const  TriDMatrix<T>& s) const   Addition                        ///
/// @brief Tri Matrix Addition operator                                             ///
/// @pre addition must be defined for class T                                       ///
/// @post N/A                                                                       ///
/// @param s Tri Matrix object to be added to the calling object                    ///
/// @return Returns a const Tri Matrix object containg the sum of the individual    ///
///     members of the calling object and sum                                       ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator- (const  TriDMatrix<T>& s) const   Subtraction                     ///
/// @brief Tri Matrix Subtraction operator                                          ///
/// @pre subtraction  must be defined for class T                                   ///
/// @post N/A                                                                       ///
/// @param s Tri Matrix object to be subtracted from the calling object             ///
/// @return Returns a const MyVect object containg the difference of the individual ///
///     members of the calling object and rhs                                       ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator- () const  Negation                                                ///
/// @brief Tri Matrix Negation operator                                             ///
/// @pre Negation must be defined for MyVect< T>                                    ///
/// @post N/A                                                                       ///
/// @param N/A                                                                      ///
/// @return Returns a const  TriDMatrix object containg the negative of the         ///
///     individual members of the calling object                                    ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator* (const T& s)  Scalar Multiplication                               ///
/// @brief Tri Matrix scalar Multiplication operator                                ///
/// @pre multiplication must be defined for class T                                 ///
/// @post N/A                                                                       ///
/// @param s class T object to be multiply the calling object by                    ///
/// @return Returns a Tri Matrix object containg the product of the individual      ///
///     members of  the calling object and s                                        ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator* (const  TriDMatrix<T>& s) Tri Matrix Product                      ///
/// @brief Tri Matrix Multiplication operator                                       ///
/// @pre multiplication and addition must be defined for class T                    ///
/// @post N/A                                                                       ///
/// @param s  TriDMatrix<T> object to be he calling object by                       ///
/// @return Returns a  TriDMatrix object containg the product of the calling object ///
///   and s                                                                         ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator* (const MyVect<T>& s)   TriDMatrix and MyVect Product              ///
/// @brief Tri Matrix Multiplication operator                                       ///
/// @pre multiplication and addition must be defined for class T                    ///
/// @post N/A                                                                       ///
/// @param s MyVect<T> object to Multiply he calling object by                      ///
/// @return Returns a Tri Matrix object containg the product of the calling object  ///
///     and s                                                                       ///
///////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////
/// @fn size()              m_size Accessor                                         ///
/// @brief  TriDMatrix m_size Accessor                                              ///
/// @pre N/A                                                                        ///
/// @post N/A                                                                       ///
/// @param N/A                                                                      ///
/// @return Returns a const int equal to m_size for the calling object              ///
///////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////
/// @fn copy( TriDMatrix<T> s)      Copy                                            ///
/// @brief this is a private copy function for member functions to use in order to  ///
///     protect the member variables                                                ///
/// @pre The = operator must be defined for the templated class in order for this   ///
///     Function to work correctly.                                                 ///
/// @post The values of s are copied into this                                      ///
/// @param s The Tri Matrix to be copied                                            ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator<<( TriDMatrix<T> cc)                                               ///
/// @brief this is a friend function for outputting a Tri Matrix<T> object          ///
/// @pre the ostream operator must be defined for class T                           ///
/// @post Outputs the values in cc to std out(cout)                                 ///
/// @param The Tri Matrix<T> to be output                                           ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator>>( TriDMatrix<T> cc)                                               ///
/// @brief this is a friend function for inputting a Tri Matrix<T> object           ///
/// @pre the istream operator must be defined for class T                           ///
/// @post Outputs the values in cc to std out(cout)                                 ///
/// @param The Tri Matrix<T> to be input                                            ///
///////////////////////////////////////////////////////////////////////////////////////

#ifndef  TriDMatrix_h
#define  TriDMatrix_h
#include  "Matrix.h"

template <class T>
class  TriDMatrix;

template <class U>
ostream &operator<< (std::ostream &os, const  TriDMatrix<U> &cc);
template <class U>
istream &operator>> (std::istream &is,  TriDMatrix<U> &cc);

template <class T>
class  TriDMatrix: public Matrix<T>
{
public:
    /***************************Constructors and Destructors******************************/
     TriDMatrix ();
     TriDMatrix (int i);
     TriDMatrix (const  TriDMatrix<T> &s);
    virtual ~ TriDMatrix ();
    /*************************************Operators***************************************/

    virtual MyVect<T> &operator[] (int i);
    virtual const MyVect<T> &operator[] (int i)const;
    TriDMatrix<T> &operator= (const  TriDMatrix<T> &s);                      //assignment
    TriDMatrix<T> &operator+ (const  TriDMatrix<T> &s)const;                 //addition
    TriDMatrix<T> &operator- (const  TriDMatrix<T> &s)const;                 //subtraction/ adding the negative
    TriDMatrix<T> &operator- ()const;                                        //negative
    TriDMatrix<T> &operator* (const T& s);                                   //Scaler times a Tri Matrix
    virtual MyVect<T> &operator* (const MyVect<T> &s);                       //TriDMatrix times a MyVect
    TriDMatrix<T> operator* (const  TriDMatrix<T> &s);                       // Tri Matrix times a Tri Matrix
    TriDMatrix<T> operator~ ();                                              //transpose
    virtual int size ()const;                                                //return size
    T aX(int i);
    T bX(int i);
    T cX(int i);
    T aX(int i)const;
    T bX(int i)const;
    T cX(int i)const;
    friend std::ostream &operator<< <> (std::ostream &os, const  TriDMatrix<T> &cc);
    friend std::istream &operator>> <> (std::istream &is,  TriDMatrix<T> &cc);

private:
    MyVect<T> a_data,b_data,c_data;
    int m_size;
    void copy (const  TriDMatrix<T> &s);





};

#include "TriDMatrix.hpp"
#endif