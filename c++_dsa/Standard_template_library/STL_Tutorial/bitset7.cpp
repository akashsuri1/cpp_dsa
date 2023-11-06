#include<bits/stdc++.h>
using namespace std;
int main(){
    bitset<5> bt;
    cin>>bt;
    bt.reset(2);
    cout<<"the second index is zero "<<bt<<endl;
    bt.reset();
    cout<<"its all zero yeah " <<bt<<endl;
    return 0;
}