# include <iostream>
using namespace std;

int main(){
    int arr[] = {74, 96, 91, 57, 62, 6, 89, 84, 87};

    for (int i = 0; i<sizeof(arr)/sizeof(int); i++){
        cout << arr[i] << " ";
    }
}