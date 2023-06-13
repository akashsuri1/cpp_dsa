#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"please help me specify the pattern size  ";
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n-row+1){
            cout<<'*';
            col++;
        }
        row++;
        cout<<endl;
    }
    return 0;
}