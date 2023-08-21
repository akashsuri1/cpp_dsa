#include<iostream>
#include<set>
#include<vector>
using namespace std;
void Print_set_reverse(set<int>& set1){
    set<int>::reverse_iterator itr=set1.rbegin();
    cout<<endl;
    for(;itr!=set1.rend();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
}
void Print_set(set<int>& set1){
    set<int>::iterator itr=set1.begin();
    cout<<endl;
    for(;itr!=set1.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
}
void Print_set_rev(set<int>& set1){
    set<int>::iterator itr=set1.end();
    itr--;
    cout<<endl;
    set<int>::iterator itr2=set1.begin();
    itr2--;
    for(;itr!=itr2;itr--){
        cout<<*itr<<" ";
    }
    cout<<endl;
}
void print_info(set<int>& set1){
    cout<<endl;
    cout<<"[ size= "<<set1.size()<<",empty = "<<set1.empty()<<" Max size = "<<set1.max_size()<<" ] "<<endl;
    cout<<endl;
}
int main(){
    set<int> set1({1,2,3,4,5,6,7});
    int arr[]={1,2,3,2,4,6,5,7,7};
    set<int> set2(arr,arr+sizeof(arr)/sizeof(arr[0]));
    vector<int> v1;
    int n;
    cin>>n;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        v1.push_back(temp);
    }
    set<int> set3(v1.begin(),v1.end());
    set<int> set4(set1);
    set<int> set5;
    cout<<"input the size of the set ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        set5.insert(temp);
    }
    Print_set_reverse(set1);
    Print_set(set2);
    Print_set_rev(set3);
    Print_set(set4);
    Print_set(set5);
    if(set1.count(1)){
        cout<<"1 is present "<<endl;
    }
    if(set1.count(7)){
        cout<<"7 is present "<<endl;
    }
    if(!set1.count(0)){
        cout<<"o is not present"<<endl;
    }
    if(set2.find(10)==set2.end()){
        cout<<"find also works here"<<endl;
    }
    cout<<"Before erase we have = ";
    Print_set(set1);
    print_info(set1);
    set1.erase(set1.begin(),set1.find(3));
    cout<<"After erase we have = ";
    Print_set(set1);
    print_info(set1);
    set1.erase(set1.begin(),set1.find(6));
    cout<<"After another erase we have = ";
    Print_set(set1);
    print_info(set1);
    cout<<"Before clear we have = ";
    print_info(set4);
    set4.clear();
    cout<<"After clear we have = ";
    print_info(set4);
    return 0;
}
