# include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num%5==0 && num%3!=0){
        cout << num << " is divisible by 5, but not by 3";
    }
    else if (num%3==0 && num%5!=0){
        cout << num << " is divisible by 3, but not by 5";
    }
    else if (num%5==0 && num%3==0){
        cout << num << " is divisible by 5 and 3 both";
    }
    else {
        cout << num << " is niether divisible by 5 nor by 3";
    }
}