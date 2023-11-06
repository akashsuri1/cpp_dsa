#include<bits/stdc++.h>
using namespace std;
int main(){
    bitset<5> bt;
    cin>> bt;
    if(bt.test(1)){
        cout<<"the first index is one"<<endl;
    }
    if(!bt.test(3)){
        cout<<"the third index is not one"<<endl;
    }
    return 0;
}