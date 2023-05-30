#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int stars=n-row+1;
        while(stars){
            cout<<"*";
            stars=stars-1;
        }
        cout<<endl;
        row=row+1;
    }
}