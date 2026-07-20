// a raise to the power b

# include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter value of a and b respectively: ";
    cin >> a >> b;
    int res  = 1;

    for (int i = 1; i<=b; i++){
        res*=a;
        if (a== 1 || a== 0) break;
    }   
    if (a==0 && b==0) cout << "Indeterminate Form";
    else cout << res;
}