# include <iostream>
using namespace std;

void power(int base=1, int exponent=1){
    int ans = 1;
    for (int i=1; i<=exponent; i++){
        ans*=base;
    }
    cout << ans << endl;
}
int main(){
    power();
    power(5);
    power(5,2);

}