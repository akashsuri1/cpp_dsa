#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"label the size of the pattern ";
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            char a='A'+n-1-row+(col++);
            cout<<a<<' ';
        }
        row++;
        cout<<endl;
    }
    return 0;
}