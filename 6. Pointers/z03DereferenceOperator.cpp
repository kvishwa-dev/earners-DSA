# include <iostream>
using namespace std;

int main(){
    int x = 7;
    int* ptr = &x;
    cout << *ptr << endl; // dereference operator

    *ptr = 70; // x = 70

    cout << x << endl;
}