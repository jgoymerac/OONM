///////////////////////////////////////////////////////////////////////////////////////
/// @file MyVect.h 																																	///
/// @author Jeff Goymerac 																													///
/// @brief This header file declares/defines a templated array class MyVect					///
///									 																																///
///  			 																																					///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////		
/// @class MyVect 																																	///
/// @brief This templated class stores the values of a vector for our analysis			///
/// 	This class assumes the user will be using real numbers	and limits the values	///
///		to the size of double for return values. 																			///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn MyVect() constructor (default)																							///
/// @brief This is an overloaded default constructor that creates a CylnCord object	///
/// @pre N/A																																				///
/// @post creates an empty MyVect object containing a T pointer to NULL	with size=0	///
///	@param none																																			///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn MyVect(int i) constructor with parameters																		///
/// @brief This is an overloaded constructor that creates a MyVect object	of size i ///
/// @pre i must be an integer value greater than or equal to zero										///
/// @post creates an empty MyVect object containing a T pointer to NULL	with size=i	///
///	@param i - m_size is set to i																										///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn MyVect(const MyVect<T>& s) copy constructor 																///
/// @brief This is a copy constructor that copies a MyVect object	s into the calling///
///		object 																																				///
/// @pre N/A 																																				///
/// @post a copy of a MyVect object is made 																				///
///	@param s The MyVect object to be copied																					///
///////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////
/// @fn ~MyVect() Destructor for MyVect objects																			///
/// @brief Destructor for MyVect 																										///
/// @pre i must be an integer value greater than or equal to zero										///
/// @post creates an empty MyVect object containing a T pointer to NULL	with size=i	///
///	@param i - m_size is set to i																										///
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
/// @fn operator= (constMyVect<T>& rhs)		Assignment																///
/// @brief MyVect assignment Operator 																							///
/// @pre N/A 																																				///
/// @post calling object values are set equal to those in rhs												///
///	@param rhs MyVect object to set the calling object															///
/// @return Returns a referrence to the calling object with the new values			 		///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator= (const T& rhs)	Scalar Assignment 																///
/// @brief MyVect Scalar Assignment Operator 																				///
/// @pre N/A 																																				///
/// @post calling object values are set equal to that of rhs												///
///	@param rhs class T object to set the calling object															///
/// @return Returns a referrence to the calling object with the new values			 		///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator+ (const MyVect<T>& rhs) const	Addition														///
/// @brief MyVect Addition operator 	 																							///
/// @pre addition must be defined for class T																				///
/// @post N/A 																																			///
///	@param rhs MyVect object to be added to the calling object 											///
/// @return Returns a const MyVect object containg the sum of the individual members///
/// 	of the calling object and rhs 																					 			///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator- (const MyVect<T>& rhs) const	Subtraction													///
/// @brief MyVect Subtraction operator 	 																						///
/// @pre subtraction  must be defined for class T																		///
/// @post N/A 																																			///
///	@param rhs MyVect object to be subtracted from the calling object 							///
/// @return Returns a const MyVect object containg the difference of the individual ///
///		members of the calling object and rhs 																				///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator- () const	Negation 																								///
/// @brief MyVect Negation operator 	 																							///
/// @pre Negation must be defined for class T 																			///
/// @post N/A 																																			///
///	@param N/A 																								 											///
/// @return Returns a const MyVect object containg the negative of the individual  	///
///		members of the calling object  																						 		///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator* (const T& s) 	Scalar Multiplication																///
/// @brief MyVect scalar Multiplication operator 																		///
/// @pre multiplication must be defined for class T																	///
/// @post N/A 																																			///
///	@param s class T object to be multiply the calling object by										///
/// @return Returns a MyVect object containg the product of the individual members 	///
///		of  the calling object and s 																							 		///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator* (const MyVect<T>& rhs)	Dot Product																///
/// @brief MyVect dot product operator 																							///
/// @pre multiplication and addition must be defined for class T										///
/// @post N/A 																																			///
///	@param rhs MyVect<T> object to be he calling object by													///
/// @return Returns a class T object containg the Dot product of the calling object	///
///		and rhs 										 																							 		///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator== (const MyVect<T>& rhs)  Comparison																///
/// @brief MyVect Comparison operator 																							///
/// @pre Comparision operator must be defined for class T														///
/// @post N/A 																																			///
///	@param rhs the MyVect<T> object to compare the calling object to 								///
/// @return Returns true if the calling object is equal to rhs false otherwise 		 	///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator!= (const MyVect<T>& rhs)  Not equal Comparison											///
/// @brief MyVect Not equal Comparison operator 																		///
/// @pre Comparision operator must be defined for MyVect<T>													///
/// @post N/A 																																			///
///	@param rhs the MyVect<T> object to compare the calling object to 								///
/// @return Returns true if the calling object is not equal to rhs false otherwise 	///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn size() 				m_size Accessor 																							///
/// @brief MyVect m_size Accessor 		 																							///
/// @pre N/A 																																				///
/// @post N/A 																																			///
///	@param N/A 																																			///
/// @return Returns a const int equal to m_size for the calling object 				 		 	///
///////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////
/// @fn copy(MyVect<T> s)		Copy 							 																			///
/// @brief this is a private copy function for member functions to use in order to 	///
///		protect the member variables 																									///
/// @pre The = operator must be defined for the templated class in order for this 	///
///		Function to work correctly.																										///
/// @post The values of s are copied into this																			///
///	@param s The MyVect to be copied		 																						///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn setSize(const int n) 	Size modifier		 																			///
/// @brief MyVect Size modifier 	 		 																							///
/// @pre N/A 																																				///
/// @post the calling object is deleted and a new MyVect object of size n is created///
///	@param n the size of to set the MyVect object to																///
/// @return The calling objects ptr_to_data is now of size n									 		 	///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator<<(MyVect<T> cc)										 																///
/// @brief this is a friend function for outputting a MyVect<T> object						  ///
/// @pre the ostream operator must be defined for class T 													///
/// @post Outputs the values in cc to std out(cout)																	///
///	@param The MyVect<T> to be output																								///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator>>(MyVect<T> cc)										 																///
/// @brief this is a friend function for inputting a MyVect<T> object							  ///
/// @pre the istream operator must be defined for class T 													///
/// @post Outputs the values in cc to std out(cout)																	///
///	@param The MyVect<T> to be input 																								///
///////////////////////////////////////////////////////////////////////////////////////

