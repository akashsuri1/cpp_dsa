#include<iostream>
using namespace std;
int main(){
    //we can intialize the entire array to zero in this case by this notation use
    int third[15]={0};
    int n=15;
    cout<<"printing the array"<<endl;
    for(int i=0;i<n;i++){
        cout<<third[i]<<' ';
    }
    cout<<endl;
    int fourth[10]={1};
    n=10;
    //but in this case entire array is not intialized to one only it first value is intialized to one and rest zero in this case 
    cout<<"printing the array"<<endl;
    for(int i=0;i<n;i++){
        cout<<fourth[i]<<' ';
    }
    cout<<endl;
    cout<<"the code is working fine "<<endl;
    return 0;
}