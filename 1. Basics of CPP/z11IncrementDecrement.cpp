# include <iostream>
using namespace std;
int main(){
    int x = 5;
    cout << ++x << endl; // Pre Increment
    cout << x << endl;

    cout << x++ << endl; // Post Increment
    cout << x << endl;

    int y = 5;
    cout << --y << endl; // Pre Decrement
    cout << y << endl;

    cout << y-- << endl; // Post Decrement
    cout << y << endl;
}