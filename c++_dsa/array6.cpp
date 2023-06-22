#include<iostream>
using namespace std;
int main(){
    int marks[30];
    fill_n(marks,30,20);
    // the entire array is filed with 20 fill_n function is used for the same    
    int n=30;
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<marks[i]<<' ';
    }
    cout<<endl;
    return 0;
}