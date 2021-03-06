///////////////////////////////////////////////////////////////////////////////////////
/// @file UTMatrix.h 																																///
/// @author Jeff Goymerac 																													///
/// @brief This header file declares/defines a templated array class UTMatrix				///
///									 																																///
///  			 																																					///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @class UTMatrix 																																///
/// @brief This templated class stores the values of a dense matrix for our analysis///
/// 	This class assumes the user will be using real numbers	and limits the values	///
///		to the size of double for return values. 																			///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn UTMatrix() constructor (default)																						///
/// @brief This is an overloaded default constructor that creates a Matrix object		///
/// @pre N/A																																				///
/// @post creates an empty Matrix object 																						///
///	@param none																																			///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn UTMatrix(int i) constructor with parameters																	///
/// @brief This is an overloaded constructor that creates a Matrix object	of size i ///
/// @pre i must be an integer value greater than or equal to zero										///
/// @post creates an empty Matrix object containing all zeros 											///
///	@param i - m_size is set to i																										///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn UTMatrix(const MyVect<T>& s) copy constructor 															///
/// @brief This is a copy constructor that copies a Matrix object	s into the calling///
///		object 																																				///
/// @pre N/A 																																				///
/// @post a copy of a Matrix object is made 																				///
///	@param s The Matrix object to be copied																					///
///////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////
/// @fn ~UTMatrix() Destructor forUTMatrix objects																	///
/// @brief Destructor for UTMatrix																									///
/// @pre N/A 																																				///
/// @post Matrix object is destroyed 																								///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator[] (int i)		Accessor																							///
/// @brief Accessor for MyVect objects																							///
/// @pre index must be valid (greater tan or equal to zero and less than m_size)		///
/// @post N/A 																																			///
///	@param i chooses the value to return																						///
/// @return Returns the class T object stored @ that value 													///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator[] (int i)const		Accessor																					///
/// @brief const Accessor for MyVect objects																				///
/// @pre index must be valid (greater tan or equal to zero and less than m_size)		///
/// @post N/A 																																			///
///	@param i chooses the value to return																						///
/// @return Returns a const referrence to the class T object stored @ that value 		///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator= (const UTMatrix<T>& s)		Assignment															///
/// @brief Matrix assignment Operator 																							///
/// @pre N/A 																																				///
/// @post calling object values are set equal to those in s													///
///	@param s Matrix object to set the calling object																///
/// @return Returns a referrence to the calling object with the new values			 		///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator+ (const UTMatrix<T>& s) const	Addition														///
/// @brief Matrix Addition operator 	 																							///
/// @pre addition must be defined for class T																				///
/// @post N/A 																																			///
///	@param s Matrix object to be added to the calling object 												///
/// @return Returns a const Matrix object containg the sum of the individual members///
/// 	of the calling object and sum 																					 			///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator- (const UTMatrix<T>& s) const	Subtraction													///
/// @brief Matrix Subtraction operator 	 																						///
/// @pre subtraction  must be defined for class T																		///
/// @post N/A 																																			///
///	@param s Matrix object to be subtracted from the calling object 								///
/// @return Returns a const MyVect object containg the difference of the individual ///
///		members of the calling object and rhs 																				///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator- () const	Negation 																								///
/// @brief Matrix Negation operator 	 																							///
/// @pre Negation must be defined for MyVect< T>																		///
/// @post N/A 																																			///
///	@param N/A 																								 											///
/// @return Returns a const UTMatrix object containg the negative of the individual ///
///		members of the calling object  																						 		///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator* (const T& s) 	Scalar Multiplication																///
/// @brief Matrix scalar Multiplication operator 																		///
/// @pre multiplication must be defined for class T																	///
/// @post N/A 																																			///
///	@param s class T object to be multiply the calling object by										///
/// @return Returns a Matrix object containg the product of the individual members 	///
///		of  the calling object and s 																							 		///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator* (const UTMatrix<T>& s)	Matrix Product														///
/// @brief Matrix Multiplication operator																						///
/// @pre multiplication and addition must be defined for class T										///
/// @post N/A 																																			///
///	@param s UTMatrix<T> object to be he calling object by													///
/// @return Returns a UTMatrix object containg the product of the calling object		///
///   and s   																																			///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator* (const MyVect<T>& s)	UTMatrix and MyVect Product									///
/// @brief Matrix Multiplication operator																						///
/// @pre multiplication and addition must be defined for class T										///
/// @post N/A 																																			///
///	@param s MyVect<T> object to Multiply he calling object by											///
/// @return Returns a Matrix object containg the product of the calling object			///
///		and s 	 										 																							 		///
///////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////
/// @fn size() 				m_size Accessor 																							///
/// @brief UTMatrix m_size Accessor 		 																						///
/// @pre N/A 																																				///
/// @post N/A 																																			///
///	@param N/A 																																			///
/// @return Returns a const int equal to m_size for the calling object 				 		 	///
///////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////
/// @fn copy(UTMatrix<T> s)		Copy 							 																		///
/// @brief this is a private copy function for member functions to use in order to 	///
///		protect the member variables 																									///
/// @pre The = operator must be defined for the templated class in order for this 	///
///		Function to work correctly.																										///
/// @post The values of s are copied into this																			///
///	@param s The Matrix to be copied		 																						///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator<<(UTMatrix<T> cc)										 															///
/// @brief this is a friend function for outputting a Matrix<T> object						  ///
/// @pre the ostream operator must be defined for class T 													///
/// @post Outputs the values in cc to std out(cout)																	///
///	@param The Matrix<T> to be output																								///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator>>(UTMatrix<T> cc)										 															///
/// @brief this is a friend function for inputting a Matrix<T> object							  ///
/// @pre the istream operator must be defined for class T 													///
/// @post Outputs the values in cc to std out(cout)																	///
///	@param The Matrix<T> to be input 																								///
///////////////////////////////////////////////////////////////////////////////////////

