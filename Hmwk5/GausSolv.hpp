///////////////////////////////////////////////////////////////////////////////////////
/// @file GausSolv.hpp																															///
/// @author Jeff Goymerac 																													///
/// @brief This header file declares/defines a templated Gausian Solver Class				///
///									 																																///
///  			 																																					///
///////////////////////////////////////////////////////////////////////////////////////

#ifndef GausSolv_hpp
#define GausSolv_hpp
#include <cmath>

template <class T>
MyVect<T> GausSolv<T>::operator()(const DMatrix<T>& mat, const MyVect<T>& vect)
{
	DMatrix<T> m = mat;
	MyVect<T> v = vect;
	int n = mat.size();
	for (int i = 0; i < n; i++)
	{
		m[i].insert(v[i], n);
	}

	for (int i = 0; i < n; i++) {
		// Search for maximum in this column
		T maxEl = abs(m[i][i]);
		int maxRow = i;
		for (int k = i + 1; k < n; k++) {
			if (abs(m[k][i]) > maxEl) {
				maxEl = abs(m[k][i]);
				maxRow = k;
			}
		}

		for (int k = i; k < n + 1; k++) {
			double tmp = m[maxRow][k];
			m[maxRow][k] = m[i][k];
			m[i][k] = tmp;
		}

		for (int k = i + 1; k < n; k++) {
			double c = -m[k][i] / m[i][i];
			for (int j = i; j < n + 1; j++) {
				if (i == j) {
					m[k][j] = 0;
				} else {
					m[k][j] += c * m[i][j];
				}
			}
		}
	}

	MyVect<T> x(n);
	for (int i = n - 1; i >= 0; i--) {
		x[i] = m[i][n] / m[i][i];
		for (int k = i - 1; k >= 0; k--) {
			m[k][n] -= m[k][i] * x[i];
		}
	}
	return x;
}

#endif



















