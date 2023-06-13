#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"the size of the pattern you want to print ";
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        char a='A'+row-1;
        while(col<=n){
            cout<<a<<' ';
            col++;
        }
        row++;
        cout<<endl;
    }
    return 0;
}