# include <iostream>
using namespace std;

int main(){
    // int arr[2][4];
    // int arr[][4] = {{5,8,1,2}, {9,9,4,4}, {7,0,5,3}};
    int arr[][4] = {{5,8,1,2}, {9,9,4,4}};

    // for(int i = 0; i<2; i++){
    //     for(int j=0; j<4; j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // Printing transpose of matrix
    for(int j = 0; j<4; j++){
        for(int i=0; i<2; i++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}