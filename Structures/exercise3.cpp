/*
 * Exercise 3: Structure and return – Returning a structure from a function.
 * Write a function makePoint that takes two numbers (coordinates) as input and returns
 * a Point2D structure with the given coordinates.
 * Use this function in main to create a point, then print its coordinates.
 */

/*
 * Доп. материал (вопрос) в faq.md в этой же папке.
 */

#include <iostream>

using namespace std;

// our structure
struct Point2D{
    double x;
    double y;
};

// the header function that return struct type
Point2D make_point(double x, double y){
    Point2D point;
    point.x = x;
    point.y = y;
    return point;
}

// testing
int main(){
    double x,y;
    cin >> x >> y;
    Point2D result = make_point(x, y);
    cout << "Our point is (" << result.x << "," << result.y << ") " << endl;
}

