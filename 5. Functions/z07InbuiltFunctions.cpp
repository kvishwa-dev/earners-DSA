# include <iostream>
# include <cmath>
using namespace std;

int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Max: " << max(a, b) << endl;
    cout << "Min: " << min(a, b) << endl;

    cout << "Power: " << pow(a, b) << endl;

    cout << "Square Root: " << sqrt(a) << endl;

    cout << "Cube Root: " << cbrt(a) << endl;

    cout << "Absulote Value: " << abs(a) << endl;
}