#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the pattern you want to print ";
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<(row+(col++)-1)<<' ';
        }
        row++;
        cout<<endl;
    }
    return 0;
}
