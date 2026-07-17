# include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number to check divisibility by: ";
    cin >> num;
    for (int i = num; i<=100; i+=num){
        if(i%2!=0) cout << i << " ";
    }
    cout << endl;

    for (int i = num; i<=100; i+=(num*2)){
        cout << i << " ";
    }

}
