/*
 * Exercise2: Function and Structure - Passing to Function by Value.
 * Define a Point2D structure with fields x and y (of type double ). Write a function
 * distance , which takes two Point2D points (function parameters) and returns
 * the distance between them (of type double ). Use the distance formula.
 * In main, test the function by passing it a pair of dots and printing the result.
 */

/*
 * Доп. материал (вопрос) в faq.md в этой же папке.
 */

#include <iostream>
#include <cmath>

using namespace std;

// the main structure
struct Point2D{
    double x;
    double y;

    // header function
    double distance(Point2D point1, Point2D point2){
        return sqrt(pow(point2.x - point1.x, 2) + pow(point2.y - point1.y, 2));
    }

};

int main(){
    Point2D point1, point2;
    point1.x = 3;
    point1.y = 4;
    point2.x = 1;
    point2.y = 1;
    // expecting result: sqrt(13) \approx 3,6
    double result = point1.distance(point1, point2);
    cout << "Distance between (" << point1.x << "," <<
    point1.y << ") and (" << point2.x << "," << point2.y << ") is " << result << endl;
}