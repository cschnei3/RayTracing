#include <iostream>
#include "Math.cpp"
#include "Point.h"
#include "Vector3D.h"

int main()
{
    Point p;
    Vector3D v;
    Vector3D a(1,1,1);
    Point q(1.0, 2.0,3.3); 
    std::cout << p << " " << q << std::endl;
    return 1;
}
