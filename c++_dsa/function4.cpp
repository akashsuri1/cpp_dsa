#include<iostream>
using namespace std;
int power(){// function signature 
    //power function without parameter
    int a,b;
    cin>>a>>b;
    int ans=1;
    for(int i=1;i<=b;i++){
        ans*=a;
    }
    return ans;
}
// function paramter
int main(){
    int answer=power();
    cout<<"the answer is "<<answer<<endl;
    answer=power();
    cout<<"the answer is "<<answer<<endl;
    answer=power();
    cout<<"the answer is "<<answer<<endl;
    return 0;
}