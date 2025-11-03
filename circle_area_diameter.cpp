// Algorithm Challenge
// 19 – Circle Area Through Diameter

#include <iostream>
#include <cmath> // for mathematical operations like pow()
using namespace std;

int main()
{
    float diameter, area;
    const float PI = 3.14159; // constant value for π

    // Ask the user to enter the diameter of the circle
    cout << "Enter the diameter of the circle: ";
    cin >> diameter;

    // Calculate the area using the formula:
    // area = (π * d²) / 4
    area = (PI * pow(diameter, 2)) / 4;

    // Display the result
    cout << "The area of the circle is: " << area << endl;

    return 0;
}
