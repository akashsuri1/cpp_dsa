#include<bits/stdc++.h>
using namespace std;
void print_vector(vector<pair<int,int>> vec){
    for(auto itr:vec) cout<<"[ "<<itr.first<<" , "<<itr.second<<" ]  ";
    cout<<endl;
}
bool comp(pair<int,int> p1,pair<int,int> p2){
    if(p1.first<p2.first){
        return true;
    }else if(p1.first==p2.first){
        if(p1.second>=p2.second){
            return true;
        }else{
            return false;
        }
    }
    return false;
}
int main(){
    vector<pair<int,int>> vec={{1,3},{3,5},{3,9},{5,1}};
    sort(vec.begin(),vec.end(),comp);
    print_vector(vec);
    return 0;     
}