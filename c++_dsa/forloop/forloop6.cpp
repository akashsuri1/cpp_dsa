#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n to find sum tell then ";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        //sum=sum+i;
        sum+=i;
    }
    cout<<"the final sum is "<<sum<<endl;
    return 0;
}