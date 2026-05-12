#include<iostream>
using namespace std;

// Print number from 280 to 250 with the help of for loop.
// int main (){
//     for ( int i = 280 ; i >= 250;i--){
//     cout<<i<<endl;
//   }
//   return 0;
// }
// Print char from ‘A’ to ‘Z’ with the help of a for loop
// int main (){
//     for (char i = 'A' ; i <= 'Z' ; i++){    
//         cout<<i<<endl;
//   }
//   return 0;
// }
// Print char from ‘Z’ to ‘A’ with the help of a for loop.
// int main (){
//     for (char i = 'Z';i >='A'; i--){
//         cout<<i<<endl;
//     }
//     return 0;
// }
// There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.
// int main (){
//     for(int i = 220 ; i <=730 ; i = i+7){
//         cout<<i<<endl;
//     }
//     return 0;
// }
// Print Sum of square of first n natural number.
// int main (){
//     int n ;
//     cin >> n ;
//     int sum = 0 ;
//     for (int i = 1; i <=n ; i++){
//     sum = sum + (i*i) ; 
//     }
//     cout << sum << endl;
//     return 0;
// }
// Print Sum of cube of first n natural number
// int main (){
//     int n ;
//     cin >> n ;
//     int sum = 0 ;
//     for (int i = 1; i <=n ; i++){
//     sum = sum + (i*i*i) ; 
//     }
//     cout << sum << endl;
//     return 0;
// }
// Print n’th Fibonacci number.
int main (){
    int n ;
    cin >> n ;
    int a = 0 ;
    int b = 1 ;
    int c ;
    if (n == 1){
        cout<<a<<endl;
    }
    else if (n == 2){
        cout<<b<<endl;
    }
    else{
        for (int i = 3 ; i <= n ; i++){
            c = a + b ;
            a = b ;
            b = c ;
        }
        cout<<c<<endl;
    }
    
    return 0;
}
