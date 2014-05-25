#ifndef _RAY
#define _RAY

#include "Vector3D.h"
#include "Point.h"

class Ray
{
    public:
        //origin
        Point p;
        //direction
        Vector3D d;

        Ray();
        Ray(const Point& origin, const Vector3D & direction);
        Ray(const Ray& ray);
        Ray& operator=(const Ray &rhs);
        ~Ray();
};

class Geometric_object
{
    public:
        virtual bool hit(const Ray &ray, double &tmin, ShadeRec &rc);  
        virtual ~Geiometric_object() {}
        
}
#endif //__RAY__
