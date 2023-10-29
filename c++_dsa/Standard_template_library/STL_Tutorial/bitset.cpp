#include<bits/stdc++.h>
using namespace std;
int main(){
    bitset<5> bt;
    cin>>bt;
    if(bt.all()){
        cout<<"All are set bit "<<endl;
    }else{
        cout<<"All are not one"<<endl;
    }
    cout<<bt.size()<<endl;
}