///////////////////////////////////////////////////////////////////////////////////////
/// @file CylnCord.h 																																///
/// @author Jeff Goymerac 																													///
/// @brief This header file declares/defines the templated Cylindrical Coordinate 	///
///		class CylnCord 																																///
///  			 																																					///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////		
/// @class CylnCord 																																///
/// @brief This templated class stores the value of one 3D point in a cylindrical   ///
///		coordinate system. You can use this class to manipulate cylindrical points.		///
///		This class assumes the user knows of the error involed when adding Pi to an 	///
///		integer value.																																///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn copy(CylnCord<T> cc)									 																			///
/// @brief this is a private copy function for member functions to use in order to 	///
///		protect the member variables 																									///
/// @pre none																																				///
/// @post The values of cc are copied into this																			///
///	@param cc The CylnCord point to be copied		 																		///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn CylnCord() constructor (default)																						///
/// @brief This is an overloaded default constructor that creates a CylnCord object	///
/// @pre none																																				///
/// @post creates a CylnCord object																									///
///	@param none																																			///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn CylnCord(T r, T theta, T z)  constructor with parameters										///
/// @brief This is an overloaded constructor that takes in values to be stored in	  ///
///		the CylnCord object created																										///
/// @pre the parameters will be of type T																						///
/// @post creates a CylnCord object																									///
///	@param r holds the m_r value to be stored																				///
///	@param theta holds the m_theta value to be stored																///
///	@param z holds the m_z value to be stored 																			///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn CylnCord(CylnCord<T> source) copy constructor 															///
/// @brief This is the copy constructor 																  					///
/// @pre none																																				///
/// @post creates a copy of a CylnCord object																				///
///	@param source a reference to the object to be copied 														///
/// @returns *this 																																	///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn ~CylnCord()) destructor												 															///
/// @brief DEstructor for the CylnCord obnjects													  					///
/// @pre none 																																			///
/// @post the CylnCord object is deallocated from memory														///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator=(CylnCord<T> source)									 															///
/// @brief this is the copy assignment operator													  					///
/// @pre none																																				///
/// @post A copy of source will be assigned to the calling object 									///
///	@param source The CylnCord point to be copied	 																	///
/// @returns *this 																																	///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator-(CylnCord<T> source)								 																///
/// @brief this returns the reflection through the origin										  			///
/// @pre none																																				///
/// @post A reflection through the origin of the CylnCord point source is returned	///
///	@param source The CylnCord point to be reflected		 														///
/// @return The reflection of source through the orgin is returned									///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator!(CylnCord<T> source)									 															///
/// @brief this returns the reflection through the z-axis										  			///
/// @pre none																																				///
/// @post A reflection through the z-axis of the CylnCord point source is returned	///
///	@param source The CylnCord point to be reflected		 														///
/// @return The reflection of source through the z-axis is returned									///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator~(CylnCord<T> source)									 															///
/// @brief this returns the magnitude of the source point(distance from the origin)	///
/// @pre none																																				///
/// @post The magnitude of the source point is returned															///
///	@param source The CylnCord point to be measured			 														///
/// @return The magnitude of source is returned																			///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator[](CylnCord<T> source)								 															///
/// @brief this returns the value stored in r, theta or z depending on the parameter///
/// @pre none																																				///
/// @post The value requested is returned																						///
///	@param source The CylnCord point to be measured			 														///
/// @return The value stored in r if param is 1, theta if param is 2 or z if param 	///
///		is 3  of source is returned																										///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator<(CylnCord<T> rhs)										 															///
/// @brief this compares the magnitude of the lhs with the right returning true if 	///
/// 	the magnitude of lhs is smaller then rhs and false otherwise 									///
/// @pre none																																				///
/// @post True is returned if the magnitude of lhs is less then the magnitude of rhs///
///	@param rhs The CylnCord point to be compared with lhs														///
/// @return True if lhs is less then rhs false otherwise														///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator>(CylnCord<T> rhs)										 															///
/// @brief this compares the magnitude of the lhs with the rhs returning true if 		///
/// 	the magnitude of lhs is larger then rhs and false otherwise 									///
/// @pre none																																				///
/// @post True is returned if the magnitude of lhs is greater then the magnitude of ///
///		rhs																																						///
///	@param rhs The CylnCord point to be compared with lhs														///
/// @return True if lhs is greater then rhs false otherwise													///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator==(CylnCord<T> rhs)										 															///
/// @brief this compares the values stored in lhs with the ones in rhs returning    ///
///		true if they are all equal																										///
/// @pre none																																				///
/// @post True is returned if the values of lhs are the same as the values in rhs		///
///	@param rhs The CylnCord point to be compared with lhs														///
/// @return True if the values in lhs are the same as rhs false otherwise						///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator!=(CylnCord<T> rhs)										 															///
/// @brief this compares the values stored in lhs with the ones in rhs returning    ///
///		true if they are not all equal																								///
/// @pre none																																				///
/// @post True is returned if the values in lhs are not the same as the values in 	///
///		rhs																																						///
///	@param rhs The CylnCord point to be compared with lhs														///
/// @return True if the values in lhs are the same as rhs false otherwise						///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn cart(CylnCord<T> cc)													 															///
/// @brief this converts the values stored in cc into cartesian cordinates and 	    ///
///		returns a string containing them																							///
/// @pre none																																				///
/// @post The values in cc are converted into their cartesian cordinate equivalents	///
///		and a string of them is returned																							///
///	@param cc The CylnCord point to be converted																		///
/// @return A string containg the values of cc in terms of cartesian cordinates			///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator<<(CylnCord<T> cc)										 															///
/// @brief this is a friend function for outputting a CylnCord object 						  ///
/// @pre none																																				///
/// @post Outputs the values in cc to std out(cout)																	///
///	@param The CylnCord to be output																								///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator>>(CylnCord<T> cc)										 															///
/// @brief this is a friend function for inputting a CylnCord object 						    ///
/// @pre none																																				///
/// @post Reads in the values for cc from  std in(cin)															///
///	@param The CylnCord to be output																								///
///////////////////////////////////////////////////////////////////////////////////////

