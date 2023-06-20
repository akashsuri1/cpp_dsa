#include<iostream>
using namespace std;
//function signatures 
void printcoutning(int num){
    //function body
    for(int i=1;i<=num;i++){
        cout<<i<<' ';
        if(i%10==0){
            cout<<endl;
        }
    }
    return;
    //here return means only return the flow as here datatype of return is void which means nothing
}
int main(){
    int n;
    cin>>n;
    //function call
    printcoutning(n);
    return 0;
}