#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the pattern ";
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n-row+1){
            cout<<(col)++;
        }
        int stars=2*(row-1);
        while(stars--){
            cout<<"*";
        }
        col=1;
        while(col<=n-row+1){
            cout<<n-col-row+2;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}