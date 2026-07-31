# include <iostream>
# include <cmath>
using namespace std;

int main(){
    int arr[] = {74, 96, 91, 57, 62};
    cout << sizeof(arr)/sizeof(int) << endl; // length of array

    cout << arr[2] << endl; // accessing the elements of array
    arr[2] = 50; // Updating the value
    cout << arr[2] << endl;

    cin >> arr[2];
    cout << arr[2] << endl;
}