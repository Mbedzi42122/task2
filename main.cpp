#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double h_inches, d_feet, d_inches, angle_degrees;


    cout << "Enter the height of your eye (in inches): ";
    cin >> h_inches;

    cout << "Enter the distance from the tree (feet and inches separated by a space): ";
    cin >> d_feet >> d_inches;

    cout << "Enter the angle between the horizontal and the line to the top of the tree (in degrees): ";
    cin >> angle_degrees;


    double d_total_inches = d_feet * 12 + d_inches;
    double angle_radians = angle_degrees * M_PI / 180;
    double tree_height_feet = (h_inches / 12) + (d_total_inches * tan(angle_radians)) / 12;


    cout << "The height of the tree is approximately " << tree_height_feet << " feet." << endl;

    return 0;
}
