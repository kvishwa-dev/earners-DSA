# include <iostream>
using namespace std;

int fact(int n){
    int fact=1;
    for (int i=2; i<=n; i++){
        fact*=i;
    }
    return fact;
}

int ncr(int n, int r){
    return (fact(n))/(fact(r)*fact(n-r));
}

int main(){
    cout << "Enter number of rows: ";
    int row;
    cin >> row;

    for (int i=0; i<=row; i++){
        for(int x=1; x<=row-i; x++){
            cout << " ";
        }
        for (int j=0; j<=i; j++){
            cout << ncr(i, j) << " ";
        }
        cout << endl;
    }
}