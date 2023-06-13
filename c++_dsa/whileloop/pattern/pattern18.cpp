#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"help me decide the size of the pattern  ";
    cin>>n;
    int row=1;
    while(row<=n){
        char a='A'+row-1;
        int col=1;
        while(col<=n){
            cout<<a<<' ';
            a=a+1;
            col++;
        }
        row++;
        cout<<endl;
    }
    return 0;
}