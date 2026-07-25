# include <iostream>
using namespace std;

int x = 100;

int main(){
    int x = 6;
    cout << x << endl; // accessing local variable

    // Scope Resolution Operator
    cout << ::x << endl; // accessing global variable
    
}