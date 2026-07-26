# include <iostream>
using namespace std;

int main(){
    int x = 10;
    int* p1 = &x;
    int** p2 = &p1; // Double Pointer is used to store address of another pointer
    
    cout << p1 << endl; // address od x
    cout << *p1 << endl; // x - Dereference
    cout << p2 << endl; // address of p1
    cout << *p2 << endl; // address of x 
    cout << **p2 << endl; // x - Double dereferencing
}