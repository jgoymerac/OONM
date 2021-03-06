///////////////////////////////////////////////////////////////////////////////////////
/// @file GauSid.h						`																											///
/// @author Jeff Goymerac 																													///
/// @brief This file declares the Gauss-Sidel cladd for use with  the templated 		///
///		array class MyVect as defined in MyVect.hpp																		///
///									 																																///
///  			 																																					///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////		
/// @class GauSid 																																	///
/// @brief This templated class calculates the independence of a set of vectors			///
/// 	This class assumes the user will be using real numbers	and limits the values	///
///		to the size of double for return values. 																			///
///	@pre class T must have +, -, *, /, ==,!=, and stream operators 									///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn operator() 																																	///
/// @brief This is an overloaded () operator that takes in a vector of MyVect 			///
///			objects																																			///
/// @pre class T must have +, -, *, /, ==,!=, and stream operators. Incoming vector	///
///			must NOT have any ZEROS along the diagonal.																	///
/// @post returns a MyVect containing the multipliers of the equivalent vectors 		///
///		passed in that when summed equal the vector below it. If the vecotrs are 			///
///			linearly independent it returns a zero vector 															///
///	@param vector of type MyVect<T> 																								///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn getIt() 																																		///
/// @brief Public accessor function that returns the number of iterations						///
/// @pre N/A 																																				///
/// @post N/A 																																	 		///
/// @return it integer value of iterations completed in iteration()									///			
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn isMult() 																																		///
/// @brief This determines if one of the MyVects is a multiple of another						///
/// @pre class T must have /, ==,!=, and stream operators defined. 									///
/// @post returns true if one is a multiple of another and stores the multiplier 		///
///		value in mult. 																																///
///	@param vector of type MyVect<T> 																								///
///	@param vector of type MyVect<T> 																								///
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
/// @fn iteration() 																																///
/// @brief This function implements Gauss-Siedel to find the solution to a set of 	///
///		vectors thus determining if they are linearly independent 							 			///
/// @pre class T must have -, *, /, ==,!=, assignment and stream operators. 				///
///		Incoming vector must NOT HAVE ANY ZEROS ALONG THE DIAGONAL.										///
/// @post returns a MyVect containing the multipliers of the equivalent vectors 		///
///		passed in that when summed equal the vector below it. If the vecotrs are 			///
///		linearly independent it returns a zero vector. 															 	///
///	@param vector of type MyVect<T> 																								///
///////////////////////////////////////////////////////////////////////////////////////

#ifndef GauSid_h
#define GauSid_h
#include "MyVect.h"
//const int iterations = 10000;

template<class T>
class GauSid
{

	public:
		MyVect<T> operator()(MyVect <MyVect<T> >& vectr);
		const double tolerance = .000000000000000000001;
		const int iterations = 20000;
		int& getIt(){return it;};

	private:	
		int it;
		T mult;						//stores the value if a vector is a multiple of another otherwise 0
		bool isMult(const MyVect<T>& a, const MyVect<T>& b);
		MyVect<T> iteration(const MyVect <MyVect<T> >& s);
};
#include "GauSid.hpp"

#endif
