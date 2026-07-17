# include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    // for (int i = num; i>=1; i--){
    //     cout << i << " ";
    // }

    for (int i = 1; i<=num; i++){
        cout << num+1-i << endl;
    }

}