#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int row=1;
    while(row<=n){
        // first numbers
        int col=1;
        while(col<=n-row+1){
            cout<<col;
            col=col+1;
        }
        // stars print
        int stars=2*row-2;
        while(stars){
            cout<<"*";
            stars=stars-1;
        }
        //numbers
        int start=n-row+1;
        while(start){
            cout<<start;
            start=start-1;
        }
        cout<<endl;
        row=row+1;


    }
}