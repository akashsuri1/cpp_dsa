#include<bits/stdc++.h>
using namespace std;
void print_multiset(multiset<int> set1){
    for(auto itr=set1.begin();itr!=set1.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
}
int main(){
    
    multiset<int> set1={1,1,2,2,2,3,3,3,3,4,4,5,5,5,6,6};
    print_multiset(set1);
    cout<<set1.count(6)<<endl;
    return 0;    
}