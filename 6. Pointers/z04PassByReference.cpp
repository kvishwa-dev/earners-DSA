# include <iostream>
using namespace std;

void change(int* ptr){ // pass by reference
    *ptr = 15; // Dereference Operator
}

int main(){
    int x = 7;
    change(&x); // pass by reference
    cout << x << endl;
}