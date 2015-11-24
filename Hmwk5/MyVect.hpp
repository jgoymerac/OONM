///////////////////////////////////////////////////////////////////////////////////////
/// @file MyVect.hpp 																																	///
/// @author Jeff Goymerac 																													///
/// @brief This header file declares/defines a templated array class MyVect					///
///									 																																///
///  			 																																					///
///////////////////////////////////////////////////////////////////////////////////////



#ifndef MyVect_hpp
#define MyVect_hpp



/***************************Constructors and Destructors******************************/
template <class T>
MyVect<T>::MyVect()
{
	m_size = 0;
	ptr_to_data = NULL;
}

template <class T>
MyVect<T>::MyVect(int i)
{
	m_size = i;
	ptr_to_data = new T[m_size];
}

template <class T>
MyVect<T>::MyVect(const MyVect<T>& s)
{
	m_size = s.m_size;
	ptr_to_data = new T[m_size];
	copy(s);
}

template <class T>
MyVect<T>::~MyVect()
{
	delete[] ptr_to_data;
}

/*************************************Operators***************************************/
template <class T>
T& MyVect<T>::operator[](int i)
{
	return ptr_to_data[i];
}

template <class T>
const T& MyVect<T>::operator[](int i) const
{
	return ptr_to_data[i];
}

template <class T>
MyVect<T>& MyVect<T>::operator=(const MyVect<T>& rhs)
{
	if (ptr_to_data != rhs.ptr_to_data)
	{
		setSize(rhs.m_size);
		copy(rhs);
	}
	return *this;
}

template <class T>
MyVect<T>& MyVect<T>::operator=(const T& rhs)
{
	T* p = ptr_to_data + m_size;
	while (p > ptr_to_data)
	{
		*--p = rhs;
	}
	return *this;
}

template <class T>
MyVect<T> MyVect<T>::operator+(const MyVect<T>& rhs) const
{
	MyVect<T> temp(m_size);
	for (int i = 0; i < m_size; i++)
	{
		temp.ptr_to_data[i] = this->ptr_to_data[i] + rhs[i];
	}
	return temp;
}

template <class T>
MyVect<T> MyVect<T>::operator-(const MyVect<T>& rhs) const
{
	MyVect<T> temp(m_size);
	for (int i = 0; i < m_size; i++)
	{
		temp.ptr_to_data[i] = this->ptr_to_data[i] - rhs[i];
	}
	return temp;
}

template <class T>
MyVect<T> MyVect<T>::operator-() const
{
	MyVect<T> temp(m_size);
	for (int i = 0; i < m_size; i++)
	{
		temp.ptr_to_data[i] = -ptr_to_data[i];
	}

	return  temp;
}

template <class T>
MyVect<T> MyVect<T>::operator*(const T& s)
{
	MyVect<T> temp(m_size);
	for (int i = 0; i < m_size; i++)
	{
		temp.ptr_to_data[i] = ptr_to_data[i] * s;
	}

	return  temp;
}

template <class T>
T MyVect<T>::operator*(const MyVect<T>& rhs)
{
	T sum = 0;
	for (int i = 0; i < m_size ; i++)
	{
		sum += ptr_to_data[i] * rhs.ptr_to_data[i];
	}

	return sum;
}

template <class T>
bool MyVect<T>::operator==(const MyVect<T>& rhs)
{
	for (int i = 0; i < m_size; i++)
	{
		if (ptr_to_data[i] != rhs.ptr_to_data[i])
		{
			return false;
		}
	}
	return true;
}

template <class T>
bool MyVect<T>:: operator!=(const MyVect<T>& rhs)
{

	return !(*this == rhs);
}



template<typename T>
void MyVect<T>::insert(const T& x, int i)
{

	T* tmp;
	tmp = new T[m_size + 1];
	for (int j = 0; j < m_size; j++)
	{
		tmp[j] = ptr_to_data[j];
	}
	delete []ptr_to_data;

	ptr_to_data = tmp;



	for (int k = m_size; k > i; k--)
	{
		ptr_to_data[k] = ptr_to_data[k - 1];
	}
	ptr_to_data[i] = x;
	m_size++;
	return;
}

template<class T>
void MyVect<T>::remove(int i)
{
	for (int k = i; k < m_size - 1; k++)
	{
		ptr_to_data[k] = ptr_to_data[k + 1];
	}
	m_size--;

	T* tmp;
	tmp = new T[m_size];
	for (int j = 0; j < m_size; j++)
	{
		tmp[j] = ptr_to_data[j];
	}
	delete []ptr_to_data;
	ptr_to_data = tmp;

}
template<class T>
void MyVect<T>::swap(int i, int k)
{
	T* tmp = new T[1];
	tmp[0] = ptr_to_data[i];
	ptr_to_data[i] = ptr_to_data[k];
	ptr_to_data[k] = tmp[0];
	delete []tmp;
	return;
}


/*************************************Functions***************************************/
template <class T>
int MyVect<T>::size() const
{
	return m_size;
}

template <class T>
void MyVect<T>::copy(const MyVect<T>& s)
{
	T* p = ptr_to_data + m_size;
	T* q = s.ptr_to_data + m_size;
	while (p > ptr_to_data)
	{
		*--p = *--q;
	}
}





template <class T>
void MyVect<T>::setSize(const int n)
{
	if (n != m_size)
	{
		delete[]ptr_to_data;
		m_size = n;
		ptr_to_data = new T[n];
	}
}

/**********************************Stream Operators***********************************/

template<class T>
std::ostream& operator<< (std::ostream& os, const MyVect<T>& cc)
{
	os << "[";
	for (int i = 0; i < cc.m_size; i++)
	{
		os << cc[i] << " ";
	}
	os << "]";
	return os;
}
template<class T>
std::istream& operator>> (std::istream& is, MyVect<T>& cc)
{
	for (int i = 0; i < cc.m_size; i++)
	{
		is >> cc[i];
	}
	return is;
}



#endif













