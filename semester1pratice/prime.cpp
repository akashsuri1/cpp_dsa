#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=2;
    bool flag=true;
    while(i<n){
        if(n%i==0){
            cout<<"not prime "<<endl;
            flag=false;
            break;
        }
        i=i+1;
    }
    if(flag){
        cout<<"prime"<<endl;
    }
    return 0;

}