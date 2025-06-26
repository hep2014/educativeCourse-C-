/*
 * Exercise 5: Structure Constructor - Initialization via Constructor.
 * Write a Circle structure with fields radius (double) and x, y (coordinates of the center,
 * double). Define a constructor that takes three arguments: radius and
 * coordinates, and initializes the fields. In main, create several Circle objects with
 * different parameters, print their fields. Then add an area() method to the structure,
 * calculating the area of the circle, and test it
 */

/*
 * Complication: Overload the constructor: Add a parameterless constructor that
 * sets a unit circle at (0,0) by default. Check that you
 * can create circles without arguments.
 */

#include <iostream>

using namespace std;

const double PI = 3.14;


struct Circle{
    double radius;
    double x;
    double y;

    // constructor
    Circle(double x_val, double y_val, double radius_val){
        x = x_val;
        y = y_val;
        radius = radius_val;
    }
    // complication
    Circle(){
        x = 0;
        y = 0;
        radius = 1.0;
    }
    // method
    double area(double radius_val){
        return PI * radius_val * radius_val;
    }


};

int main(){
    Circle cr1(1, 2, 4);
    Circle cr2(4, 2, 10);
    double area_cr2 = cr2.area(cr2.radius);
    Circle cr3;
    double area_cr3 = cr3.area(cr3.radius);
    cout << "Area of circle number 2 is " << area_cr2 << endl;
    cout << "Area of circle number 3 is " << area_cr3 << endl;
}