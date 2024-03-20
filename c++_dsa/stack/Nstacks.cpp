#include<bits/stdc++.h>
using namespace std;
class NStack
{
public:
    // Initialize your data structure.
    int* arr;
    int* top;
    int noofstacks;
    int size;
    int length;
    NStack(int N, int S)
    {
        arr=new int(S);
        top=new int(N);
        this->size=S/N;
        noofstacks=N;
        length=S;
        for(int i=0;i<N;i++){
            top[i]=i*size-1;
        }

    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        if(x!=noofstacks){
            if(top[x-1]<x*size-1 ){
                top[x-1]++;
                arr[top[x-1]]=m;
                return true;
            }else{
                return false;
            }
        }else{
            if(top[x-1]<length-1){
                top[x-1]++;
                arr[top[x-1]]=m;
                return true;
            }else{
                return false;
            }
        }
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {   
        int element;
        if(top[m-1]<(m-1)*size){
            return -1;
        }else{
            int element=arr[top[m-1]];
            top[m-1]--;
            return element;
        }
        
    }
};
int main(){
    NStack st(4,8);
    cout<<st.push(1,15)<<endl;
    cout<<st.push(1,25)<<endl;
    cout<<st.push(2,15)<<endl;
    cout<<st.push(2,25)<<endl;
    cout<<st.push(3,15)<<endl;
    cout<<st.push(3,25)<<endl;
    cout<<st.push(4,15)<<endl;
    cout<<st.push(4,25)<<endl;
    cout<<st.push(2,40)<<endl;
    cout<<st.pop(1)<<endl;
    cout<<st.pop(2)<<endl;
    cout<<st.pop(3)<<endl;
    cout<<st.pop(4)<<endl;
    return 0;

}
//using division of array