///////////////////////////////////////////////////////////////////////////////////////
/// @file Matrix.h 																																	///
/// @author Jeff Goymerac 																													///
/// @brief This header file declares/defines a pure virtual interface class Matrix	///
///									 																																///
///  			 																																					///
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
	
	virtual ~Matrix() {};
	/*************************************Operators***************************************/

	virtual MyVect<T>& operator[](int i) = 0;
	virtual const MyVect<T>& operator[](int i)const = 0;
	virtual MyVect<T>& operator*(const MyVect<T>& s) = 0;						//Matrix times a MyVect
	virtual int size() const = 0;																		//return size

	friend std::ostream& operator<< <>(std::ostream& os, const Matrix<T>& cc);
	friend std::istream& operator>> <>(std::istream& is, Matrix<T>& cc);

};

#endif