#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"please specify the size of your pattern ";
    cin>>n;
    int row=1;
    while(row<=n){
        char start='A'+n-row;
        int col=1;
        while(col<=row){
            cout<<start<<' ';
            start++;
            col++;
        }
        row++;
        cout<<endl;
    }
    return 0;
}