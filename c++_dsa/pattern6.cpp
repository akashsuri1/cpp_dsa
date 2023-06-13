#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the pattern ";
    cin>>n;
    int i=1;
    while(i<=n){
        int col=1;
        while(col<=i){
            cout<<'*';
            col++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}