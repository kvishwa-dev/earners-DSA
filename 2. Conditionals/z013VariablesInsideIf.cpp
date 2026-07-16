# include <iostream>
using namespace std;

int main(){
    // int x = 1;
    // if(x) cout << "True";
    // else cout << "False";

    // int a = 0;
    // if(a=1) cout << "True";
    // else cout << "False";

    // if ('w') cout << "True";
    // else cout << "False";

    // int x = 0;
    // if(x++) cout << x;
    // else cout << "False";

    // int x = 0;
    // if(++x) cout << x;
    // else cout << "False";

    // int x = 4, y = 6;
    // if(x++ || y++) cout << x << " " << y; // Short circuitting
    // else cout << "False";

    int x = 0, y = 6;
    if(x++ || y++) cout << x << " " << y;
    else cout << "False";


}