#ifndef MyVect_h
#define MyVect_h

#include <iostream>
using namespace std;
using std::istream;
using std::ostream;
/********************************Forward Declarations**********************************/
template <class T>
class MyVect;

template <class U>
ostream& operator<< (std::ostream& os, const MyVect<U>& cc);
template <class U>
istream& operator>> (std::istream& is, MyVect<U>& cc);



template <class T>
class MyVect
{
	public:
/***************************Constructors and Destructors******************************/

		MyVect();																					//creates the vector
		MyVect(int i);																		//creates a vector of n objects
		MyVect(const MyVect<T>& s);												//copies the MyVect
		~MyVect();																				//Destroys the MyVect object
/*************************************Operators***************************************/

		T& operator[](int i);															//subscripting
		const T& operator[](int i) const;									//const subscripting
		MyVect<T>& operator=(const MyVect<T>& rhs);				//assignment
		MyVect<T>& operator=(const T&);										//scalar assignment	
		MyVect<T> operator+(const MyVect<T>& rhs)const;		//addition
		MyVect<T> operator-(const MyVect<T>&)const;				//subtraction/ adding the negative
		MyVect<T> operator-()const;												//negative
		MyVect<T> operator*(const T& s); 									//Scaler times a vector
		T operator*(const MyVect<T>& rhs);      					//dot product
		bool operator==(const MyVect<T>& rhs);						//equal comparison
		bool operator!=(const MyVect<T>& rhs);						//not equal comparison
		void insert(const T& s, int i);										//insert element @ i
		void remove(int i);																//remove element @ i			
		void swap(int i, int k);													// swaps 2 elements
		
/*************************************Functions***************************************/
		
		int size() const;																	//return m_size;
		void setSize(const int n);												//sets the size of MyVect object

/**********************************Stream Operators***********************************/

		friend std::ostream& operator<< <>(std::ostream& os, const MyVect<T>& cc);
		friend std::istream& operator>> <>(std::istream& is, MyVect<T>& cc);

	private:
		int m_size;
		T* ptr_to_data;

		void copy(const MyVect<T>& s);										//private copy fuinction
};

#include "MyVect.hpp"
#endif

