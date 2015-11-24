///////////////////////////////////////////////////////////////////////////////////////
/// @file GausSolv.h                                                                ///
/// @author Jeff Goymerac                                                           ///
/// @brief This header file declares/defines a templated Gausian Solver Class       ///
///                                                                                 ///
///                                                                                 ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @class GausSolv                                                                 ///
/// @brief This templated class calculates the solution to Ax=b                     ///
///     This class assumes the user will be using real numbers and limits the values///
///     to the size of double for return values.                                    ///
/// @pre class T must have +, -, *, /, ==,!=, and stream operators                  ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator() (const DMatrix<T> &m, const MyVect<T> &v)                        ///
/// @brief This is an overloaded () operator that takes in a vector of MyVect       ///
///         objects and a matrix of Matrix objects                                  ///
/// @pre class T must have +, -, *, /, ==,!=, and stream operators. Incoming vector ///
///         must NOT have any ZEROS along the diagonal.                             ///
/// @post returns a MyVect containing the solution to Ax=b from the Matrix and      ///
///         MyVect passed in that when summed equal the vector below it.            ///
/// @param vector of type MyVect<T>                                                 ///
/// @param vector of type DMatrix<T>                                                ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator() (const TriDMatrix<T> &m, const MyVect<T> &v)                     ///
/// @brief This is an overloaded () operator that takes in a vector of MyVect       ///
///         objects and a matrix of Matrix objects                                  ///
/// @pre class T must have +, -, *, /, ==,!=, and stream operators. Incoming vector ///
///         must NOT have any ZEROS along the diagonal.                             ///
/// @post returns a MyVect containing the solution to Ax=b from the Matrix and      ///
///         MyVect passed in that when summed equal the vector below it.            ///
///         This uses the Thomas Algorithm to solve a TriDiagonal Matrix            ///
/// @param vector of type MyVect<T>                                                 ///
/// @param vector of type TriDMatrix<T>                                             ///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator() (const SymMatrix<T> &m, const MyVect<T> &v)                      ///
/// @brief This is an overloaded () operator that takes in a vector of MyVect       ///
///         objects and a matrix of Matrix objects                                  ///
/// @pre class T must have +, -, *, /, ==,!=, and stream operators. Incoming vector ///
///         must NOT have any ZEROS along the diagonal.                             ///
/// @post returns a MyVect containing the solution to Ax=b from the Matrix and      ///
///         MyVect passed in that when summed equal the vector below it.            ///
///         This uses Cholesky Decomposition to solve a Symmetric Matrix            ///
/// @param vector of type MyVect<T>                                                 ///
/// @param vector of type SymMatrix<T>                                              ///
///////////////////////////////////////////////////////////////////////////////////////


#ifndef GausSolv_h
#define GausSolv_h

#include "MyVect.h"
#include "Matrix.h"
#include "TriDMatrix.h"
#include "SymMatrix.h"

template <class T>
class GausSolv
{
public:
    MyVect<T> operator () (const DMatrix<T> &m, const MyVect<T> &v);
    MyVect<T> operator () (const TriDMatrix<T> &m, const MyVect<T> &v);
    MyVect<T> operator () (const SymMatrix<T> &m, const MyVect<T> &v);

};

#include "GausSolv.hpp"
#endif













