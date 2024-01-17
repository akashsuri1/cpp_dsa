#include<iostream>
using namespace std;
inline int getMax(int a,int b){
    return (a>b)?(a):(b);
}
int main(){
    int a,b;
    cout<<"The two number\'s are : ";
    cin>>a>>b;
    int ans=getMax(a,b);
    cout<<"The answer is : "<<ans<<endl;
    a=a*3;
    b+=10;
    ans=getMax(a,b);
    cout<<"The answer is : "<<ans<<endl;
    return 0;
}