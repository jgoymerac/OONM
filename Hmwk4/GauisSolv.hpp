///////////////////////////////////////////////////////////////////////////////////////
/// @file GausSolv.hpp																															///
/// @author Jeff Goymerac 																													///
/// @brief This header file declares/defines a templated Gausian Solver Class				///
///									 																																///
///  			 																																					///
///////////////////////////////////////////////////////////////////////////////////////

#ifndef GausSolv_hpp
#define GausSolv_hpp

template <class T>
MyVect<T>& GausSolv<T>::operator()(const Matrix<T>& mat, const MyVect<T>& vect)
{
	Matrix<T> m = mat;
	MyVect<T> v= vect;
	T large=0;
	T temp=0;
	int pivot =0;
	int error=0;
	int size=m.size();
	MyVect<T> s(size), x(size);

	for(int i=0;i<size;i++)
	{
		s[i]=abs(m[i][0]);
		for(int j=1;j<size;j++)
		{
			if(abs(m[i][j]))>s[i]
			{
				s[i]=abs(m[i][j]);
			}
		}
	}
	for (int i=0;i<size;i++)
	{
		pivot =i;
		large=abs(m[i][i]/s[i]);
		for(int d=i+1; d<size;d++)
		{
			temp=abs(m_a[d][i]/s[d]);
			if(temp>large)
			{
				large=temp;
				pivot=d;
			}
		}
		if(pivot !=i)
		{
			for(int j=i;j<size;j++)
			{
				temp =m[pivot][j];
				m[pivot][j]=m[i][j];
				m[i][j]=temp;
			}
			temp=v[pivot];
			v[pivot]=v[i];
			v[i]=temp;
			temp=s[i];
			s[pivot]=s[i];
			s[i]=temp;
		}
		T factor=0;
		for(int c=i+1:c<size;c++)
		{
			factor= m[c][i]/m[i][i];
			for(intj=i+1;j<size;j++)
			{
				m[c][j]=m[c][j]-(factor * m[i][j]);
				v[c]=v[c]-(factor * vect[i] );
			}
		}
		T sum =0;
		x[size-1]=v[size-1]/m[size-1][size-1];
		for(int i=size-1;i>=0;i--)
		{
			sum=0;
			for(int j=i+1;j<size; j++)
			{
				sum = sum + (m[i][j] *x[j]);
			}
			x[i]=(v[i]-sum)/m[i][i];
		}

	}

return x;
}

#endif



















