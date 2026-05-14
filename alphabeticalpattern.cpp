#include<iostream>
using namespace std;

// int main(){
//     char ch ;
//     cin >> ch ;

    // Square pattern
    // for(char i = 'A';i<=ch ;i++){
    //     for (char j = 'A' ; j <= ch ; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
// }

    // 1 2 3 
    // 4 5 6
    // 7 8 9   continious number pattern 
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;   

    int m;
    cin >> m;   

    int num = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}
    
