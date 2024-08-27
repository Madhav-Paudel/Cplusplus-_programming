#include <iostream>
using namespace std;

float area_of_circle(float pi, int radius) {
    float area = pi * radius * radius;
    cout << "The area of the circle is " << area << endl;
    return area;
}

int area_of_rectangle(int length, int breadth) {
    int area = length * breadth; 
    cout << "The area of the rectangle is " << area << endl;
    return area;
}

float area_of_triangle(int breadth, int height) {
    float area = 0.5 * breadth * height;
    cout << "The area of the triangle is " << area << endl;
    return area;
}

int main() {
    area_of_circle(3.14, 2);
    area_of_rectangle(5, 3);
    area_of_triangle(3, 5);
    return 0;
}
