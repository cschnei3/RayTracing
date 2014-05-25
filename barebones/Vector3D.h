#ifndef D_VECTOR_
#define D_VECTOR_

#include <cmath>
#include <iostream>

class Vector3D
{
    private:
        float x,y,z;
    public:
        Vector3D();
        Vector3D(const Vector3D &other);
        Vector3D(Vector3D && other);
        Vector3D(float a, float b, float c);
        ~Vector3D();
        Vector3D& operator=(const Vector3D& other);
        bool operator==(const Vector3D& other);
        bool operator!=(const Vector3D& other);

        Vector3D operator-() const;
        Vector3D operator+() const;

        Vector3D operator+(const Vector3D& other);
        Vector3D operator-(const Vector3D& other);
        Vector3D operator*(float s);
        Vector3D operator/(float s);
        
        Vector3D& operator +=(float s);
        Vector3D& operator -=(float s);
        Vector3D& operator *=(float s);
        Vector3D& operator /=(float s);

        void normalize();

        float dot(const Vector3D & other);
        inline float magnitude(const Vector3D & vector);
        inline Vector3D cross(const Vector3D &a, const Vector3D & b);
        inline float distance(const Vector3D &a, const Vector3D &b);
        friend std::ostream& operator<<(std::ostream& os, const Vector3D& p);
        
};

#endif //3DVECTOR
