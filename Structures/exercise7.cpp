/*
 * Exercise 7: Enumeration within a structure – Using an enum.
 * There is a Traffic Light structure with a color field. Create
 * a Color {RED, YELLOW, GREEN } enumeration inside it (a regular enum) and make a color
 * of this type. Write a print Color(const Traffic Light&) function that outputs
 * the color of a traffic light in a word (for example, "Red", "Yellow", "Green"). In main, create a variable
 * Traffic Light light; and assign it different color values by checking the
 * print Color function. Then change the definition of the enumeration to enum class Color
 * { ... } and update the assignment/output code (remember to use
 * TrafficLight::Color::RED, etc.). Make sure that the code also works with the enum class.
 */

#include <iostream>

using namespace std;

struct TrafficLight{
    enum Color { RED, YELLOW, GREEN};
    Color color;

    string colorToString() const {
        switch (color) {
            case RED: return "RED";
            case YELLOW: return "YELLOW";
            case GREEN: return "GREEN";
            default: return "UNKNOWN";
        }
    }
    void print_Color() const {
        cout << "Now traffic light is " << colorToString() << endl;
    }
};

int main(){
    TrafficLight light1;
    light1.color = TrafficLight::YELLOW;
    light1.print_Color();
}