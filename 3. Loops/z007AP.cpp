# include <iostream>
using namespace std;

int main() {
    int a, n, d;
    cout << "Enter the first term of the AP: ";
    cin >> a;
    cout << "Enter the no. of terms of the AP: ";
    cin >> n;
    cout << "Enter the difference between consecutive terms of the AP: ";
    cin >> d;

    // Method 1
    for (int i = 1; i<=n; i++){
        cout << a+(i-1)*d << " ";
    }
    cout << endl;

    // Method 2
    for (int i = 1; i<=n; i++){
        cout << a << " ";
        a+=d;
    }

}