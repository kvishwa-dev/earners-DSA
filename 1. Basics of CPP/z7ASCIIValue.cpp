# include <iostream>
using namespace std;

int main(){
    // 'A' - 65, 'B' - 66, ..., 'Z' - 90
    // 'a' - 97, 'a' - 98, ..., 'z' - 122
    // '0' - 48, '1' - 49, '2' - 50, ..., '9' - 57

    char x = 'A';
    cout << x << endl;
    cout << (int) x << endl; // explicit typecasting

    char x1 = 'A';
    int ascii = x1; // implicit typecasting
    cout << x1 << endl; 
    cout << ascii << endl; 

    char y = 'a';
    cout << y << endl;
    cout << (int) y << endl;

    char z = '0';
    cout << z << endl;
    cout << (int) z << endl;
}