# include <iostream>
# include <vector>
using namespace std;

void mergeSortedArray(vector<int> a, vector<int> b){
    int n = a.size(), m = b.size();
    int k = 0;
    int i = 0, j = 0;
    vector <int> c = {};
    for(; i<n and j<m; k++){
        c.push_back(min(a[i], b[j]));
        if (a[i]<b[j]){
            i++;
        } else {
            j++;
        }
    }
    while(i<n){
        c.push_back(a[i]);
        i++; k++;
    }
    while(j<m){
        c.push_back(b[j]);
        j++; k++;
    }

    for (int x = 0; x<c.size(); x++){
        cout << c[x] << " ";
    }
}

int main(){
    vector <int> a = {10, 20, 40, 70, 90, 100};
    vector <int> b = {30, 50, 60, 80};

    mergeSortedArray(a, b);
}