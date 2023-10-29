#include<bits/stdc++.h>
using namespace std;
int main(){
    bitset<5> bt;
    cin>>bt;
    if(bt.none()){
        cout<<"yeah none of it is one"<<endl;
    }else{
        cout<<"no it contain\'s one "<<endl;
    }
    return 0;
}