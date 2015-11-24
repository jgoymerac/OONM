//////////////////////////////////////////////////////////////////////////////
///@file Matrix.hpp																											   ///
///@author Jeff Goymerac																								   ///
///@this file defines the templated member functions listed in Matrix.h 	 /// 			
//////////////////////////////////////////////////////////////////////////////



#ifndef Matrix_hpp
#define Matrix_hpp

using namespace std;



template <class T>
Matrix<T>::Matrix()
{
	m_size=0;
	m_data=NULL;
}

template <class T>
Matrix<T>::Matrix(const int i)
{
	m_size= i;
	m_data = new MyVect<T>[i];
	for (int r=0;r<i;r++)
	{
		m_data[r].setSize(i);
		for (int c=0;c<i;c++)
		{
			m_data[r][c]=0;
		}
	}
}

template <class T>
Matrix<T>::Matrix(const Matrix<T>& s)
{
	if (this != &s)
	{
		m_size=s.m_size;
		m_data=new MyVect<T>[m_size];
		copy(s);
	}
}

template <class T>
Matrix<T>::~Matrix()
{
	delete []m_data;
}

template <class T>
MyVect<T>& Matrix<T>::operator [](int i)
{
	return m_data[i];
}

template <class T>
const MyVect<T>& Matrix<T>::operator[](int i)const
{
	return m_data[i];
}

template <class T>
Matrix<T>& Matrix<T>::operator=(const Matrix<T>& s)
{
	if(m_size != s.m_size)
	{
		delete [] m_data;
		m_size=s.m_size;
		m_data= new MyVect<T>[m_size];
		for(int i=0;i<m_size;i++)
		{
			m_data[i].setSize(m_size);
		}
	}
	copy(s);
	return *this;
}

template <class T>
Matrix<T>& Matrix<T>:: operator+(const Matrix<T>& s)const 
{
	Matrix<T> * sum;
	sum = new Matrix<T>(m_size);
	for (int i=0;i<m_size;i++)
	{
		sum->m_data[i]=m_data[i]+s.m_data[i];
	}
	return *sum;
}

template <class T>
Matrix<T>& Matrix<T>::operator-(const Matrix<T>& s)const
{
	Matrix<T> * dif;
	dif = new Matrix<T>(m_size);
	for (int i=0;i<m_size;i++)
	{
		dif->m_data[i]=m_data[i]-s.m_data[i];
	}
	return *dif;
}

template <class T>
Matrix<T>& Matrix<T>::operator-()const
{
	Matrix<T> * neg;
	neg = new Matrix<T>(m_size);
	for (int i=0;i<m_size;i++)
	{
		neg->m_data[i]=-m_data[i];
	}
	return *neg;
}

template <class T>
Matrix<T>& Matrix<T>:: operator*(const Matrix<T>& s)
{
	if(m_size != s.m_size)
	{
		cout<<"Error Dimensions do not match"<<endl;
		return *this; 
	}
	else
	{
		Matrix<T> * pro;
		pro = new Matrix<T>(m_size);
		for (int i=0;i<m_size; i++)
		{
			for(int c=0;c<m_size;c++)
			{
				T sum =0;
				for(int j=0;j<m_size;j++)
				{
					sum=sum+(m_data[i][j]*s.m_data[j][c]);
				}
				pro->m_data[i][c]=sum;
			}

		}
		return *pro;
	}
	
}


template <class T>
MyVect<T>& Matrix<T>:: operator*(const MyVect<T>& s)
{
	
		MyVect<T> * pro;
		pro = new MyVect<T>(m_size);
		for(int i=0;i<m_size;i++)
		{
			pro[i]=0;
			for(int j=0;j<m_size;j++)
			{
				pro[i]= pro[i]+(m_data[i][j] * s[i]);
			}
		}
		return *pro;
	
}

template <class T>
Matrix<T>& Matrix<T>::operator *(const T& s)
{
	Matrix<T> * pro;
	pro = new Matrix<T>(m_size);
	for (int i=0;i<m_size;i++)
	{
		pro.m_data[i]=m_data[i]*s;
	}
	return *pro;
}

template <class T>
Matrix<T> Matrix<T>::operator~()
{
	Matrix<T> *tran;
	tran = new Matrix<T>(m_size);
	for(int r=0;r<m_size;r++)
		{
			for(int c=0;c<m_size;c++)
			{
				tran->m_data[r][c]=m_data[c][r];
			}

		}
		return *tran;
}
template<class T>
void Matrix<T>:: copy(const Matrix<T>& s)
{
	for (int i=0;i<m_size;i++)
	{
		m_data[i]=s.m_data[i];
	}
}

template <class T>
int Matrix<T>::size() const
{
	return m_size;
}

/**********************************Stream Operators***********************************/

template<class T>
std::ostream& operator<< (std::ostream& os, const Matrix<T>& cc)
{
	
	for (int i=0;i<cc.m_size;i++)
	{
		os<<cc.m_data[i]<<endl;
	}
	return os;
}
template<class T>
std::istream& operator>> (std::istream& is, Matrix<T>& cc)
{
	for(int i=0;i<cc.m_size;i++)
	{
		for(int j=0;j<cc.m_size;j++)
		{
			is>>cc.m_data[i][j];

		}

	}
	return is;
}














#endif