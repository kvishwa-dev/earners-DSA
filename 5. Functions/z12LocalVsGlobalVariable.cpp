# include <iostream>
using namespace std;

int x = 7;

void fun(){
    x=11;
}

int main(){
    int x = 8;

    cout << x << endl;

    fun();

    cout << x << endl;
}