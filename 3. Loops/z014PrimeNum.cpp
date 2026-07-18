# include <iostream>
# include <cmath>
using namespace std;

int main() {
    
    int num, count=0;
    cout << "Enter a number: ";
    cin >> num;

    if (num==1){
        cout <<"Niether prime nor composite";
        return 0;
    }

    // for (int i=1; i<=num; i++){
    //     if (num%i==0) count++;
    // }

    // if (count >2) cout << "Composite Number";
    // else cout << "Prime Number";

    for (int i=1; i<=sqrt(num); i++){
        if (num%i==0) { 
            count++;
            if (i != num/i) count++;
        }
        if (count==3) break;
    }
    
    if (count >2) cout << "Composite Number";
    else cout << "Prime Number";

}