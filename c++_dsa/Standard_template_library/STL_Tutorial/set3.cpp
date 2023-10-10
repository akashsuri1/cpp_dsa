#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s1={1,2,3,4,5};
    auto it =s1.find(2);
    if(it!=s1.end()){
        cout<<"2 is found "<<endl;
    }
    it=s1.find(9);
    if(it==s1.end()){
        cout<<"9 is not found"<<endl;
    }
    return 0;
}