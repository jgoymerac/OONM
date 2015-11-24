//////////////////////////////////////////////////////////////////////////////
///@file TriDMatrix.hpp                                                    ///
///@author Jeff Goymerac                                                   ///
///@this file defines the templated member functions listed in Matrix.h    ///
//////////////////////////////////////////////////////////////////////////////



#ifndef TriDMatrix_hpp
#define TriDMatrix_hpp
#include "Matrix.h"
#include "MatrixError.h"
using namespace std;



template <class T>
TriDMatrix<T>::TriDMatrix ()
{
    m_size = 0;
    a_data = NULL;
    b_data = NULL;
    c_data = NULL;
}

template <class T>
TriDMatrix<T>::TriDMatrix (int i)
{
   m_size = i;
   a_data.setSize(i-1); 
   b_data.setSize(i-1);
   c_data.setSize(i); 
  
}

template <class T>
TriDMatrix<T>::TriDMatrix (const TriDMatrix<T>& s)
{
    if (this != &s)
    {
        m_size = s.m_size;
        a_data.setSize(m_size-1); 
        b_data.setSize(m_size-1);
        c_data.setSize(m_size);
        copy (s);
    }
}

template <class T>
TriDMatrix<T>::~TriDMatrix ()
{
 

}

 template <class T>
 MyVect<T> &TriDMatrix<T>::operator [] (int i)
 {
     MyVect<T> a;
     a=a*i;
     return a_data;
 }

 template <class T>
 const MyVect<T> &TriDMatrix<T>::operator[] (int i)const
 {
       MyVect<T> a;
       a=a*i;
     return a_data;
 }

template <class T>
TriDMatrix<T> &TriDMatrix<T>::operator= (const TriDMatrix<T> &s)
{
    if (m_size != s.m_size)
    {
        m_size = s.m_size;
        a_data.setSize(m_size-1);
        b_data.setSize(m_size-1);
        c_data.setSize(m_size);
        
    }
    copy (s);
    return *this;
}

template <class T>
TriDMatrix<T> &TriDMatrix<T>:: operator+ (const TriDMatrix<T> &s)const
{
    TriDMatrix<T> *sum;
    sum = new TriDMatrix<T> (m_size);
    
    sum->a_data = a_data + s.a_data;
    sum->b_data = b_data +s.b_data;
    sum->c_data = c_data + s.c_data;
    
    return *sum;
}

template <class T>
TriDMatrix<T> &TriDMatrix<T>::operator- (const TriDMatrix<T> &s)const
{
    TriDMatrix<T> *dif;
    dif = new TriDMatrix<T> (m_size);
    
    dif->a_data = a_data - s.a_data;
    dif->b_data = b_data - s.b_data;
    dif->c_data = c_data - s.c_data;

    
    return *dif;
}

template <class T>
TriDMatrix<T> &TriDMatrix<T>::operator- ()const
{
    TriDMatrix<T> *neg;
    neg = new TriDMatrix<T> (m_size);
    neg->a_data= (-a_data);
    neg->b_data= (-b_data);
    neg->c_data= (-c_data);
    return *neg;
}

template <class T>
TriDMatrix<T> TriDMatrix<T>:: operator* (const TriDMatrix<T> &s) 
{ if (m_size != s.m_size)
    {
      throw MatrixError(2);
    }
    else
    {
      TriDMatrix<T>  pro (m_size);
       
      return pro;
    }
}


template <class T>
MyVect<T> &TriDMatrix<T>:: operator* (const MyVect<T> &s) 
{
    if (m_size != s.size ())
    {
        throw MatrixError(2);
    }
    MyVect<T> *pro;
    pro = new MyVect<T> (m_size);
    
    return *pro;
}

template <class T>
TriDMatrix<T> &TriDMatrix<T>::operator * (const T &s)
{
    TriDMatrix<T> *pro;
    pro = new TriDMatrix<T> (m_size);
    pro->a_data=a_data*s;
    pro->b_data=b_data*s;
    pro->c_data=c_data*s;
    return *pro;
}

template <class T>
TriDMatrix<T> TriDMatrix<T>::operator~ ()
{
   
    return *this;
}

template<class T>
void TriDMatrix<T>:: copy (const TriDMatrix<T> &s)
{
   a_data=s.a_data;
   b_data=s.b_data;
   c_data=s.c_data;
}

template <class T>
int TriDMatrix<T>::size () const
{
    return m_size;
}

template <class T>
T TriDMatrix<T>:: aX(int i)
{
  if(i<0||i>a_data.size())
  {
    throw MatrixError(1);
  }
  else
  {
    return a_data[i];
  }
}

template <class T>
T TriDMatrix<T>:: bX(int i)
{
  if(i<0||i>b_data.size())
  {
    throw MatrixError(1);
  }
  else
  {
    return b_data[i];
  }
}
template <class T>
T TriDMatrix<T>:: cX(int i)
{
  if(i<0||i>c_data.size())
  {
    throw MatrixError(1);
  }
  else
  {
    return c_data[i];
  }
}
template <class T>
T TriDMatrix<T>:: aX(int i) const
{
  if(i<0||i>a_data.size())
  {
    throw MatrixError(1);
  }
  else
  {
    return a_data[i];
  }
}

template <class T>
T TriDMatrix<T>:: bX(int i) const
{
  if(i<0||i>b_data.size())
  {
    throw MatrixError(1);
  }
  else
  {
    return b_data[i];
  }
}
template <class T>
T TriDMatrix<T>:: cX(int i) const
{
  if(i<0||i>c_data.size())
  {
    throw MatrixError(1);
  }
  else
  {
    return c_data[i];
  }
}
/**********************************Stream Operators***********************************/

template<class T>
std::ostream &operator<< (std::ostream &os, const TriDMatrix<T> &cc)
{
    for (int i = 0; i < cc.m_size; i++)
    {
       os<<"[";
        for(int j=0; j< cc.m_size; j++)
        {
             if(i==j)
            {
                os<< cc.c_data[i]<< " ";
            }
            else if (j==(i+1))
            {
                os<< cc.b_data[i]<< " ";
            }
            else if (i==(j+1))
            {
                os<< cc.a_data[i-1]<< " ";
            }
            else
            {
                os<< 0 <<" ";
            }

        }
        os<<"]"<<endl;
    }
    return os;
}
template<class T>
std::istream &operator>> (std::istream &is, TriDMatrix<T> &cc)
{
   T trash;
    for (int i = 0; i < cc.m_size; i++)
    {
        for (int j = 0; j < cc.m_size; j++)
        {
            if(i==j)
            {
                is>> cc.c_data[i];
            }
            else if (i==(j-1))
            {
                is>> cc.b_data[i];
            }
            else if (i==(j+1))
            {
                is>> cc.a_data[i-1];
            }
            else
            {
                is>>trash;
            }
        }
    }

    return is;
}

#endif