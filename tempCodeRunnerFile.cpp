int main (){
    int n;
    cin >> n;
    int m;
    cin >> m ;
    int num = 1 ;

    for (int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0 ;
}
    