# include <iostream>
# include <vector>
using namespace std;

int main(){
    vector <int> arr(5); // vector declaration
    int n = arr.size(); // Size of array
    cout << n << endl;
    for (int i = 0; i <n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    vector <int> arr2(5, 7);
    for (int i = 0; i <arr2.size(); i++){
        cout << arr2[i] << " ";
    }
    arr2.push_back(8); // appending element to vector
    arr2.push_back(9);
    cout << endl;
    for (int i = 0; i <arr2.size(); i++){
        cout << arr2[i] << " ";
    }
    arr2.pop_back(); // removes an element from end
    cout << endl;
    for (int i = 0; i <arr2.size(); i++){
        cout << arr2[i] << " ";
    }
}