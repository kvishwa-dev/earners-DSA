// Greatest of three numbers logic using Ternary Operator

# include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    (a>=b) ? ((a>=c) ? cout << a : cout << b) : ((b>=c) ? cout << b : cout << c);
}