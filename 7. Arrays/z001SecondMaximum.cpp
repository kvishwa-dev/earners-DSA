# include <iostream>
using namespace std;

int main(){
    int arr[] = {5, 67, 89, 90, 76, 56, 47, 82, 78};

    int size = sizeof(arr)/sizeof(int);
    int mx1 = INT32_MIN, mx2 = 0;

    for (int i = 0; i < size; i++){
        if (arr[i] > mx1){
            mx2 = mx1;
            mx1 = arr[i];
        }
    }
    cout << mx1 << endl;
    cout << mx2 << endl;
}