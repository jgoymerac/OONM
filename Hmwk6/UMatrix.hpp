//////////////////////////////////////////////////////////////////////
/// @file umatrix.hpp
/// @author Christine Wang CS5201
/// @brief Upper Triangular Matrix Class
//////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////
/// @file lmatrix.hpp
/// @author Christine Wang CS5201
/// @brief Lower Triangular UMatrix Class
//////////////////////////////////////////////////////////////////////

template<class T>
UMatrix<T> :: UMatrix()
{
	m_dimension = 0;
	m_ptr_to_data = 0;
}


template<class T>
UMatrix<T> :: UMatrix(int dimension)
{
	m_dimension = dimension;
	m_ptr_to_data = new T*[m_dimension];
	for(int i=0; i<m_dimension; i++)
	{
		m_ptr_to_data[i] = new T[m_dimension-1];
	}

	for(int i=0; i<m_dimension; i++)
	{
		for(int j=0; j<m_dimension-i; j++)
		{
			m_ptr_to_data[i][j] = 0;
		}
	}
}


template<class T>
UMatrix<T> :: UMatrix(const UMatrix<T>& source)
{
	m_dimension = source.m_dimension;
	m_ptr_to_data = new T*[m_dimension];
	copy(source);
}


template<class T>
UMatrix<T> :: ~UMatrix()
{
	clean();
}


template<class T>
T& UMatrix<T> :: operator()(const int i, const int j)
{
	T ret = 0;
	if(j<i)
		return ret;
	else
		return m_ptr_to_data[i][j];
}


template<class T>
T UMatrix<T> :: operator()(const int i, const int j) const
{
	if(j<i)
		return 0;
	else
		return m_ptr_to_data[i][j];
}


template<class T>
UMatrix<T>& UMatrix<T> :: operator=(const UMatrix<T>& source)
{
	if(this!=source)
		clean();
	copy(source);
	return *this;
}

template<class T>
UMatrix<T>& UMatrix<T> :: operator+(const UMatrix<T>& source)
{
//		if(m_dimension != source.m_dimension)	throw Exception(5);
		UMatrix<T> sum(m_dimension);

		for(int i=0; i<m_dimension; i++)
		{
			for(int j=0; j<m_dimension-i; j++)
			{
				sum(i,j) = m_ptr_to_data[i][j] + source(i,j);
			}
		}

		copy(sum);
		return *this;
}

template<class T>
UMatrix<T>& UMatrix<T> :: operator-(const UMatrix<T>& source)
{
//		if(m_dimension != source.m_dimension)	throw Exception(5);
		UMatrix<T> difference(m_dimension);

		for(int i=0; i<m_dimension; i++)
		{
			for(int j=0; j<m_dimension-i; j++)
			{
				difference(i,j) = m_ptr_to_data[i][j] - source(i,j);
			}
		}

		copy(difference);
		return *this;
}

template<class T>
UMatrix<T>& UMatrix<T> :: operator-()
{
//		if(m_dimension != source.m_dimension)	throw Exception(5);
		UMatrix<T> negative(m_dimension);

		for(int i=0; i<m_dimension; i++)
		{
			for(int j=0; j<m_dimension-i; j++)
			{
				negative(i,j) = m_ptr_to_data[i][j]*(-1);
			}
		}

		copy(negative);
		return *this;
}

template<class T>
UMatrix<T>& UMatrix<T> :: operator*(const T mult)
{
//		if(m_dimension != source.m_dimension)	throw Exception(5);
		UMatrix<T> product(m_dimension);

		for(int i=0; i<m_dimension; i++)
		{
			for(int j=0; j<m_dimension-i; j++)
			{
				product(i,j) = m_ptr_to_data[i][j] * mult;
			}
		}

		copy(product);
		return *this;
}

template<class T>
void UMatrix<T> :: copy(const UMatrix<T>& source)
{
	if(this != source)
	{
		clean();
		m_dimension = source.m_dimension;
		for(int i=0; i<m_dimension; i++)
		{
			for(int j=0; j<m_dimension-i; j++)
			{
				m_ptr_to_data[i][j] = source[i][j];
			}
		}
	}
}

template<class T>
void UMatrix<T> :: clean()
{
	for(int i=0; i<m_dimension; i++)
	{
		delete [] m_ptr_to_data[i];
	}
	delete [] m_ptr_to_data;
}

template<class S>
ostream& operator <<(ostream& out, const UMatrix<S>& source)
{
	for(int i=0; i<source.dimension(); i++)
	{
		out << "| ";
		for(int j=0; j<source.dimension()-i; j++)
		{
			out << source(i,j) << " ";
		}
		out << " |\n";
	}
	return out;
}

template<class S>
istream& operator >>(istream& in, UMatrix<S>& source)
{
	for(int i=0; i<source.dimension(); i++)
	{
		for(int j=0; j<source.dimension()-i; j++)
		{
			in >> source(i,j);
		}
	}
}