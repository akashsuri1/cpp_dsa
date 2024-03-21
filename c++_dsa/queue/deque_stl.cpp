#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(30);
    dq.push_front(40);
    cout<<"front : "<<dq.front()<<endl;
    cout<<"end : "<<dq.back()<<endl;
    dq.pop_back();
    dq.push_front(60);
    dq.push_back(70);
    dq.pop_front();
    for(auto itr=dq.begin() ;itr!=dq.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
    while(!dq.empty()){
        dq.pop_back();
    }
    if(dq.empty()){
        cout<<"size : "<<dq.size()<<endl;
        cout<<"The deque is empty"<<endl;
    }
    return 0;
}