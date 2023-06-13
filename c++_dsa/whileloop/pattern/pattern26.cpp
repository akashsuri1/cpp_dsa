#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the pattern ";
    cin>>n;
    int row=1;
    while(row<=n){
        int spaces=n-row;
        while(spaces--){
            cout<<' ';
        }
        int col=1;
        while(col<=row){
            cout<<(col++);
        }
        col=1;
        while(col<=row-1){
            cout<<row-col;
            col++;        
        }
        row++;
        cout<<endl;
    }
    return 0;
}