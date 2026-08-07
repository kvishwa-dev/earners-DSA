# include <iostream>
# include <vector>
using namespace std;

void segregate(vector<int>& arr){
    int count0=0, count1=0;
    for (int i = 0; i < arr.size(); i++){
        if (arr[i]==0 ) count0+=1;
        else if (arr[i]==1 ) count1+=1;
    }
    for (int i = 0; i < arr.size(); i++){
        if (i <count0) arr[i]=0;
        else arr[i]=1; 
    }

}

int main(){
    vector <int> arr = {0,0,1,0,1,1,0,1,0,1};

    segregate(arr);

    for(int i = 0; i< arr.size(); i++){
        cout << arr[i] << " ";
    }
}