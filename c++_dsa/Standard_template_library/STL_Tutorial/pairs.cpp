#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int> p1={3,5};
    cout<<p1.first<<" "<<p1.second<<endl;
    pair<int,pair<int,int>> p2={1,{3,5}};
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;
    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[1].second<<endl;
    return 0;
}