#ifndef UTMatrix_h
#define UTMatrix_h
#include "Matrix.h"

template <class T>
class UTMatrix;

template <class U>
ostream& operator<< (std::ostream& os, const UTMatrix<U>& cc);
template <class U>
istream& operator>> (std::istream& is, UTMatrix<U>& cc);

template <class T>
class UTMatrix: public Matrix<T>
{
public:
	/***************************Constructors and Destructors******************************/
	UTMatrix();
	UTMatrix(const int i);
	UTMatrix(const UTMatrix<T>& s);
	virtual ~UTMatrix();
	/*************************************Operators***************************************/

	virtual MyVect<T>& operator[](int i);
	virtual const MyVect<T>& operator[](int i)const;
	UTMatrix<T>& operator=(const UTMatrix<T>& s);					  							//assignment
	UTMatrix<T>& operator+(const UTMatrix<T>& s)const;										//addition
	UTMatrix<T>& operator-(const UTMatrix<T>& s)const;										//subtraction/ adding the negative
	UTMatrix<T>& operator-()const;																  			//negative
	UTMatrix<T>& operator*(const T& s); 													  			//Scaler times a Matrix
	virtual MyVect<T>& operator*(const MyVect<T>& s) throw (std::string);	//Matrix times a MyVect
	UTMatrix<T> operator*(const UTMatrix<T>& s) throw (std::string);			// Matrix times a Matrix
	UTMatrix<T> operator~();														  								//transpose

	virtual int size() const;																	  					//return size

	friend std::ostream& operator<< <>(std::ostream& os, const UTMatrix<T>& cc);
	friend std::istream& operator>> <>(std::istream& is, UTMatrix<T>& cc);

private:
	MyVect<T> *m_data;
	int m_size;
	void copy(const UTMatrix<T>& s);





};

#include "UTMatrix.hpp"
#endif