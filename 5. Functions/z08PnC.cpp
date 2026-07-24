# include <iostream>
using namespace std;

int fact(int n){
    int fact=1;
    for (int i=2; i<=n; i++){
        fact*=i;
    }
    return fact;
}

int main(){
    cout << "Enter value of n and r: ";
    int n, r, ncr, npr;
    cin >> n >>r;

    ncr = (fact(n))/(fact(r)*fact(n-r));
    cout << ncr << endl;

    npr = fact(n)/fact(n-r);
    cout << npr;
}