# include <iostream>
using namespace std;

void change(int x[]){ // address of array is recieved.
    x[0] = 20;
}
void change1(int y[]){ // address of array is recieverd. y points to same address of x.
    y[1] = 20;
}

int main(){
    int x[] = {5, 67, 89};
    change(x); // address of array is passed. It is pass by reference
    change1(x);

    cout << x[0] << endl;
    cout << x[1] << endl;
}