# include <iostream>
using namespace std;

int main() {
    int a, n, r;
    cout << "Enter the first term of the GP: ";
    cin >> a;
    
    cout << "Enter the Multiplicative of the GP: ";
    cin >> r;

    cout << "Enter the no. of terms of the GP: ";
    cin >> n;

    // Method 1
    for (int i = 1; i<=n; i++){
        cout << a << " ";
        a*=r;
    }
    cout << endl;
}