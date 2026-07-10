# include <iostream>
using namespace std;

int main(){
    char ch = 'a';
    cout << (int) ch << endl;

    int x = 74;
    cout << (char) x << endl;

    char ch1 = 'A';
    char ch2 = 'a';
    cout << ch1 << endl;
    cout << ch2 << endl;
    cout << ch1 + ch2 << endl; // implicit typecasting into int.

    cout << 'a' + 1 << endl;
    cout << (char)('a' + 1) << endl;
    
}