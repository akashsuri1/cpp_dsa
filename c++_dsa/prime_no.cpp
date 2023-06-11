#include<iostream>
using namespace std;
int main(){
    int no;
    cin>>no;
    int flag=1;
    for(int i=2;i<no;i++){
        if(no%i==0){
           cout<<"Not prime"<<endl;
           flag=0;
           break;
        }
    }
    if(flag==1){
        cout<<"Prime"<<endl;
    }
    return 0;
}