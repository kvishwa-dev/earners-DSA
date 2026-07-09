#include <iostream>
using namespace std;

int main(){
    float P, R, T;
    cout << "Enter Principal amount: ";
    cin >> P;
    cout << "Enter rate of interest per annum: ";
    cin >> R;
    cout << "Enter time period in years: ";
    cin >> T;
    float SI = (P*T*R)/100;
    cout << "Simple interest is: " << SI << endl;
}