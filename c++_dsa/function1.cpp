#include<iostream>
using namespace std;
int main(){
    //power(a,b)
    int a,b;
    cin>>a>>b;
    int ans=1;
    for(int i=1;i<=b;i++){
        ans*=a;
    }
    cout<<"The answer is "<<ans<<endl;
    //let do again
    int c,d;
    cin>>c>>d;
    ans=1;
    for(int j=1;j<=d;j++){
        ans*=c;
    }
    cout<<"The answer is "<<ans<<endl;
    //one time more
    int e,f;
    cin>>e>>f;
    ans=1;
    for(int j=1;j<=f;j++){
        ans*=e;
    }
    cout<<"The answer is "<<ans<<endl;
    return 0;
    /*so this way if we want to do something agion and again we use the same code 
    this make our code bulky ,buggy ,not readible
    using functions we can eliminate this by using some code again and again by putting it in function block making code reusable as well as readible */
}