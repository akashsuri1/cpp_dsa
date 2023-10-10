#include<bits/stdc++.h>
using namespace std;
void print_set(set<int>& s1){
    for(auto it=s1.begin();it!=s1.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    set<int> s={1,2,3,4,5,6};
    s.erase(s.begin());
    //erase(iterator)
    print_set(s);
    //copying the entire other set
    set<int> s1(s.begin(),s.end());
    //deleting erase(start iterator ,end iterator) [)
    s1.erase(s1.begin(),s1.find(5));
    print_set(s1);
    //erasing an key
    s.erase(5);
    print_set(s);
    return 0;
}