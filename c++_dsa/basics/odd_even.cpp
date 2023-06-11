#include<iostream>
using namespace std;
int main(){
    int no;
    cout<<"enter the no to check if odd or even ";
    cin>>no;
    if(no&1){
         cout<<no<<" is odd number"<<endl;
    }else{
         cout<<no<<" is even number"<<endl;
    }
    return 0;
}