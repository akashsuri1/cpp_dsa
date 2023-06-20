#include<iostream>
using namespace std;
int f=3;
int power(int num,int num2){
    int ans=1;
    // cout<<f<<endl;
    for(int i=1;i<=num2;i++){
        ans*=num;
    }
    return ans;
    // these two dont need to have same value function parameters and and argument 
    //as well as the local variable of an function cannot be accessed outside its block we cannot acces a,b of main function here 
}
int main(){
    int a,b;
    // cout<<f<<endl; this is an global variable can be accessed anywhere
    cin>>a>>b;
    cout<<"the answer is "<<power(a,b)<<endl;
    int c,d;
    cin>>c>>d;
    cout<<"the answer is "<<power(c,d)<<endl;
    cin>>a>>b;
    cout<<"the answer is "<<power(a,b)<<endl;
    //this way we can write well structured code as well as 
}