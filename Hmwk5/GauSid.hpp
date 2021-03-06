///////////////////////////////////////////////////////////////////////////////////////
/// @file GauSid.hpp                                                                ///
/// @author Jeff Goymerac                                                           ///
/// @brief This file implements the Gauss-Sidel class as defined in GauSid.h        ///
///                                                                                 ///
///                                                                                 ///
///////////////////////////////////////////////////////////////////////////////////////

#include <cmath>


template<class T>
MyVect<T> GauSid<T>::operator () (MyVect<MyVect<T>> &vectr)
{
    mult = 0;
    MyVect<T> vect_to_return (vectr.size ());
    vect_to_return = 0;
    for (int i = 0; i < vectr.size () - 1; i++)
    {
        for (int k = 1; k < vectr.size (); k++)
        {
            if (i == k)
            {
                continue;//skips comparing MyVect object to itself
            }
            else if (isMult (vectr[i], vectr[k]))
            {
                vect_to_return[i] = 1;
                vect_to_return[k] = mult;
                //return vect_to_return;
            }
        }
    }
    for (int i = 2; i < vectr.size (); i++)
    {
        MyVect <MyVect<T>> gsTest, gsTest2 (vectr.size ());
        MyVect<T> temp (i), tempAlso (vectr.size ()), sum (vectr.size ());
        temp = 0;
        sum = 0;
        for (int k = 0; k < i + 1; k++)
        {
            gsTest.insert (vectr[k], k);
        }
        tempAlso = iteration (gsTest);
        if (tempAlso != temp)
        {
            for (int i = 0; i < tempAlso.size (); i++)
            {
                sum = sum + (vectr[i] * tempAlso[i]);
            }
            if (sum == vectr[tempAlso.size ()])
            {
                return tempAlso;
            }
        }
    }
    //Does not converge or remaing ewlements after Gauss Seidel don't sum up;
    return vect_to_return;
}

template<class T>
bool GauSid<T>::isMult (const MyVect<T> &a, const MyVect<T> &b)
{
    int count = 0;
    bool myBool = true;
    while (myBool == true && count < a.size ())
    {
        for (int i = 0; i < a.size () - 1; i++)
        {
            if ((a[i] != 0 && b[i] == 0) || (a[i + 1] != 0 && b[i + 1] == 0))
            {
                myBool = false;
                count++;
                return myBool;
            }
            else if ((a[i] == 0 && b[i] == 0) || (a[i + 1] == 0 && b[i + 1] == 0))
            {
                myBool = true;
                count++;
            }
            else if ((a[i] / b[i]) == (a[i + 1] / b[i + 1]))
            {
                count++;
                myBool = true;
                mult = a[i] / b[i];
            }
            else
            {
                myBool = false;
                count++;
            }
        }
    }
    return myBool;
}

template <class T>
MyVect<T> GauSid<T>::iteration (const MyVect <MyVect<T>> &s)
{
    it = 0;
    double tol = .5;
    int count = 0;
    T oldVectr = 0;
    MyVect<T> vectr (s.size () - 1);
    vectr = 0;
    while (count < iterations && tol > tolerance)
    {
        for (int i = 0; i < s.size () - 1; i++)
        {
            vectr[i] = s[s.size () - 1][i];
            for (int k = 0; k < s.size () - 1; k++)
            {
                if (i != k)
                {
                    vectr[i] = vectr[i] - (s[k][i] * vectr[k]);
                }
                else
                {
                    //skips diag
                }
            }
            vectr[i] = vectr[i] / s[i][i];
            tol = (abs (vectr[i] - oldVectr)) / vectr[i];
            oldVectr = vectr[i];
        }
        count++;
    }
    it = count;
    return vectr;
}








