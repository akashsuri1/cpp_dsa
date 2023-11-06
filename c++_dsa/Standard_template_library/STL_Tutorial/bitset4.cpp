#include<bits/stdc++.h>
using namespace std;
int main(){
    bitset<5> bt;
    cin>>bt;
    bt.flip();
    cout<<"After the flip of all bits "<<bt<<endl;
    bt.flip(2);
    cout<<"After the flip of second index "<<bt<<endl;
    return 0;
}