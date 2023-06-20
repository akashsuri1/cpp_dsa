#include<iostream>
using namespace std;
//this is function signatue
/*
return_type functionname(input parameters){
    //logic
    return ans of same type as specified
}
    function name should be very specific to the operation it performs 
*/
int power(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans*=a;
    }
    return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    int answer=power(a,b);
    //function returned value is stored in answer to return the flow
    cout<<"the answer is "<<answer<<endl;
    return 0;
}