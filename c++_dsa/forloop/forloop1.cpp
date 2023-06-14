#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n to print tell then ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<' ';
        if(i%10==0){
            cout<<endl;
        }
    }
    return 0;
}