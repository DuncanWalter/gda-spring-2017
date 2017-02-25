#ifndef Mat4_H
#define Mat4_H

/*
\author David "Dawn" Estes McKnight
\date 20 February 2017
Mat4 is a class for 4-dimensional matrices
*/

class Mat4
{
public:
    //Constructor(s)
    Mat4(double a11, double a12, double a13, double a14,
            double a21, double a22, double a23, double a24,
            double a31, double a32, double a33, double a34,
            double a41, double a42, double a43, double a44);
    
    Mat4 + (const Mat4& addend) const;                          //!<Matrix addition 
    void +=(const Mat4& addend);                                //!<Matrix addition assignment
    Mat4 - (const Mat4& subtrahend) const;                      //!<Matrix subtraction
    void -=(const Mat4& subtrahend);                            //!<Matrix subtraction assignment
    void subtractFrom(const Mat4& minuend);                     //!<Subtracts this matrix from the minuend matrix.
    
    Mat4 * (const Mat4& multiplicand) const;                    //!<Matrix multiplication
    Mat4 *= (const Mat4& multiplicand);                         //!<Matrix multiplication assignment
    
    Mat4 hadamardProd(const Mat4& multiplicand);                //!<Entrywise (Hadamard) matrix multiplication
            
}

#endif