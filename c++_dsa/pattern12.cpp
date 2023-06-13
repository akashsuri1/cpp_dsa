#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the pattern ";
    cin>>n;
    int row=1;
    char a='A';
    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<(a++)<<" ";
            col++;
        }
        row++;
        cout<<endl;
    }
    return 0;
}