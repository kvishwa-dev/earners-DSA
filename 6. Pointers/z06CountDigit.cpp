# include <iostream>
using namespace std;

void countDigits(int n, int* ptr){
    if (n==0) *ptr = 1;
    while(n!=0){
        n/=10;
        *ptr +=1;
    }
}

int main(){
    int n;
    int count = 0;
    cout << "Enter a number: ";
    cin >> n;
    countDigits(n, &count);
    cout << count << endl;
}