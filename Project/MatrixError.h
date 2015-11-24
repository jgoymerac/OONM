
//////////////////////////////////////////////////////////////////////////////
///@file MatrixError.h                                                     ///
///@author Jeff Goymerac                                                   ///
///@this file defines the Error class for use with Matrix classes          ///
//////////////////////////////////////////////////////////////////////////////


#ifndef MatrixError_h
#define MatrixError_h


class MatrixError : public exception
{
private:
    int e_type;
public:
    MatrixError (const int e)
    {
        e_type = e;
    }
    void message () const throw ()
    {
        switch (e_type)
        {
            case 0:
                cout << "Divide by zero." << endl;
                break;
            case 1:
                cout << "Array out of bounds." << endl;
                break;
            case 2:
                cout << "Dimension mismatch." << endl;
                break;
        }
    }
};


#endif