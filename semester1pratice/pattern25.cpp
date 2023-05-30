#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int spaces=n-row;
        while(spaces){
            cout<<" ";
            spaces=spaces-1;
        }
        int col=1;
        while(col<=row){
            cout<<row;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}