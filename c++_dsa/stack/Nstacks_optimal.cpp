#include <bits/stdc++.h> 
using namespace std;
class Node{
    public:
        int index=3;
        Node* next;
        Node(int data){
            this->index=data;
            next=nullptr;
        }
};
class NStack
{
public:
    int* arr;
    Node** Top;
    stack<int> st;
    NStack(int N, int S)
    {
        arr=new int[S];
        Top=new Node*[N];
        for(int i=0;i<N;i++){
             Top[i]=nullptr;
        }
        for(int i=0;i<S;i++){ 
            st.push(i);
        }
        
    }
    bool push(int x, int m)
    {
        if(st.empty()){
            return false;
        }
        else{
            arr[st.top()]=x;
            Node* newNode=new Node(st.top());
            newNode->next=Top[m-1];
            Top[m-1]=newNode;
            st.pop();
            return true;
        }
    }
    int pop(int m)
    {
        if(Top[m-1]==nullptr){
            return -1;
        }else{
            int element=arr[Top[m-1]->index];
            st.push(Top[m-1]->index);
            Top[m-1]=Top[m-1]->next;
            return element;
        }
    }
};
int main(){
    NStack nt(3,6);
    nt.push(1,2);
    nt.push(20,2);
    cout<<nt.pop(2)<<endl;
    return 0;
}