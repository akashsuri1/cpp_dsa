#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of the pattern please ";
    cin>>size;
    int row=1;
    while(row<=size){
        int col=1;
        while(col<=size){
            char a='A'+col-1;
            cout<<a<<" ";
            col++;
        }
        row++;
        cout<<endl;
    }
    return 0;
}