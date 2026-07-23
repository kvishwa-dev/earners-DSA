# include <iostream>
using namespace std;

void pattern(int row) {
    for (int i=1; i<=row; i++){
        for (int j=1; j<=i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    cout << "Enter now of rows in three patterns: ";
    int a,b,c;
    cin >> a >> b >> c;

    pattern(a);
    pattern(b);
    pattern(c);
}