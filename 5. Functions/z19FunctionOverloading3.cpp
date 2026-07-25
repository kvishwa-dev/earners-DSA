# include <iostream>
using namespace std;

void fun(int x, char y){
    cout << "Hi!" <<endl;
}
void fun(char y, int x){
    cout << "Good Morning!" <<endl;
}

int main(){
    fun(11, 'A');
    fun('a', 12);
}