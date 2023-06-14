#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no to check if its not prime ";
    cin>>n;
    int isprime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"not an prime number "<<endl;
            isprime=0;
            break;
            // break's get us out from the current for loop 
        }
    }
    if(isprime){
        cout<<"the no is an prime number "<<endl;
    }
    return 0;
}