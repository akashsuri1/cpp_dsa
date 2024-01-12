#include<iostream>
using namespace std;
int main(){
    char ch[6]="abcde";
    int arr[6]={1,2,3,4,5,6};
    int *ptr=&arr[0];
    char *cptr=&ch[1];
    cout<<"Integer array pointer : "<<ptr<<endl;
    cout<<"Character array pointer : "<<cptr<<endl;
    char single='z';
    char *dptr=&single;
    cout<<"Character pointer for single character : "<<dptr<<endl;
    return 0;
}