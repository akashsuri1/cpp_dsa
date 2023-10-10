#include<bits/stdc++.h>
using namespace std;
void print_set(set<int>& s1){
    for(auto it=s1.begin();it!=s1.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
void print_set_easy(set<int>& s1){
    for(auto itr:s1){
        cout<<itr<<" ";
    }
    cout<<endl;
}
int main(){
    //sorted and unique log(n)
    set<int> s1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        s1.insert(temp);
    }
    print_set(s1);
    print_set_easy(s1);
    return 0;
}