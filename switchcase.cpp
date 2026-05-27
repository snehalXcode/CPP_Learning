#include<iostream>
using namespace std;

int main (){
    int n ;
    cin >> n ;
    switch (n) {
        case 1:
            cout << "one" << endl;
            break;
        case 2:
            cout << "two" << endl;
            break;
        case 3:
            cout << "three" << endl;
            break;
        case 4:
            cout << "four" << endl;
            break;
        case 5:
            cout << "five" << endl;
            break;
        default:
            cout << "invalid input" << endl;
    }
}