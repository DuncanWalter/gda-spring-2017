#ifndef VECTOR3_H
#define VECTOR3_H

/*!
\author David "Dawn" Estes McKnight
\date 21 February 2017
\version 3
Vector is a class for storing (x,y,z) information. Supports operations with other vectors and with matrices.
*/

class Vector3
{
public:
    //Constructor(s)
    Vector3(const double x, const double y, const double z=0);                  //!<Constructs a vector with x and y values. z-argument optional; if excluded, by default z is set to 0.
    
    //Addition
    Vector3 operator + (const Vector3& addend) const;                           //!<Addition.
    void operator += (const Vector3& addend);                                   //!<Addition assignment.
    
    //Subtraction
    Vector3 operator - (const Vector3& subtrahend) const;                       //!<Subtraction.
    void operator -= (const Vector3& subtrahend);                               //!<Subtraction assignment.
    void subtractFrom(const Vector3& minuend);                                  //!<Subtracts this vector from a minuend vector.
    
    //Multiplication
    double dot(const Vector3& multiplicand) const;                              //!<Dot product. 
    Vector3 cross(const Vector3& multiplicand) const;                           //!<Cross product. 
    //Matrix direct(const Vector3& multiplicand) const;                         //!<Direct product.
    Vector3 pointwiseMult(const Vector3& multiplicand) const;                   //!<Pointwise product. https://en.wikipedia.org/wiki/Pointwise_product
    friend Vector3 operator * (const Vector3& vector, const double scalar) const; //!<Scalar multiplication.
    friend void operator *= (const Vector3& vector, const double scalar);       //!<Scalar multiplication assignment.

    //Division
    Vector3 pointwiseDiv (const Vector3& divisor) const;                        //!<Pointwise division. https://en.wikipedia.org/wiki/Pointwise_product
    friend Vector3 operator / (const Vector3& vector, const double scalar) const; //!<Scalar division.
    friend void operator /= (const Vector3& vector, const double scalar);       //!<Scalar division assignment.

    //Other
    double magnitude() const;                                                   //!<Returns the magnitude of this vector.
    void normalize();                                                           //!<Normalizes the vector.
    Vector3 normalized() const;                                                 //!<Returns a normalized version of the vector.
    void project(Vector3 otherVector3);                                         //!<Projects the vector onto otherVector3.
    Vector3 projected(Vector3 otherVector3) const;                              //!<Returns a projected version of the vector onto otherVector.
protected:
    double x, y, z;
private:
};

#endif