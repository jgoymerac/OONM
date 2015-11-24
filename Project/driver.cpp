///////////////////////////////////////////////////////////////////////////////////////
/// @file driver.cpp                                                                ///
/// @author Jeff Goymerac                                                           ///
/// @brief This file implements the templated Diagonal, Tridiagonal, and  Symetric  ///
///     Matrix classes                                                              ///
///                                                                                 ///
///                                                                                 ///
///////////////////////////////////////////////////////////////////////////////////////


#include "MyVect.h"
#include "Matrix.h"
#include "DMatrix.h"
#include "GausSolv.h"
#include "MatrixError.h"
#include "TriDMatrix.h"
#include "SymMatrix.h"
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char *argv[])
{
    try
    {
        int a = argc,
            b;
        a = 0;
        b=0;
        ifstream myFile;
        const char *inFile = argv[1];
        myFile.open (inFile);
        myFile >> a;
        TriDMatrix<double> mat(a), mult(a), test1(a);
        MyVect<double> vect(a), mul(a);
        DMatrix<double> test(a);
        GausSolv<double> gs;
        myFile >> mat;
        myFile >> vect;
        myFile >> b;
        SymMatrix<double> matb (b), multb (b),test2(b);
        MyVect<double> vectb (b), mulb (b);
        myFile >>matb;
        myFile>> vectb;
        cout << "Outputting the solution to Ax=b for the TriDiagonal Matrix" << endl;
        cout<<"Matrix:\n"<<mat;
        mul = gs (mat, vect);
        cout << "Solution:\n"<<mul << endl;
        cout << "Outputting the solution to Ax=b for the Symmetric Matrix" << endl;
        cout<<"Matrix:\n"<<matb;
        mulb= gs(matb, vectb);
        cout<< "Solution:\n";
        cout << mulb<< endl;
        test2=matb;
        cout<<test2;
        vectb=mulb;
        cout<<vectb;
    }
    catch (MatrixError& e)
    {
        cout << "An Error occured\n" ;
        e.message(); 
    }
    return 0;
}
































