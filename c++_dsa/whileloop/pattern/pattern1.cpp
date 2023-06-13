#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows to print the pattern ";
    cin>>n;
    int i=0;
    while(i<n){
        int j=0;
        while(j<n){
            cout<<"* ";
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}