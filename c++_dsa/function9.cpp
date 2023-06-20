#include<iostream>
using namespace std;
int ap(int n){
    return 3*n+7;
}
int main(){
    int n;
    cin>>n;
    cout<<"the given nth term is "<<ap(n)<<endl;
    return 0;
}