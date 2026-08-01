# include <iostream>
using namespace std;

int main(){
    int arr[5]; // Static Allocation

    // Pointers Array
    int* arr2 = new int[5]; // Dyanmic Allocation
    arr2[0] = 7;

    for (int i = 0; i <5; i++){
        cout << arr2[i] << " ";
    }
}