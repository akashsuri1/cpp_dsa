#include<iostream>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int nCr(int n ,int r){
    int num=fact(n)/fact(r);
    return num/fact(n-r);
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<"the answer is "<<nCr(n,r)<<endl;
    return 0; 
}
// here the main function calls the ncr function and ncr function calls the factorial function therefore then the answer is returned using the return statment then the answer return to the calling function which at last produce results