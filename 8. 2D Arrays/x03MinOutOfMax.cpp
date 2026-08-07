# include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[][4] = {{5,8,1,2}, {9,9,4,4}, {7,0,5,3}, {9,9,9,9}};
    int minEle = INT_MAX;

    for(int i = 0; i<4; i++){
        int maxEle = INT_MIN;
        for(int j=0; j<4; j++){
            if (arr[i][j]>maxEle) maxEle=arr[i][j];
        }
        if (maxEle<minEle) minEle=maxEle;
    }

    cout << minEle << endl;
}