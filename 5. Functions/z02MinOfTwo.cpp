// Arguements

# include <iostream>
using namespace std;

void minOfTwo(int m, int n){ // m and n are parameters
    (m<n) ? cout << m : cout << n;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    minOfTwo(a,b); // a and b are arguements
}