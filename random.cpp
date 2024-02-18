#include<bits/stdc++.h>
using namespace std;
int main(){
    string ans="DBDCCDAEAD";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<10;j++){
            char c;
            cin>>c;
            cout<<c<<ans[i]<<endl;
            if(c==ans[i]){
                sum++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}