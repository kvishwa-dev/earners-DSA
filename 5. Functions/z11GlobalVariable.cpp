# include <iostream>
using namespace std;

int x = 7; // Global Variable

void fun(){
    x=9;
}

int main(){
    cout << x << endl;
    fun();
    cout << x << endl;
}