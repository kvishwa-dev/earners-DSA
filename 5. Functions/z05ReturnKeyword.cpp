# include <iostream>
using namespace std;

void fun(int a){
    cout << a << endl;
    if (a>=10) return;
    cout << a*a;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    fun(x);
}