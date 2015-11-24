///////////////////////////////////////////////////////////////////////////////////////
/// @file CylnCord.hpp 																															///
/// @author Jeff Goymerac 																													///
/// @brief This header file defines the templated Cylindrical Coordinate 						///
///		class CylnCord 																																///
///  			 																																					///
///////////////////////////////////////////////////////////////////////////////////////

#ifndef CYLNCORD_HPP
#define CYLNCORD_HPP
#define _USE_MATH_DEFINES
#include <cmath>
#include <cstdlib>
#include <string>
#include <boost/lexical_cast.hpp>
//using std::istream;
//using std::ostream;

template<class T>
void CylnCord<T>::cylnCopy(const CylnCord<T>& cc)
{
	m_r=cc.m_r;
	m_theta=cc.m_theta;
	m_z=cc.m_z;
	return;
}


/*************************Constructors and Destructors******************************/
//CylnCord<T>::CylnCord() {}
//CylnCord(const T& r, const T& theta, const T& z):m_r(r),m_theta(theta),m_z(z){}
//CylnCord(const CylnCord<T>& source){this.copy(source)};
template<typename T>
CylnCord<T>::~CylnCord() {}
	
/***********************************Operators***************************************/
template<class T>	
CylnCord<T>& CylnCord<T>::operator=(const CylnCord<T>& rhs)						//Assignment operator
{
	if (*this != rhs)
	{
		cylnCopy(rhs);
	}
	return *this;
}		


template<class T>
CylnCord<T>& CylnCord<T>::operator-()		//Reflection through origin
{
	m_theta+=M_PI;
	m_z= (-m_z);
	return *this;
}
template<class T>
CylnCord<T>& CylnCord<T>::operator!()		//Reflection through z-axis
{
	m_theta+=M_PI;

	return *this;
}
template<class T>
T CylnCord<T>::operator~()		//Magnitude
{
	T mag;
	mag=sqrt(m_z*m_z+m_r*m_r);
	return mag;
}
template<typename T>
T& CylnCord<T>::operator[](const int i)			//Accessor
{
	if (i==0)
	{
		return m_r;
	}
	else if (i==1)
	{
		return m_theta;
	}
	else if (i==2)
	{
		return m_z;
	}
}
template<class T>
bool CylnCord<T>::operator<(CylnCord<T>& rhs)							//Magnitude less then comparison
{
	T lhs= (~*this);
	T r = (~rhs);


	if(lhs<r)
	{
		return true;
	}
	return false;
}
template<class T>
bool CylnCord<T>::operator>(CylnCord<T>& rhs)						//Magnitude greater then comparison
{
	T lhs= (~*this);
	T r = (~rhs);


	if(lhs>r)
	{
		return true;
	}
	return false;
}

template<class T>
bool CylnCord<T>::operator==(const CylnCord<T>& rhs)						//Same point comparison
{
	if(m_r==rhs.m_r && m_theta==rhs.m_theta && m_z==rhs.m_z)
	{
		return true;
	}
	return false;
}
template<class T>
bool CylnCord<T>::operator!=(const CylnCord<T>& rhs)							//Not the same point
{
	if(m_r==rhs.m_r && m_theta==rhs.m_theta && m_z==rhs.m_z)
	{
		return false;
	}
	return true;
}

template<class T>
string CylnCord<T>::cartCord()												//Cartesian Conversion
{
	string cart;
	string x;
	string y;					//strings to hold values of x,y and z
	string z;
	T xCord;					//holds the converted x value
	T yCord;					//holds the converted y value
	xCord=m_r*cos(m_theta);
	yCord=m_r*sin(m_theta);

	x=boost::lexical_cast<std::string>(xCord);			//converts the value to a string
	y=boost::lexical_cast<std::string>(yCord);			//converts th value to a string
	z=boost::lexical_cast<std::string>(m_z);
	cart="(" + x +", " + y + ", " + z + ")";		//combines the values into a single string to return
	return cart;
}
	
/*******************************Stream Operators************************************/
template<typename T>
std::ostream& operator<< (std::ostream& os, const CylnCord<T>& cc)
{
	return os << "( " <<cc.m_r<<", "<<cc.m_theta<<", "<<cc.m_z<<")";
}
template<typename T>
std::istream& operator>> (std::istream& is, CylnCord<T> &cc)
{
	is>>cc.m_r;
	is>>cc.m_theta;
	is>>cc.m_z;



	return is;
}



#endif






































