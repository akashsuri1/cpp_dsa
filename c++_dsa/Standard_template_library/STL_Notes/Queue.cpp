#include<iostream>
#include<queue>
#include<string>
using namespace std;
//$ this is because we do pass by value here so no change in real queue
//$ also the function overloading is also used
void print_queue(queue<int> queue1){
    cout<<endl;
    cout<<"The queue is ";
    for(;!(queue1.empty());){
        cout<<queue1.front()<<" ";
        queue1.pop();
    }
    cout<<endl;
}
void print_queue(queue<string> queue1){
    cout<<endl;
    cout<<"The queue is ";
    for(;!(queue1.empty());){
        cout<<queue1.front()<<" ";
        queue1.pop();
    }
    cout<<endl;
}
void print_info(queue<int>& queue1){
    cout<<endl;
    cout<<"[ size = "<<queue1.size()<<" empty = "<<queue1.empty()<<" ] "<<endl;
    cout<<endl;
}
void print_info(queue<string>& queue1){
    cout<<endl;
    cout<<"[ size = "<<queue1.size()<<" empty = "<<queue1.empty()<<" ] "<<endl;
    cout<<endl;
}
void print_front(queue<string>& queue1){
    cout<<endl;
    cout<<"Front : "<<queue1.front()<<endl;
    cout<<"Back : "<<queue1.back()<<endl;
    cout<<endl;
}
void print_front(queue<int>& queue1){
    cout<<endl;
    cout<<"Front : "<<queue1.front()<<endl;
    cout<<"Back : "<<queue1.back()<<endl;
    cout<<endl;
}
int main(){
    int n;
    queue<int> q1;
    cout<<"Enter the no of item\'s in queue ";
    cin>>n;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        q1.push(temp); 
    }
    cout<<"Before push we have "<<endl;
    print_queue(q1);
    print_info(q1);
    print_front(q1);
    q1.push(5);
    q1.push(6);
    q1.push(7);
    cout<<"After push we have "<<endl;
    print_queue(q1);
    print_info(q1);
    print_front(q1);
    int queue_size=q1.size();
    for(int i=0;i<queue_size/2;i++){
        q1.pop();
        print_front(q1);
    }
    cout<<"After pop we have "<<endl;
    print_queue(q1);
    print_info(q1);
    print_front(q1);
    queue<string> q2;
    string a;
    cout<<"enter the no of elements in language queue ";
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin,a);
        q2.push(a);
    }
    cout<<"Before pop we have"<<endl;
    print_queue(q2);
    print_info(q2);
    print_front(q2);
    queue_size=q2.size();
    for(int i=0;i<queue_size/2;i++){
        q2.pop();
        print_front(q2);
    }
    cout<<"After pop we have"<<endl;
    print_queue(q2);
    print_info(q2);
    print_front(q2);
    queue_size=q2.size();
    for(int i=0;i<queue_size;i++){
         q2.pop();
    }
    print_info(q2);
    return 0;
}