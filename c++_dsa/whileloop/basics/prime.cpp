#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number to check if its prime or not ";
    cin>>n;
    int i=2;
    int flag=1;
    while(i<n){
        if(n%i==0){
            cout<<"not prime"<<endl;
            flag=0;
            break;
        }
        i++;
    }
    if(flag){
        cout<<"prime "<<endl;
    }
    return 0;
}