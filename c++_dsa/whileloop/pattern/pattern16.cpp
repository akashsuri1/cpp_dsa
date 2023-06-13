#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"please specify the size of the pattern you want ";
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            char a='A'+row+(col++)-2;
            cout<<a<<' ';
        }
        row++;
        cout<<endl;
    }
    return 0;
}