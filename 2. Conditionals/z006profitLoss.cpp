#include <iostream>
using namespace std;

int main(){
    int cp, sp;
    cout << "Enter cost price: ";
    cin >> cp;
    cout << "Enter Selling Price: ";
    cin >> sp;

    if (sp > cp) {
        cout << "Profit made" << endl;
        cout << "Profit: " << sp-cp << endl;
    } else if (cp > sp) {
        cout << "Loss incurred" << endl;
        cout << "Loss: " << cp-sp << endl;
    } else {
        cout << "No Profit, No Loss!";
    }
}