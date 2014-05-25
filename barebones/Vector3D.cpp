#include "Vector3D.h"

Vector3D::Vector3D() : x(0), y(0), z(0) {}
Vector3D::Vector3D(float a, float b, float c) : x(a), y(b), z(c) {}
Vector3D::~Vector3D(){}
Vector3D::Vector3D(const Vector3D& other) : x(other.x), y(other.y), z(other.z) {}

bool Vector3D::operator==(const Vector3D& other){
    return((x == other.x) && (y == other.y) && (z == other.z));
}
bool Vector3D::operator!=(const Vector3D& other){
    return((x != other.x) && (y != other.y) && (z != other.z));
}
Vector3D Vector3D::operator-(const Vector3D& other){
    return(Vector3D(x - other.x, y - other.y, z - other.z));
}
Vector3D Vector3D::operator+(const Vector3D& other){
    return(Vector3D(this->x + other.x, this->y + other.y, this->z + other.z));
}

Vector3D Vector3D::operator*(float s){
    return (Vector3D(x*s, y*s, z*s));
}

Vector3D Vector3D::operator/(float s){
    s = 1.0f/s;
    return Vector3D((this->x)*s, (this->y)*s, (this->z)*s);
}

Vector3D& Vector3D::operator +=(float s){
    x += s; y += s; z += s;
    return *this;
}

Vector3D& Vector3D::operator -=(float s)
{
    x -= s; y -= s; z -= s;
    return *this;
}

Vector3D& Vector3D::operator *=(float s)
{
    x *= s; y *= s; z *= s;
    return *this;
}

Vector3D& Vector3D::operator /=(float s)
{
    s  = 1.0f/s;
    x *= s; y *= s; z *= s;
    return *this;
}


void Vector3D::normalize(){
    float squared = x*x + y*y + z*z;
    if(squared > 0.0f)
    {
        float oneOver = 1.0f/sqrt(squared);
        x *= oneOver;
        y *= oneOver;
        z *= oneOver;
    }
}

inline float Vector3D::magnitude(const Vector3D & vector){
    return sqrt(vector.x*vector.x + vector.y*vector.y + vector.z*vector.z);
}

inline Vector3D Vector3D::cross(const Vector3D &a, const Vector3D & b){
    return Vector3D(
            (a.y * b.z) - (a.z * b.y),
            (a.z * b.x) - (a.x * b.z),
            (a.x * b.y) - (a.y * b.z)
            );
}

inline float Vector3D::distance(const Vector3D &a,const Vector3D &b)
{
    float dx = a.x - b.x;
    float dy = a.y - b.y;
    float dz = a.z - b.z;
    return sqrt(dx * dx + dy * dy + dz * dy);
}


std::ostream& operator<<(std::ostream& os, const Vector3D& p){
    std::cout << "(" <<  p.x << "," << p.y <<  "," << p.z << ")";
    return os;
}
