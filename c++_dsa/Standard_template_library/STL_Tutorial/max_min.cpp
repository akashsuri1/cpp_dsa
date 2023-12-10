#include<bits/stdc++.h>
using namespace std;
bool comp(int a,int b){
    //it should tell if first is less than second
    if(a<b){
        return true;
    }else{
        return false;
    }
}
int main(){
    int r1,r2;
    cin>>r1>>r2;
    cout<<max(r1,r2,comp)<<endl;
    cout<<min(r1,r2,comp)<<endl;
    return 0;
}