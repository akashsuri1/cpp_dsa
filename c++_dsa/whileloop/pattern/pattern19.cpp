#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"please tell me the size of the pattern you want ";
    cin>>n;
    int row=1;
    while(row<=n){
        int spaces=1;
        while(spaces<=n-row){
            cout<<' ';
            spaces++;
        }
        int stars=1;
        while(stars<=row){
            cout<<"*";
            stars++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}