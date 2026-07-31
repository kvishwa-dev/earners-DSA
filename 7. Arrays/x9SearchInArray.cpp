# include <iostream>
using namespace std;

int main(){
    int arr[] = {5, 67, 89, 90, 76, 56, 47, 82, 78}, num;
    cout << "Enter number to search in Array: ";
    cin >> num;
    int size = sizeof(arr)/sizeof(int);
    bool flag = false;

    for (int  i = 0; i < size; i++){
        if (arr[i] == num) {
            cout << "Found!" << endl;
            flag = true;
            break;
        }
    }
    if (flag == false) cout << "Not Found!";

}