# include <iostream>
# include <vector>
using namespace std;

void change(vector <int>& v){ // & makes it pass by reference
    v[0] = 20;
}
void change1(vector <int> v){ // pass by value
    v[1] = 20;
}

int main(){
    vector <int> v = {4, 3, 8, 2, 9, 7};
    change(v); // pass by value
    change1(v);

    cout << v[0] << endl;
    cout << v[1] << endl;
}