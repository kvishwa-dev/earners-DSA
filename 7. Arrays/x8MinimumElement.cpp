# include <iostream>
using namespace std;

int main(){
    int arr[] = {-5, -67, -89, -90, -76, -56, -47, -82, -78};
    int size = sizeof(arr)/sizeof(int);

    int mn = arr[0];

    for(int i = 0; i < size; i++){
        // if (arr[i] < mn) mn = arr[i];
        mn = min(mn, arr[i]);
    }
    cout << mn << endl;
}