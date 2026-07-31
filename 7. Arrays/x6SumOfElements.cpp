# include <iostream>
using namespace std;

int main(){
    int arr[] = {74, 96, 91, 57, 62};
    int n = sizeof(arr)/sizeof(int), sum = 0;
    for (int i = 0; i < n; i++){
        sum+=arr[i];
    }
    cout << sum << endl;
}