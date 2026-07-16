# include <iostream>
using namespace std;

int main() {
    // For Loop
    for (int i = 0; i<3; i++){ // initialization, condition & updation
        cout << "Hi, How are you?" << endl;
    }

    // While Loop
    int i = 0; // initialization
    while (i<3) // condition
    {
        cout << "Fine & you" << endl;
        i++; // updation
    }

    // Do While Loop
    int num = 1; // initialization
    do
    {
       cout << num << endl;
       num+=1; // updation
    } while (num <=3); // condition

    // in do while loop, condition is checked later therefore its code runs for at least one time.
}