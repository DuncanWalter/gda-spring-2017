#ifndef VECTOR_H
#define VECTOR_H

#include "mbed.h"

/*!
\author David "Dawn" Estes McKnight
\date 17 February 2017
Vector is a class for storing (x,y,z) information. Supports operations with other vectors and with matrices.
*/

class Vector
{
public:
    //Constructor(s)
    Vector(const double x, const double y, const double z=0);                 //!<Takes x, y, and potentially z co-ordinates
    //Addition
    Vector addTo(const Vector& addend);                     //!<Addition.
    //Subtraction
    Vector subract(const Vector& subtrahend);               //!<Subtracts a subtrahend vector from this one
    Vector subtractFrom(const Vector& minuend);             //!<Subtracts this vector from a minuend vector
    //Multiplication
    double dot(const Vector& multiplicand);                 //!<Dot product. 
    Vector cross(const Vector& multiplicand);               //!<Cross product. 
    //Matrix direct(const Vector& multiplicand);            //!<Direct product.
    Vector pointwiseMult(const Vector& multiplicand);       //!<Pointwise product. https://en.wikipedia.org/wiki/Pointwise_product
    Vector scalarMult(const Vector& multiplier, const double multiplicand);          //!<Scalar multiplication
    //Division
    Vector pointwiseDiv (const Vector& divisor);               //!<Pointwise division. https://en.wikipedia.org/wiki/Pointwise_product
    double magnitude();                                        //!<Returns the magnitude of this vector
    
    //Symbolic operators here
    friend Vector operator + (const Vector& vectorA, const Vector& vectorB);    //Symbolic addition
    friend Vector operator - (const Vector& vectorA, const Vector& vectorB);    //Symbolic subtraction
    friend Vector operator * (const Vector& vector, const double scalar);       //Symbolic vector multiplication by scalars
protected:
private:
};

#endif