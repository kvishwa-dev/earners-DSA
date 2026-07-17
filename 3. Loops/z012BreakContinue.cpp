# include <iostream>
using namespace std;

int main() {
    
    for (int i = 1; i<=10; i++){
        if (i%2==0) continue; // skip the particular iteration
        if (i%9==0) break; // breaks the loop 
        cout << i << " ";
    }

}