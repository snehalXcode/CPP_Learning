#include<iostream>
using namespace std;    

int main(){
    int n ;
    cin >> n ;
    int rem;
    int ans = 0 ;
    int mul = 1;

    while (n > 0) {
        rem = n % 2 ;
        n = n / 2 ;
        ans = ans + rem * mul ;
        mul = mul * 10 ;
       
    }
    cout << ans << endl;
}