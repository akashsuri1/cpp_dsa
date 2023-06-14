#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no you want to print tell ";
    cin>>n;
    int i=1;
    for(;;){
        if(i>n){
            break;
            // get us out from the current loop if the break statment is executed
        }
        cout<<i<<' ';
        if(i%10==0){
            cout<<endl;
        }
        i++;
    }
    return 0;
}