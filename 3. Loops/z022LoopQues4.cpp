// sum of a number and its reverese

# include <iostream>
using namespace std;

int main() {
    int n, rev=0;
    cout << "Enter  a number: ";
    cin >> n;
    int num = n;

    while (n != 0){
        int rem = n%10;
        rev = (rev*10) + rem;
        n/=10;
    }

    cout << rev+num;
}