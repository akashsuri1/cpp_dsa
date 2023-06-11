#include<iostream>
using namespace std;
int main(){
    int no;
    cout<<"the number you want to find sum ";
    cin>>no;
    int sum=0,i=1;
    while(i<=no){
        sum+=i;
        i++;
    }
    cout<<"The sum of "<<no<<" natural number is "<<sum<<endl;
    return 0;

}