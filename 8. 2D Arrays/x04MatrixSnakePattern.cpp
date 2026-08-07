# include <iostream>
using namespace std;

int main(){
    int arr[][4] = {{5,8,1,2}, {9,3,4,7}, {7,0,5,3}, {9,7,8,5}};

    for(int i=0; i<4; i++){
        if (i%2==0){
            for (int j = 0; j<4; j++){
                cout << arr[i][j] << " ";
            }
        }
        else{
            for(int j = 3; j>=0; j--){
                cout << arr[i][j] << " ";
            }
        }
    }
}