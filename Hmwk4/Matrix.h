///////////////////////////////////////////////////////////////////////////////////////
/// @file Matrix.h 																																	///
/// @author Jeff Goymerac 																													///
/// @brief This header file declares/defines a templated array class Matrix					///
///									 																																///
///  			 																																					///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////		
/// @class Matrix 																																	///
/// @brief This templated class stores the values of a matrix for our analysis			///
/// 	This class assumes the user will be using real numbers	and limits the values	///
///		to the size of double for return values. 																			///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn Matrix() constructor (default)																							///
/// @brief This is an overloaded default constructor that creates a Matrix object		///
/// @pre N/A																																				///
/// @post creates an empty Matrix object 																						///
///	@param none																																			///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn Matrix(int i) constructor with parameters																		///
/// @brief This is an overloaded constructor that creates a Matrix object	of size i ///
/// @pre i must be an integer value greater than or equal to zero										///
/// @post creates an empty Matrix object containing all zeros 											///
///	@param i - m_size is set to i																										///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn Matrix(const MyVect<T>& s) copy constructor 																///
/// @brief This is a copy constructor that copies a Matrix object	s into the calling///
///		object 																																				///
/// @pre N/A 																																				///
/// @post a copy of a Matrix object is made 																				///
///	@param s The Matrix object to be copied																					///
///////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////
/// @fn ~Matrix() Destructor for MyVect objects																			///
/// @brief Destructor for MyVect 																										///
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
/// @fn operator= (const Matrix<T>& s)		Assignment																///
/// @brief Matrix assignment Operator 																							///
/// @pre N/A 																																				///
/// @post calling object values are set equal to those in s													///
///	@param s Matrix object to set the calling object																///
/// @return Returns a referrence to the calling object with the new values			 		///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator+ (const Matrix<T>& s) const	Addition															///
/// @brief Matrix Addition operator 	 																							///
/// @pre addition must be defined for class T																				///
/// @post N/A 																																			///
///	@param s Matrix object to be added to the calling object 												///
/// @return Returns a const Matrix object containg the sum of the individual members///
/// 	of the calling object and sum 																					 			///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator- (const Matrix<T>& s) const	Subtraction														///
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
/// @return Returns a const Matrix object containg the negative of the individual  	///
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
/// @fn operator* (const Matrix<T>& s)	Matrix Product															///
/// @brief Matrix Multiplication operator																						///
/// @pre multiplication and addition must be defined for class T										///
/// @post N/A 																																			///
///	@param s Matrix<T> object to be he calling object by														///
/// @return Returns a Matrix object containg the product of the calling object			///
///   and s   																																			///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator* (const MyVect<T>& s)	Matrix and MyVect Product										///
/// @brief Matrix Multiplication operator																						///
/// @pre multiplication and addition must be defined for class T										///
/// @post N/A 																																			///
///	@param s MyVect<T> object to Multiply he calling object by											///
/// @return Returns a Matrix object containg the product of the calling object			///
///		and s 	 										 																							 		///
///////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////
/// @fn size() 				m_size Accessor 																							///
/// @brief Matrix m_size Accessor 		 																							///
/// @pre N/A 																																				///
/// @post N/A 																																			///
///	@param N/A 																																			///
/// @return Returns a const int equal to m_size for the calling object 				 		 	///
///////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////
/// @fn copy(Matrix<T> s)		Copy 							 																			///
/// @brief this is a private copy function for member functions to use in order to 	///
///		protect the member variables 																									///
/// @pre The = operator must be defined for the templated class in order for this 	///
///		Function to work correctly.																										///
/// @post The values of s are copied into this																			///
///	@param s The Matrix to be copied		 																						///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator<<(Matrix<T> cc)										 																///
/// @brief this is a friend function for outputting a Matrix<T> object						  ///
/// @pre the ostream operator must be defined for class T 													///
/// @post Outputs the values in cc to std out(cout)																	///
///	@param The Matrix<T> to be output																								///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator>>(Matrix<T> cc)										 																///
/// @brief this is a friend function for inputting a Matrix<T> object							  ///
/// @pre the istream operator must be defined for class T 													///
/// @post Outputs the values in cc to std out(cout)																	///
///	@param The Matrix<T> to be input 																								///
///////////////////////////////////////////////////////////////////////////////////////

#ifndef Matrix_h
#define Matrix_h

/********************************Forward Declarations**********************************/
template <class T>
class Matrix;

template <class U>
ostream& operator<< (std::ostream& os, const Matrix<U>& cc);
template <class U>
istream& operator>> (std::istream& is, Matrix<U>& cc);


template <class T>
class Matrix
{
	public:
/***************************Constructors and Destructors******************************/
		Matrix();
		Matrix(const int i);
		Matrix(const Matrix<T>& s);
		~Matrix();
/*************************************Operators***************************************/

		MyVect<T>& operator[](int i);
		const MyVect<T>& operator[](int i)const;
		Matrix<T>& operator=(const Matrix<T>& s);						//assignment
		Matrix<T>& operator+(const Matrix<T>& s)const;			//addition
		Matrix<T>& operator-(const Matrix<T>& s)const;			//subtraction/ adding the negative
		Matrix<T>& operator-()const;												//negative
		Matrix<T>& operator*(const T& s); 									//Scaler times a Matrix
		MyVect<T>& operator*(const MyVect<T>& s);						//Matrix times a MyVect
		Matrix<T>& operator*(const Matrix<T>& s);						// Matrix times a Matrix
		Matrix<T> operator~();															//transpose
		
		int size() const;																		//return size

		friend std::ostream& operator<< <>(std::ostream& os, const Matrix<T>& cc);
		friend std::istream& operator>> <>(std::istream& is, Matrix<T>& cc);

	private:
		MyVect<T> *m_data;
		int m_size;
		void copy(const Matrix<T>& s);





};

#include "Matrix.hpp"
#endif