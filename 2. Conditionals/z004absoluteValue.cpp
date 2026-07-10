#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // if (num < 0) cout << "Absolute value of " << num << " is " << num*(-1); // Does not change value inside variable
    // else cout << "Absolute value of " << num << " is " << num;

    if (num < 0) num*=-1; // Changes value inside varialble
    cout << "Absolute value is " << num;

}