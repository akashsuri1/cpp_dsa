#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the natural number to print number till then ";
    cin>>n;
    int i=1;
    while(i<=n){
        cout<<i<<' ';
        if(i%10==0 && i!=0){
            cout<<endl;
        }
        i++;
    }
    return 0;
}
// so these way the loop is used to reduce the task by checking the same condition  again and again so we can use the same code block again