#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the three sides of the traingle"<<endl;
    cout<<"Enter the A "<<endl;
    cin>>a;
    cout<<"Enter the B "<<endl;
    cin>>b;
    cout<<"Enter the c "<<endl;
    cin>>c;
    if(a+b>=c && b+c>=a && a+c>=b){
       cout<<"valid traingle"<<endl;
    }else{
       cout<<"Not an valid traingle"<<endl;
    }
    return 0;
}