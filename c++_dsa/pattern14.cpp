#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the pattern ";
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        char a='A'+row-1;
        while(col<=row){
            cout<<a<<' ';
            col++;
        }
        row++;
        cout<<endl;
    }
    return 0;
}