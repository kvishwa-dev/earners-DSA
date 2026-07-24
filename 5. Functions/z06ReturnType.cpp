# include <iostream>
using namespace std;

int product (int x, int y){
    cout << "A" << endl;
    return x*y;
}

int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int z = product(a, b);
    cout << z;
}