#include<iostream>
using namespace std;
int main(){
    // an for loop without intilaziation and updation
    int n;
    cout<<"enter the no to print tell it ";
    cin>>n;
    int i=1;
    for( ;i<=n;){
        cout<<i<<' ';
        if(i%10==0){
            cout<<endl;
        }
        i++;
    }
    return 0;
}
