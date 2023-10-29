#include<bits/stdc++.h>
using namespace std;
int main(){
    bitset<5> bt;
    cin>>bt;
    bt.set();
    cout<<"YES now it\'s all one "<<bt<<endl;
    bt.set(2,0);
    cout<<"The second index is zero now "<<bt<<endl;
    return 0;
}