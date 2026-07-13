#include <iostream>
#include <climits>
using namespace std;

int main(){
    int x = INT_MAX;
    cout << x << endl; // 4 bytes = 32 bits

    int x1 = INT_MIN;
    cout << x1 << endl;

    long long x2 = LONG_LONG_MAX;
    cout << x2 << endl; // 8 bytes = 64 bits

    long long x3 = LONG_LONG_MIN;
    cout << x3 << endl;

    short x4 = INT16_MAX;
    cout << x4 << endl; // 2 bytes = 16 bits

    short x5 = INT16_MIN;
    cout << x5 << endl;
}