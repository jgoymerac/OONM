///////////////////////////////////////////////////////////////////////////////////////
/// @file Matrix.h                                                                  ///
/// @author Jeff Goymerac                                                           ///
/// @brief This header file declares/defines a templated array class SymMatrix      ///
///                                                                                 ///
///                                                                                 ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @class SymMatrix                                                                ///
/// @brief This templated class stores the values of a dense matrix for our analysis///
///     This class assumes the user will be using real numbers and limits the values///
///     to the size of double for return values.                                    ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn SymMatrix() constructor (default)                                           ///
/// @brief This is an overloaded default constructor that creates a Matrix object   ///
/// @pre N/A                                                                        ///
/// @post creates an empty Matrix object                                            ///
/// @param none                                                                     ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn SymMatrix(int i) constructor with parameters                                ///
/// @brief This is an overloaded constructor that creates a Matrix object of size i ///
/// @pre i must be an integer value greater than or equal to zero                   ///
/// @post creates an empty Matrix object containing all zeros                       ///
/// @param i - m_size is set to i                                                   ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn SymMatrix(const MyVect<T>& s) copy constructor                              ///
/// @brief This is a copy constructor that copies a Matrix object s into the calling///
///     object                                                                      ///
/// @pre N/A                                                                        ///
/// @post a copy of a Matrix object is made                                         ///
/// @param s The Matrix object to be copied                                         ///
///////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////
/// @fn ~SymMatrix() Destructor forSymMatrix objects                                ///
/// @brief Destructor for SymMatrix                                                 ///
/// @pre N/A                                                                        ///
/// @post Matrix object is destroyed                                                ///
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
/// @fn operator= (const SymMatrix<T>& s)     Assignment                            ///
/// @brief Matrix assignment Operator                                               ///
/// @pre N/A                                                                        ///
/// @post calling object values are set equal to those in s                         ///
/// @param s Matrix object to set the calling object                                ///
/// @return Returns a referrence to the calling object with the new values          ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator+ (const SymMatrix<T>& s) const   Addition                          ///
/// @brief Matrix Addition operator                                                 ///
/// @pre addition must be defined for class T                                       ///
/// @post N/A                                                                       ///
/// @param s Matrix object to be added to the calling object                        ///
/// @return Returns a const Matrix object containg the sum of the individual members///
///     of the calling object and sum                                               ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator- (const SymMatrix<T>& s) const   Subtraction                       ///
/// @brief Matrix Subtraction operator                                              ///
/// @pre subtraction  must be defined for class T                                   ///
/// @post N/A                                                                       ///
/// @param s Matrix object to be subtracted from the calling object                 ///
/// @return Returns a const MyVect object containg the difference of the individual ///
///     members of the calling object and rhs                                       ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator- () const  Negation                                                ///
/// @brief Matrix Negation operator                                                 ///
/// @pre Negation must be defined for MyVect< T>                                    ///
/// @post N/A                                                                       ///
/// @param N/A                                                                      ///
/// @return Returns a const SymMatrix object containg the negative of the individual///
///     members of the calling object                                               ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator* (const T& s)  Scalar Multiplication                               ///
/// @brief Matrix scalar Multiplication operator                                    ///
/// @pre multiplication must be defined for class T                                 ///

/// @param s class T object to be multiply the calling object by                    ///
/// @return Returns a Matrix object containg the product of the individual members  ///
///     of  the calling object and s                                                ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator* (const SymMatrix<T>& s) Matrix Product                            ///
/// @brief Matrix Multiplication operator                                           ///
/// @pre multiplication and addition must be defined for class T                    ///
/// @post N/A                                                                       ///
/// @param s SymMatrix<T> object to be he calling object by                         ///
/// @return Returns a SymMatrix object containg the product of the calling object   ///
///   and s                                                                         ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator* (const MyVect<T>& s)  SymMatrix and MyVect Product                ///
/// @brief Matrix Multiplication operator                                           ///
/// @pre multiplication and addition must be defined for class T                    ///
/// @post N/A                                                                       ///
/// @param s MyVect<T> object to Multiply he calling object by                      ///
/// @return Returns a Matrix object containg the product of the calling object      ///
///     and s                                                                       ///
///////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////
/// @fn size()              m_size Accessor                                         ///
/// @brief SymMatrix m_size Accessor                                                ///
/// @pre N/A                                                                        ///
/// @post N/A                                                                       ///
/// @param N/A                                                                      ///
/// @return Returns a const int equal to m_size for the calling object              ///
///////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////
/// @fn copy(SymMatrix<T> s)      Copy                                              ///
/// @brief this is a private copy function for member functions to use in order to  ///
///     protect the member variables                                                ///
/// @pre The = operator must be defined for the templated class in order for this   ///
///     Function to work correctly.                                                 ///
/// @post The values of s are copied into this                                      ///
/// @param s The Matrix to be copied                                                ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator<<(SymMatrix<T> cc)                                                 ///
/// @brief this is a friend function for outputting a Matrix<T> object              ///
/// @pre the ostream operator must be defined for class T                           ///
/// @post Outputs the values in cc to std out(cout)                                 ///
/// @param The Matrix<T> to be output                                               ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator>>(SymMatrix<T> cc)                                                 ///
/// @brief this is a friend function for inputting a Matrix<T> object               ///
/// @pre the istream operator must be defined for class T                           ///
/// @post Outputs the values in cc to std out(cout)                                 ///
/// @param The Matrix<T> to be input                                                ///
///////////////////////////////////////////////////////////////////////////////////////

