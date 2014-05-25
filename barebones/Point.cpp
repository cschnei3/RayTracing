#include "Point.h"

const int XOrigin = 0;
const int YOrigin = 0;


Point::Point() :x(0), y(0), z(0){}
Point::Point(const Point & other) : x(other.x), y(other.y), z(other.z) {}
Point::Point(int a, int b, int c) : x(a), y(b), z(c) {}
Point::~Point() {}

Point& Point::operator=(const Point &rhs){
    if(this!=&rhs){
        x = rhs.x;
        y = rhs.y;
        z = rhs.z;
    }
    return *this;
}

double Point::operator-(const Point &p) const{
    return(pow((pow(x - p.x, 2.0) + pow(y - p.y, 2.0) + pow(z - p.z,2.0)), .5));
}

bool Point::operator==(const Point &p) const{
    return(((x == p.x) && (y == p.y)) && (z == p.z));
}

std::ostream& operator<<(std::ostream& os, const Point& p){
    std::cout << "(" <<  p.x << "," << p.y <<  "," << p.z << ")";
    return os;
}


