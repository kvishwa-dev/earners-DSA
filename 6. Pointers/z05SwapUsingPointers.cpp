# include <iostream>
using namespace std;

void swap(int* p1, int* p2){ // Pointers
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(){
    cout << "Enter two numbers: ";
    int a, b;
    cin >> a >> b;

    cout << "Before Swap: a = " << a << " b = " << b << endl;

    swap(&a, &b); // pass by reference

    cout << "After Swap: a = " << a << " b = " << b << endl;
}