//////////////////////////////////////////////////////////////////////////////
///@file DiagMatrix.hpp                                                    ///
///@author Jeff Goymerac                                                   ///
///@this file defines the templated member functions listed in Matrix.h    ///
//////////////////////////////////////////////////////////////////////////////



#ifndef DiagMatrix_hpp
#define DiagMatrix_hpp
#include "Matrix.h"
using namespace std;



template <class T>
DiagMatrix<T>::DiagMatrix ()
{
    m_size = 0;
    m_data = NULL;
}

template <class T>
DiagMatrix<T>::DiagMatrix (const int i)
{
    m_size = i;
    m_data (i);
}

template <class T>
DiagMatrix<T>::DiagMatrix (const DiagMatrix<T> &s)
{
    if (this != &s)
    {
        m_size = s.m_size;
        m_data = new MyVect<T>[m_size];
        copy (s);
    }
}

template <class T>
DiagMatrix<T>::~DiagMatrix ()
{
    delete m_data;
}

template <class T>
MyVect<T> &DiagMatrix<T>::operator [] (int i)
{
    return m_data[i];
}

template <class T>
const MyVect<T> &DiagMatrix<T>::operator[] (int i)const
{
    return m_data[i];
}

template <class T>
T &DiagMatrix<T>::operator () (const int r, const int c)
{
    if (r == c)
    {
        return m_data[r];
    }
    else
    {
        return 0;
    }
}
template <class T>
DiagMatrix<T> &DiagMatrix<T>::operator= (const DiagMatrix<T> &s)
{
    if (m_size != s.m_size)
    {
        delete [] m_data;
        m_size = s.m_size;
        m_data = new MyVect<T>[m_size];
    }
    copy (s);
    return *this;
}

template <class T>
DiagMatrix<T> &DiagMatrix<T>:: operator+ (const DiagMatrix<T> &s)const
{
    DiagMatrix<T> *sum;
    sum = new DiagMatrix<T> (m_size);
    for (int i = 0; i < m_size; i++)
    {
        sum->m_data[i] = m_data[i] + s.m_data[i];
    }
    return *sum;
}

template <class T>
DiagMatrix<T> &DiagMatrix<T>::operator- (const DiagMatrix<T> &s)const
{
    DiagMatrix<T> *dif;
    dif = new DiagMatrix<T> (m_size);
    for (int i = 0; i < m_size; i++)
    {
        dif->m_data[i] = m_data[i] - s.m_data[i];
    }
    return *dif;
}

template <class T>
DiagMatrix<T> &DiagMatrix<T>::operator- ()const
{
    DiagMatrix<T> *neg;
    neg = new DiagMatrix<T> (m_size);
    for (int i = 0; i < m_size; i++)
    {
        neg->m_data[i] = -m_data[i];
    }
    return *neg;
}

template <class T>
DiagMatrix<T> DiagMatrix<T>:: operator* (const DiagMatrix<T> &s)
{
    if (m_size != s.m_size)
    {
        throw MatrixError (1);
    }
    else
    {
        DiagMatrix<T>  pro (m_size);
        for (int i = 0; i < m_size; i++)
        {
            for (int c = 0; c < m_size; c++)
            {
                T sum = 0;
                for (int j = 0; j < m_size; j++)
                {
                    sum = sum + (m_data[i][j] * s.m_data[j][c]);
                }
                pro.m_data[i][c] = sum;
            }
        }
        return pro;
    }
}


template <class T>
MyVect<T> &DiagMatrix<T>:: operator* (const MyVect<T> &s)
{
    if (m_size != s.size ())
    {
        throw MatrixError (1);
    }
    MyVect<T> *pro;
    pro = new MyVect<T> (m_size);
    for (int i = 0; i < m_size; i++)
    {
        pro[i] = 0;
        for (int j = 0; j < m_size; j++)
        {
            pro[i] = pro[i] + (m_data[i][j] * s[i]);
        }
    }
    return *pro;
}

template <class T>
DiagMatrix<T> &DiagMatrix<T>::operator * (const T &s)
{
    DiagMatrix<T> *pro;
    pro = new DiagMatrix<T> (m_size);
    for (int i = 0; i < m_size; i++)
    {
        pro->m_data[i] = m_data[i] * s;
    }
    return *pro;
}

template <class T>
DiagMatrix<T> DiagMatrix<T>::operator~ ()
{
    DiagMatrix<T> tran (m_size);
    for (int r = 0; r < m_size; r++)
    {
        for (int c = 0; c < m_size; c++)
        {
            tran.m_data[r][c] = m_data[c][r];
        }
    }
    return tran;
}

template<class T>
void DiagMatrix<T>:: copy (const DiagMatrix<T> &s)
{
    for (int i = 0; i < m_size; i++)
    {
        m_data[i] = s.m_data[i];
    }
}

template <class T>
int DiagMatrix<T>::size () const
{
    return m_size;
}

/**********************************Stream Operators***********************************/

template<class T>
std::ostream &operator<< (std::ostream &os, const DiagMatrix<T> &cc)
{
    for (int i = 0; i < cc.m_size; i++)
    {
        for (int j = 0; j < cc.m_size; j++)
        {
            if (i == j)
            {
                os << cc.m_data[i] ;
            }
            else
            {
                os << 0;
            }
        }
        os << endl;
    }
    return os;
}
template<class T>
std::istream &operator>> (std::istream &is, DiagMatrix<T> &cc)
{
    T trash;
    for (int i = 0; i < cc.m_size; i++)
    {
        for (int j = 0; j < cc.m_size; j++)
        {
            if (i == j)
            {
                is >> cc.m_data[i];
            }
            else
            {
                is >> trash;
            }
        }
    }
    return is;
}

#endif