# include <iostream>
using namespace std;

int main(){
    int x = 6;
    int y = (x++ > 6) ? x-1 : x*4;
    cout << y;
}