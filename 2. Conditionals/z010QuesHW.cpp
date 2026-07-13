# include <iostream>
using namespace std;

int main(){
    int x,y;
    cout << "Enter coordinates of the point (x,y): ";
    cin >> x >> y;

    if (x==0 and y==0){
        cout << "(" << x <<", " << y <<") lies on the origin";
    }
    else if (x==0){
        cout << "(" << x <<", " << y <<") lies on the y-axis";
    }
    else if (y==0){
        cout << "(" << x <<", " << y <<") lies on the x-axis";
    }
    else if (x>0 and y>0){
        cout << "(" << x <<", " << y <<") lies in the 1st Quadrant";
    }
    else if (x>0){
        cout << "(" << x <<", " << y <<") lies in the 4th Quadrant";
    }
    else if (y>0){
        cout << "(" << x <<", " << y <<") lies in the 2nd Quadrant";
    }
    else {
        cout << "(" << x <<", " << y <<") lies in the 3rd Quadrant";
    }
}