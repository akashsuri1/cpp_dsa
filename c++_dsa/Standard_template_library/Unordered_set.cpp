#include<iostream>
#include<unordered_set>
using namespace std;
void print(unordered_set<int>& v){
    cout<<endl;
    for(unordered_set<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
void print_info(unordered_set<int>& v){
    cout<<"the size of the set "<<v.size()<<endl;
    cout<<"the maximum size of the set "<<v.max_size()<<endl;
    cout<<"is it empty "<<v.empty()<<endl;
}
int main(){
    unordered_set<int> set1;
    set1.insert(1);
    set1.insert(2);
    set1.insert(3);
    set1.insert(4);
    print(set1);
    cout<<endl;
    if(set1.count(1))
     cout<<"set1 1 is present"<<endl;
    if(set1.count(2))
     cout<<"set1 2 is present"<<endl;
    if(set1.count(3))
     cout<<"set1 3 is present"<<endl;
    if(set1.count(4))
     cout<<"set1 4 is present"<<endl;
    if(set1.count(5))
      cout<<"set1 4 is present"<<endl;
    unordered_set<int>::iterator it2;
    it2=set1.find(3);
    for(;it2!=set1.end();it2++){
        cout<<*it2<<" ";
    }
    cout<<endl;
    unordered_set<int>::iterator it3;
    it3=set1.find(5);
    if(it3==set1.end()){
        cout<<"5 is not found in the set "<<endl;
    }
    print_info(set1);
    set1.erase(set1.begin());
    print(set1);
    set1.erase(set1.begin(),set1.find(1));
    print(set1);
    print_info(set1);
    set1.clear();
    print_info(set1);
    return 0;
}
//$usually the O(1) case complexity is used for small processes and o(n) for else cases 