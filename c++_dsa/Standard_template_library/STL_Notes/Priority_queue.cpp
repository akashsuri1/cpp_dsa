#include<iostream>
#include<queue>
#include<vector>
#include<string>
using namespace std;
//!function overloading
void print_queue(priority_queue<int> pq){
    cout<<endl;
    cout<<"The queue is "<<endl;
    while(!(pq.empty())){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}
void print_queue(priority_queue<string> pq){
    cout<<endl;
    cout<<"The queue is "<<endl;
    while(!(pq.empty())){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}
void print_queue(priority_queue<int,vector<int>,greater<int>> pq){
    cout<<endl;
    cout<<"The queue is "<<endl;
    while(!(pq.empty())){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}
void print_info(priority_queue<int>& pq){
    cout<<endl;
    cout<<"[ Size = "<<pq.size()<<" Empty = "<<pq.empty()<<" ] "<<endl;
    cout<<endl;
}
void print_info(priority_queue<string>& pq){
    cout<<endl;
    cout<<"[ Size = "<<pq.size()<<" Empty = "<<pq.empty()<<" ] "<<endl;
    cout<<endl;
}
void print_info(priority_queue<int,vector<int>,greater<int>>& pq){
    cout<<endl;
    cout<<"[ Size = "<<pq.size()<<" Empty = "<<pq.empty()<<" ] "<<endl;
    cout<<endl;
}

int main(){
    int arr[]={2,4,5,6,7,8,9,11};
    vector<int> v;
    int n;
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the no of elements required for queue ";
    cin>>n;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }
    //$ this is max heap first element is largest
    priority_queue<int> pq1(arr,arr+size);
    priority_queue<int> pq2(v.begin(),v.end());
    //$ this is min heap first element is smallest
    priority_queue<int,vector<int>,greater<int>> pq1_min(arr,arr+size); 
    priority_queue<int,vector<int>,greater<int>> pq2_min(v.begin(),v.end());
    //$ intialization by input
    priority_queue<int> pq3;
    priority_queue<int,vector<int>,greater<int>> pq3_min;
    cout<<"Enter the size of the heap  ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        pq3.push(temp);
        pq3_min.push(temp);
    }
    print_queue(pq1);
    print_queue(pq2);
    print_queue(pq3);
    print_queue(pq1_min);
    print_queue(pq2_min);
    print_queue(pq3_min);
    //$ string queue
    priority_queue<string> languages;
    cout<<"Enter the no of languages = "<<endl;
    cin>>n;
    cout<<"Enter the languages = "<<endl;
    cin.ignore();
    for(int i=0;i<n;i++){
        string a;
        getline(cin,a);
        languages.push(a);
    }
    //$ push example
    cout<<"Before push we have "<<endl;
    print_queue(languages);
    print_info(languages);
    languages.push("python");
    print_queue(languages);
    print_info(languages);
    //$ pop example
    cout<<"Before pop we have "<<endl;
    print_queue(pq3_min);
    print_info(pq3_min);
    pq3_min.pop();
    cout<<"After pop we have "<<endl;
    print_queue(pq3_min);
    print_info(pq3_min);
    //$ copied queue 
    priority_queue<int> pq4(pq1);
    cout<<"Copied queue "<<endl;
    print_queue(pq4);
    int pq_size=pq4.size();
    for(int i=0;i<pq_size;i++){
        pq4.pop();
    }
    //$ empty check
    cout<<"after pop checking empty "<<endl;
    print_info(pq4); 
    return 0;
}