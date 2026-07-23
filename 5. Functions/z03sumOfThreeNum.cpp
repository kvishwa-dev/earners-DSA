# include <iostream>
using namespace std;

void sumOfThree(int a, int b, int c){
    cout << a+b+c;
}

int main(){
    cout << "Enter three numbers: ";
    int x,y,z;
    cin >>x >>y >>z;

    sumOfThree(x,y,z);
}