# include <iostream>
using namespace std;

void fun(int x){
    cout << "Hi!" <<endl;
}
void fun(double x){
    cout << "Good Morning!" <<endl;
}
void fun(char x){
    cout << "How are you?" << endl;
}

int main(){
    fun(11);
    fun(5.3);
    fun('B');
}