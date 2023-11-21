#include<iostream>
using namespace std;
int waystoreach(int n){
    if(n==1 || n==2){
        return n;
    }
    return waystoreach(n-1)+waystoreach(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<waystoreach(n)<<endl;
    return 0;
}