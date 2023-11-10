#include<bits/stdc++.h>
using namespace std;
void print(int i){
    if(i<0){
        cout<<endl;
        return;
    }
    cout<<i<<" ";
    print(i-1);
}
int main(){
    int n;
    cin>>n;
    print(n);
    cout<<"One more time "<<endl;
    cin>>n;
    print(n);
    return 0;
}
