#include<iostream>
using namespace std;
// 1->prime no
// 0->not an prime no
bool isPrime(int num){
    //cannot acces 
    for(int i=2;i<num;i++){
        //divide hogaya not an prime no 
        if(num%i==0){
            return 0;
        }
    }
    //prime no
    return 1;
}
int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<" is prime no "<<endl;
    }else{
        cout<<" is not  an prime no "<<endl;
    }
    return 0;
}