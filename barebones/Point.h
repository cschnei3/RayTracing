#ifndef POINT_H 
#define POINT_H

#include <cmath> 
#include <iostream>
#define A_DEBUG  false

class Point{     
    public:    
        Point();
        Point(const Point& point);
        Point(int a, int b, int c);
        Point& operator=(const Point &other);
        double operator-(const Point &p) const;
        bool operator==(const Point &p) const;
        ~Point();                            
        friend std::ostream& operator<<(std::ostream& os, const Point& p);
        friend std::istream& operator>>(std::istream& is, Point& p);  
    private:
        int x;
        int y;
        int z;
};

#endif //POINT_H         
