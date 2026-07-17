# include <iostream>
using namespace std;

int main() {

    // 100 iterations
    for (int i = 1; i<=100; i++){ // initialization, condition & updation
        if (i%2==0) cout << i << " ";
    }
    cout << endl;

    // 50 iterations
    for (int i = 2; i<=100; i+=2){ // initialization, condition & updation
        cout << i << " ";
    }
    cout << endl;

    // 50 iterations
    for (int i = 1; i<=50; i++){ // initialization, condition & updation
        cout << i*2 << " ";
    }
}