#ifndef CylnCord_h
#define CylnCord_h

#include <iostream>
#include <string>
using namespace std;
using std::istream;
using std::ostream;
/*******************************Forward Declarations**********************************/
template <class T>
class CylnCord;

template <typename U>
ostream& operator<< (std::ostream& os, const CylnCord<U>& cc);
template <typename U>
std::istream& operator>> (std::istream& is, CylnCord<U>& cc);




template<class T>
class CylnCord
{
private:
	T m_r;
	T m_theta;
	T m_z;

	void cylnCopy(const CylnCord<T>& cc);

public:
	/*************************Constructors and Destructors******************************/
	
	CylnCord()
	{
		T m_r;
		T m_theta;
		T m_z;
	};
	CylnCord(const T& r, const T& theta, const T& z):m_r(r),m_theta(theta),m_z(z) {}; //inline
	CylnCord(const CylnCord<T>& s){this->cylnCopy(s);};
	~CylnCord();
	
	/***********************************Operators***************************************/
	CylnCord<T>& operator=(const CylnCord<T>& rhs);			//Assignment operator
	CylnCord<T>& operator-();			//Reflection through origin
	CylnCord<T>& operator!();			//Reflection through z-axis
	T operator~();			//Magnitude
	T& operator[](const int i);		//Accessor
	bool operator<(CylnCord<T>& rhs);							//Magnitude less then comparison
	bool operator>(CylnCord<T>& rhs);							//Magnitude greater then comparison
	bool operator==(const CylnCord<T>& rhs);						//Same point comparison
	bool operator!=(const CylnCord<T>& rhs);						//Not the same point
	string cartCord();												//Cartesian Conversion
	
	/*******************************Stream Operators************************************/
	
	friend std::ostream& operator<< <>(std::ostream & os, const CylnCord<T> &cc);
	friend std::istream& operator>> <>(std::istream & is, CylnCord<T> &cc);

};




#include "CylnCord.hpp"
#endif
