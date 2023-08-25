#include<iostream>
#include<list>
#include<vector>
using namespace std;
void print_list(list<int>& li){
    cout<<endl;
    cout<<"The list is : "<<endl;
    for(auto it=li.begin();it!=li.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
void print_list_rev(list<int>& li2){
    cout<<endl;
    cout<<"The list is "<<endl;
    list<int>::iterator it=li2.end();
    it--;
    list<int>::iterator it2=li2.begin();
    it2--;
    for(;it!=it2;it--){
        cout<<*it<<" ";
    }
    cout<<endl;
}
void print_info(list<int>& li2){
    cout<<"The info is "<<endl;
    cout<<"Empty = "<<li2.empty()<<endl;
    cout<<"size = "<<li2.size()<<endl;
    cout<<endl;
}
void print_front(list<int>& li2){
    cout<<"The info is "<<endl;
    cout<<"Front = "<<li2.front()<<endl;
    cout<<"Back = "<<li2.back()<<endl;
    cout<<endl;
}
void print_all(list<int>& li3){
    print_list(li3);
    print_info(li3);
    print_front(li3);
}
int main(){
    int n,temp;
    list<int> l1{1,2,3,4,5};
    list<int> l2(5,100);
    cout<<"Enter the size of the list : "<<endl;
    cin>>n;
    list<int> l3,l4;
    for(int i=0;i<n;i++){
        cin>>temp;
        l3.push_back(temp);
        l4.push_front(temp);
    }
    int arr[]={6,7,8,9,3,4,5};
    list<int> l5(arr,arr+(sizeof(arr)/sizeof(arr[0])));
    vector<int> v;
    cout<<"Enter the size of the vector "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }
    list<int> l6(v.begin(),v.end());
    print_list(l1);
    print_list(l2);
    print_list_rev(l3);
    print_list(l4);
    print_list(l5);
    print_list(l6);
    cout<<"Before push front"<<endl;
    print_all(l6);
    l6.push_front(20);
    cout<<"After push we have"<<endl;
    print_all(l6);
    cout<<"Before push back"<<endl;
    print_all(l6);
    l6.push_back(29);
    cout<<"After push back"<<endl;
    print_all(l6);
    cout<<"Before pop back"<<endl;
    print_all(l1);
    l1.pop_back();
    cout<<"After pop back we have"<<endl;
    print_all(l1);
    cout<<"Before pop front"<<endl;
    print_all(l1);
    l1.pop_front();
    cout<<"After pop front"<<endl;
    print_all(l1);
    cout<<"Before erase we have "<<endl;
    l1.erase(l1.begin());
    print_all(l1);
    auto itr=l1.begin();
    itr++;
    itr++;
    l1.erase(l1.begin(),itr);
    print_all(l1);
    cout<<"Before sort we have "<<endl;
    print_all(l5);
    l5.sort();
    print_all(l5);
    l6.sort();
    print_all(l6);
    cout<<"Before reverse we have "<<endl;
    print_all(l4);
    l4.reverse();
    print_all(l4);
    l5.insert(l5.begin(),300);
    l5.insert(l5.begin(),5,100);
    print_all(l5);
    auto it=l6.begin();
    it++;
    it++; 
    l6.insert(it,v.begin(),v.end());
    print_all(l6);
    cout<<"Before clear"<<endl;
    print_info(l1);
    l1.clear();
    print_info(l1);
    return 0;
}