# include <iostream>
using namespace std;

int main(){
    int num1, num2, num3;
    cout << "Enter three number: ";
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2){
        if (num1 >= num3){
            cout << num1 <<" is greatest of three";
        } else {
            cout << num3 <<" is greatest of three";
        }
    } else {
        if (num2 >= num3){
            cout << num2 <<" is greatest of three";
        }
        else{
            cout << num3 <<" is greatest of three";
        }
    }
}