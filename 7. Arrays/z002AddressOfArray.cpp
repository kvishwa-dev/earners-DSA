# include <iostream>
using namespace std;

int main(){
    int arr[] = {5, 67, 89, 90, 76, 56, 47, 82, 78};
    int size = sizeof(arr)/sizeof(int);

    cout << arr << endl; // It gives the address og the array

    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
}