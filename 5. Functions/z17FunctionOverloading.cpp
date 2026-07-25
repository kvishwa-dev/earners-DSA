# include <iostream>
using namespace std;

void fun(){
    cout << "Hi!" <<endl;
}
void fun(int n){
    cout << "Good Morning!" <<endl;
}

// THIS WILL GIVE ERROR DUE TO DEFAULT PARAMETER
// void fun(int n = 6){
//     cout << "Good Morning!" <<endl;
// }

int main(){
    fun();
    fun(11);
}