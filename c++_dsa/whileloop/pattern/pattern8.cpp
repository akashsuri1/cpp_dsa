#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"the size of the pattern you want ";
    cin>>n;
    int count=1;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<(count++)<<' '; //this way we combined the printing an increment 
            col++;
        }
        row++;
        cout<<endl;
    }
    return 0;
}