#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>& vec){
    for(auto it=vec.begin();it!=vec.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> vec={1,2,3,4,5};
    for(auto itr:vec){
        itr=itr+1;
    }
    print(vec);
    for(auto& itr:vec){
        itr=itr+1;
    }
    print(vec);
    return 0;
}