#include<iostream>
using namespace std;
int main(){
    //for loop without intilaziation
    int n;
    cout<<"enter the no to print tell it ";
    cin>>n;
    int i=1;
    for(;i<=n;i++){
        cout<<i<<' ';
        if(i%10==0){
            cout<<endl;
        }
    }
    return 0;
}