/*
Ques: Take real number input and check if it is
an integer or not.
*/

#include <iostream>
using namespace std;

int main(){
    float num;
    cout << "Enter a number: ";
    cin >> num;

    int x = (int) num;

    if (x == (float)num) cout << num << " is an integer";
    // always compare same data types
    else cout << num << " is not an integer";
}