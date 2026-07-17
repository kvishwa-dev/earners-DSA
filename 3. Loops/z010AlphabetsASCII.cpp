# include <iostream>
using namespace std;

int main() {
    char ch = 'A';

    for (int i = 1; i <=26; i++){
        cout << ch << " - " << (int) ch <<endl;
        ch+=1;
    }

    char ch1 = 'a';
    for (int i = 1; i <=26; i++){
        cout << ch1 << " - " << (int) ch1 <<endl;
        ch1+=1;
    }
}