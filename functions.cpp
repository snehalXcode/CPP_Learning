#include<iostream>
using namespace std;

// : Find the cube of a number using Function. 
// int cube(int a){
//     return a*a*a;
// }

// int main(){
//     int a;
//     cin >> a;

//     cout << cube(a);
// }

//  Reverse a number n using Function, Constraints: -5000<=n<=5000
// int reverseNum(int n){
//     int rev = 0;
//     while(n != 0){
//         int digit = n % 10;
//         rev = rev * 10 + digit;
//         n = n / 10;
//     }
//     return rev;
// }
// int main(){

//     int n;
//     cin >> n;

//     cout << reverseNum(n);

//     return 0;
// }

// 3: There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.
// #include<iostream>
// using namespace std;

// void rotate(int &a, int &b, int &c){

//     int tempA = a;
//     int tempB = b;
//     int tempC = c;

//     b = tempA;
//     c = tempB;
//     a = tempC;
// }

// int main(){

//     int a, b, c;

//     cin >> a >> b >> c;

//     rotate(a, b, c);

//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
//     cout << "c = " << c << endl;

//     return 0;
// }

// Swap 2 numbers a, b without using extra variables. Range of -10000<=a,b<=100000. 
// void swap(int &a, int &b){
//     a = a + b;
//     b = a - b;
//     a = a - b;
// }
// int main(){

//     int a, b;

//     cin >> a >> b;

//     swap(a, b);

//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;

//     return 0;
// }

//  Print “Hello Coder Army” n times using Function.
// void printHello(int n){
//     for(int i = 0; i < n; i++){
//         cout << "Hello Coder Army" << endl;
//     }
// }
// int main(){

//     int n;
//     cin >> n;

//     printHello(n);

//     return 0;
// }

//  Given two numbers n, r. Find nCr (Combination). Use Function here.
