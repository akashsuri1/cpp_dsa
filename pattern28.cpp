#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        // space print
        int spaces=n-row;
        while(spaces){
            cout<<" ";
            spaces=spaces-1;
        }
        // first trangle;
        int col=1;
        while(col<=row){
            cout<<col;
            col=col+1;
        }
        // second traingle
        int start=row-1;
        while(start){
            cout<<start;
            start=start-1;
        }
        cout<<endl;
        row=row+1;

    }
}