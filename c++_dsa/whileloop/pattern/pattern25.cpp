#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of the pattern you desire ";
    cin>>size;
    int row=1;
    int count=1;
    while(row<=size){
       int spaces=size-row;
       while(spaces--){
            cout<<' ';
       }
       int col=1;
       while((col++)<=row){
            cout<<(count++)<<' ';
       }
       row++;
       cout<<endl;
    }
    return 0;
}