// Factorial of a number

# include <iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1; // long long can store factorial of numbers upto 20
    // int can store upto 12 only.
    cout << "Enter  a number: ";
    cin >> n;

    while (n != 0){
        fact*=n;
        n--;
    }

    cout << fact;
}