#ifndef SymMatrix_h
#define SymMatrix_h
#include "Matrix.h"

/**
 @class	SymMatrix

 @brief	A symbol matrix.

 @author	Jgoym
 @date	3/21/2018

 @tparam	T	Generic type parameter.
 */

template <class T>
class SymMatrix;

/**
 @fn	template <class U> ostream &operator<< (std::ostream &os, const SymMatrix<U> &cc); template <class U> istream &operator>> (std::istream &is, SymMatrix<U> &cc);

 @brief	Cast that converts the given std::ostream &amp; to a &lt;&lt;&lt; U&gt;

 @author	Jgoym
 @date	3/21/2018

 @param [in,out]	os	The operating system.
 @param 			cc	The Cc.

 @return	The result of the operation.
 */

template <class U>
ostream &operator<< (std::ostream &os, const SymMatrix<U> &cc);

/**
 @fn	template <class U> istream &operator>> (std::istream &is, SymMatrix<U> &cc);

 @brief	Stream extraction operator

 @author	Jgoym
 @date	3/21/2018

 @tparam	U	Generic type parameter.
 @param [in,out]	is	The is.
 @param [in,out]	cc	The Cc.

 @return	The result of the operation.
 */

template <class U>
istream &operator>> (std::istream &is, SymMatrix<U> &cc);

template <class T>

/**
 @class	SymMatrix

 @brief	A symbol matrix.

 @author	Jgoym
 @date	3/21/2018
 */

class SymMatrix: public Matrix<T>
{
public:

    /**
     @fn	SymMatrix::SymMatrix ();
    
     @brief	*************************Constructors and Destructors*****************************
    
     @author	Jgoym
     @date	3/21/2018
     */

    SymMatrix ();

    /**
     @fn	SymMatrix::SymMatrix (const int i);
    
     @brief	Constructor
    
     @author	Jgoym
     @date	3/21/2018
    
     @param	i	Zero-based index of the.
     */

    SymMatrix (const int i);

    /**
     @fn	SymMatrix::SymMatrix (const SymMatrix<T> &s);
    
     @brief	Constructor
    
     @author	Jgoym
     @date	3/21/2018
    
     @param	s	A SymMatrix&lt;T&gt; to process.
     */

    SymMatrix (const SymMatrix<T> &s);

    /**
     @fn	virtual SymMatrix::~SymMatrix ();
    
     @brief	Destructor
    
     @author	Jgoym
     @date	3/21/2018
     */

    virtual ~SymMatrix ();

    /**
     @fn	virtual MyVect<T> SymMatrix::&operator[] (int i);
    
     @brief	***********************************Operators**************************************
    
     @author	Jgoym
     @date	3/21/2018
    
     @param	i	Zero-based index of the.
    
     @return	The indexed value.
     */

    virtual MyVect<T> &operator[] (int i);

    /**
     @fn	virtual const MyVect<T> SymMatrix::&operator[] (int i)const;
    
     @brief	Array indexer operator
    
     @author	Jgoym
     @date	3/21/2018
    
     @param	i	Zero-based index of the.
    
     @return	The indexed value.
     */

    virtual const MyVect<T> &operator[] (int i)const;

    /**
     @fn	SymMatrix<T> SymMatrix::&operator= (const SymMatrix<T> &s);
    
     @brief	Assignment operator
    
     @author	Jgoym
     @date	3/21/2018
    
     @param	s	A SymMatrix&lt;T&gt; to process.
    
     @return	A shallow copy of this object.
     */

