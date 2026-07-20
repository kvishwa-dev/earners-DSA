// count digits of a number

# include <iostream>
using namespace std;

int main() {
    int n, digit=0;
    cout << "Enter  a number: ";
    cin >> n;
    
    if (n==0) digit++;
    if (n<0) n*=(-1);
    
    while (n>0){
        n/=10;
        digit++;
    }
    cout << digit;
}