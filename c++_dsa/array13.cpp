#include<iostream>
using namespace std;
int main(){
    int num[100];
    int size;
    cin>>size;
    int sum=0;
    for(int i=0;i<size;i++){
        cin>>num[i];
        sum+=num[i];
    }
    cout<<"the sum is "<<sum<<endl;
    return 0;
}