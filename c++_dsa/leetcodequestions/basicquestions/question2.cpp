#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"lets find out the no of the hamming bits ";
    cin>>n;
    int count=0;
    while(n){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout<<"the no of hamming bits is "<<count<<endl;
    return 0;
}