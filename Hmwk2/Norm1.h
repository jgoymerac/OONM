///////////////////////////////////////////////////////////////////////////////////////
/// @file Norm_1.hpp 																																///
/// @author Jeff Goymerac 																													///
/// @brief This header file defines the Norm_1 function as a class									///
///		for use with the class CylnCord 																							///
///  			 																																					///
///////////////////////////////////////////////////////////////////////////////////////

#ifndef NORM1_H
#define NORM1_H

#include <vector>
#include "CylnCord.h"

//using namespace std;

template<class T>
class Norm1
{
	private:

	public:
		T operator()(vector<CylnCord<T> >& vectr)
		{
			T norm1=0;
			for(int i=0;i<vectr.size();i++)
			{
				norm1+= ~vectr[i];
			}
			return norm1;
		}

};


#endif



























