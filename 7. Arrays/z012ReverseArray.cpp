# include <iostream>
# include <vector>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};

    int i = 0, j = sizeof(arr)/sizeof(int)-1;

    while(j>i){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for(int i = 0; i< sizeof(arr)/sizeof(int); i++){
        cout << arr[i] << " ";
    }
}