# include <iostream>
using namespace std;

int main(){
    cout << 15%4 << endl; // modulus operator gives remainder while being divided.

    // Properties of Modulus Operator
    
    cout << 5%7 << endl; // a%b = a if a < b

    cout << 7%(-3) << endl; // a%(-b) = a%b

    cout << (-7)%3 << endl; // (-a)%b = -(a%b)
}