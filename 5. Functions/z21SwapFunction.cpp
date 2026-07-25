# include <iostream>
using namespace std;

void swap(int& a, int& b){ // alias
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    cout << "Enter two numbers: ";
    int a, b;
    cin >> a >> b;

    cout << "Before Swap: a = " << a << " b = " << b << endl;

    swap(a, b);

    cout << "After Swap: a = " << a << " b = " << b << endl;
}