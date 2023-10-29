#include<bits/stdc++.h>
using namespace std;
int main(){
    bitset<5> bt;
    cin>>bt;
    if(bt.any()){
        cout<<"atleast any one is set bit"<<endl;
    }else{
        cout<<"any of it is not one "<<endl;
    }
    return 0;
}