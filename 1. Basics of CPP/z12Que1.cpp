#include <iostream>
using namespace std;

int main(){
    // int x = 8;
    // int y = x++ + --x;
    // cout << y << endl; // 16

    int x = 8;
    int y = x++ + ++x;
    cout << y << endl; // 18
}