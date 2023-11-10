#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void print(){
    if(cnt==5){
        cout<<endl;
        cnt=0;
        return;
    }
    cout<<cnt<<" ";
    cnt++;
    print();
}
int main(){
    print();
    print();
    return 0;
}