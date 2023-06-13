#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"the size of the pattern please specify ";
    cin>>n;
    int row=1;
    while(row<=n){
        int spaces=row-1;
        while(spaces--){
            cout<<' ';
        }
        int stars=n-row+1;
        while(stars--){
            cout<<"*";
        }
        row++;
        cout<<endl;
    }
    return 0;
}