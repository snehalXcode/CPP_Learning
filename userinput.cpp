#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    cin>>b;
   
    
    if(a>b){
        cout<<a<<" is greater than "<<b<<endl;
    }
    else if (b>a){
        cout<<b<<" is greater than "<<a<<endl;
    }
    else{
        cout<<"Both numbers are equal"<<endl;
    }
}
