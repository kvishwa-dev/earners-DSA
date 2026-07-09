# include <iostream>
using namespace std;

int main(){
    // float radius = 7;
    float radius;
    cout << "Enter radius of circle: ";
    cin >> radius; // cin is used to take input from user.
    float area = 3.14 * radius * radius;
    cout << "Area of circle with radius " << radius << " is " << area;
}