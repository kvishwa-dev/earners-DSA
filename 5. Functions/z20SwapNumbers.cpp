# include <iostream>
using namespace std;

int main(){
    int a ,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before Swap: a = " << a << " b = " << b << endl;

    // int c = a;
    // a = b;
    // b = c;

    // Without using third variable
    // a = a + b;
    // b = a - b;
    // a = a - b;

    // One Line Solution
    a = (a + b) - (b = a);

    cout << "After Swap: a = " << a << " b = " << b << endl;
}