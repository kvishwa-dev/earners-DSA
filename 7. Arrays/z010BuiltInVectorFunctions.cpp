# include <iostream>
# include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector <int> v = {4, 3, 5, 8, 2};

    // reverse(v.begin(), v.end()); // Reverse the array
    // for (int ele : v){
    //     cout << ele << " ";
    // }  
    // cout << endl;

    reverse(v.begin() + 1, v.end()); // reverse with first position fixed
    for (int ele : v){
        cout << ele << " ";
    }  
    cout << endl;

    sort(v.begin(), v.end()); // Sort the array
    for (int ele : v){
        cout << ele << " ";
    }   
}