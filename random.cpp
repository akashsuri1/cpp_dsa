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
    int no=set1.count(6);
    auto itr=set1.find(6);
    cout<<no<<endl;
    while(no--){
        itr++;
    }
    set1.erase(set1.find(6),itr);
    print_multiset(set1);
    return 0;    
}
//find first occurence
//count is used to count the no of occurence
//erase(key)->all occurence erase(iterator) erase(start,end)
//all in increasing order not unordered