#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> qt;
    qt.push(11);
    cout<<"The size of queue is : "<<qt.size()<<endl;
    qt.push(15);
    qt.push(19);
    cout<<"The size of queue is : "<<qt.size()<<endl;
    cout<<"The front of queue is : "<<qt.front()<<endl;
    qt.pop();
    qt.pop();
    qt.pop();
    if(qt.empty()){
        cout<<"It is empty"<<endl;
    }else{
        cout<<"It is not empty"<<endl;
    }
    return 0;
}