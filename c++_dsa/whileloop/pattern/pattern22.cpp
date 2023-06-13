#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the pattern ";
    cin>>n;
    int row=1;
    while(row<=n){
        int spaces=row-1;
        while(spaces--){
            cout<<' ';
        }
        int col=1;
        while(col<=n-row+1){
            cout<<row;
            col++;
        }
        row++;
        cout<<endl;
    }
    return 0;
}