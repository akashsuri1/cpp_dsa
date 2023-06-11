#include<iostream>
using namespace std;
int main(){
    int no;
    cout<<"Enter the no ";
    cin>>no;
    int i=1,fact=1;
    while(i<=no){
        fact=fact*i;
        i++;
    }
    cout<<"the factorial of "<<no<<" is "<<fact<<endl;
    return 0;
}