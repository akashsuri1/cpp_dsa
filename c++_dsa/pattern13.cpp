#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the pattern ";
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            char a='A'+row+(col++)-2;
            cout<<a<<" ";
        }
        row++;
        cout<<endl;
    }
    return 0;
}