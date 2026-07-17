// 1, n, 2, n-1, 3, n-2, ...

# include <iostream>
using namespace std;

int main() {
    int n, i=1;
    cout << "Enter a number: ";
    cin >> n;

    while (n>=0){
        cout << i << endl; 
        cout << n << endl; 
        i++;
        n--;
    }

}