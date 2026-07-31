# include <iostream>
using namespace std;

int main(){
    int arr[] = {-5, -67, -89, -90, -76, -56, -47, -82, -78};
    int size = sizeof(arr)/sizeof(int);
    int mx = INT32_MIN;

    for(int i = 0; i < size; i++){
        // if (arr[i] > mx) mx = arr[i];
        mx = max(mx, arr[i]);
    }
    cout << mx << endl;
}