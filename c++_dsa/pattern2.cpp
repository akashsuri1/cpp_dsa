#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the pattern ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i<<" ";
            j=j+1;
        }
        i=i+1;
        cout<<"\n";
    }
    return 0;
}
