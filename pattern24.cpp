#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int spaces=row-1;
        while(spaces){
            cout<<" ";
            spaces=spaces-1;
        }
        int num=n-row+1;
        while(num){
            cout<<row;
            num=num-1;
        }
        cout<<endl;
        row=row+1;
    }
}