    SymMatrix<T> &operator= (const SymMatrix<T> &s);                    //assignment

    /**
     @fn	SymMatrix<T> SymMatrix::&operator+ (const SymMatrix<T> &s)const;
    
     @brief	Addition operator
    
     @author	Jgoym
     @date	3/21/2018
    
     @param	s	A SymMatrix&lt;T&gt; to process.
    
     @return	The result of the operation.
     */

    SymMatrix<T> &operator+ (const SymMatrix<T> &s)const;               //addition

    /**
     @fn	SymMatrix<T> SymMatrix::&operator- (const SymMatrix<T> &s)const;
    
     @brief	Subtraction operator
    
     @author	Jgoym
     @date	3/21/2018
    
     @param	s	A SymMatrix&lt;T&gt; to process.
    
     @return	The result of the operation.
     */

    SymMatrix<T> &operator- (const SymMatrix<T> &s)const;               //subtraction/ adding the negative

    /**
     @fn	SymMatrix<T> SymMatrix::&operator- ()const;
    
     @brief	Negation operator
    
     @author	Jgoym
     @date	3/21/2018
    
     @return	The result of the operation.
     */

    SymMatrix<T> &operator- ()const;                                    //negative

    /**
     @fn	SymMatrix<T> SymMatrix::&operator* (const T& s);
    
     @brief	Multiplication operator
    
     @author	Jgoym
     @date	3/21/2018
    
     @param	s	A T to process.
    
     @return	The result of the operation.
     */

    SymMatrix<T> &operator* (const T& s);                               //Scaler times a Matrix

    /**
     @fn	virtual MyVect<T> SymMatrix::&operator* (const MyVect<T> &s);
    
     @brief	Multiplication operator
    
     @author	Jgoym
     @date	3/21/2018
    
     @param	s	A MyVect&lt;T&gt; to process.
    
     @return	The result of the operation.
     */

    virtual MyVect<T> &operator* (const MyVect<T> &s);                  //Matrix times a MyVect

    /**
     @fn	SymMatrix<T> SymMatrix::operator* (const SymMatrix<T> &s);
    
     @brief	Multiplication operator
    
     @author	Jgoym
     @date	3/21/2018
    
     @param	s	A SymMatrix&lt;T&gt; to process.
    
     @return	The result of the operation.
     */

    SymMatrix<T> operator* (const SymMatrix<T> &s);                     // Matrix times a Matrix

    /**
     @fn	SymMatrix<T> SymMatrix::operator~ ();
    
     @brief	Bitwise 'ones complement' operator
    
     @author	Jgoym
     @date	3/21/2018
    
     @return	The result of the operation.
     */

    SymMatrix<T> operator~ ();                                          //transpose

    /**
     @fn	virtual int SymMatrix::size ()const;
    
     @brief	Gets the size
    
     @author	Jgoym
     @date	3/21/2018
    
     @return	An int.
     */

    virtual int size ()const;                                           //return size

    /**
     @fn	friend std::ostream &operator<< SymMatrix::<> (std::ostream &os, const SymMatrix<T> &cc); friend std::istream &operator>> <> (std::istream &is, SymMatrix<T> &cc);
    
     @brief	Cast that converts the given std::ostream &amp; to a &lt;&lt;&lt;&gt;
    
     @author	Jgoym
     @date	3/21/2018
    
     @param [in,out]	os	The operating system.
     @param 			cc	The Cc.
    
     @return	The result of the operation.
     */

    friend std::ostream &operator<< <> (std::ostream &os, const SymMatrix<T> &cc);

    /**
     @fn	friend std::istream &operator>> SymMatrix::<> (std::istream &is, SymMatrix<T> &cc);
    
     @brief	Stream extraction operator
    
     @author	Jgoym
     @date	3/21/2018
    
     @param [in,out]	is	The is.
     @param [in,out]	cc	The Cc.
    
     @return	The result of the operation.
     */

    friend std::istream &operator>> <> (std::istream &is, SymMatrix<T> &cc);

private:
    /** @brief	The data */
    MyVect<T> *m_data;
    /** @brief	The size */
    int m_size;

    /**
     @fn	void SymMatrix::copy (const SymMatrix<T> &s);
    
     @brief	Copies the given s
    
     @author	Jgoym
     @date	3/21/2018
    
     @param	s	A SymMatrix&lt;T&gt; to process.
     */

    void copy (const SymMatrix<T> &s);





};

#include "SymMatrix.hpp"
#endif