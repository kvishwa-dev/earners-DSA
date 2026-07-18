# include <iostream>
using namespace std;

int main() {
    cout << "For Loop start" << endl;
    for (int i = 11; i<=10;){
        cout << i << endl;
    }
    cout << "For Loop end" << endl;

    cout << endl;
    
    cout << "While Loop start" << endl;
    int j = 11;
    while (j<=10){
        cout << j << endl;
        j++;
    }
    cout << "While Loop end" << endl;

    cout << endl;

    cout << "Do While Loop start" << endl;
    int k = 11;
    do {
        cout << k << endl;
        k++;
    } while (k<=10);
    cout << "Do While Loop end" << endl;
}