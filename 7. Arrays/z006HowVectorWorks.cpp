# include <iostream>
# include <vector>
using namespace std;

int main(){
    vector <int> v; // Size - 0 Capacity - 0
    cout << v.size() << " " << v.capacity() << endl;
    v.push_back(1); // Size - 1 Capacity - 1
    cout << v.size() << " " << v.capacity() << endl;
    v.push_back(2); // Size - 2 Capacity - 2 
    cout << v.size() << " " << v.capacity() << endl;
    v.push_back(3); // Size - 3 Capacity - 4 (Capacity doubles when there is no space)
    cout << v.size() << " " << v.capacity() << endl;
    v.push_back(4); // Size - 4 Capacity - 4
    cout << v.size() << " " << v.capacity() << endl;
    v.push_back(5); // Size - 5 Capacity - 8
    cout << v.size() << " " << v.capacity() << endl;
    v.pop_back(); // Size - 4 Capacity - 8 (Capacity remains same on pop back)
    cout << v.size() << " " << v.capacity() << endl;
    v.pop_back(); // Size - 3 Capacity - 8
    cout << v.size() << " " << v.capacity() << endl;
    v.push_back(8); // Size - 4 Capacity - 8
    cout << v.size() << " " << v.capacity() << endl;

    for (int i = 0; i <v.size(); i++){
    cout << v[i] << " ";
    }
}