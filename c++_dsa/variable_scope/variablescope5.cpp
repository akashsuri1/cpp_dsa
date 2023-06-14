#include<iostream>
using namespace std;
int main(){
   int b=4;
   cout<<b<<endl;
   if(true){
    int b=3;
    cout<<b<<endl;
    if(true){
        int b=7;
        cout<<b<<endl;
        if(true){
            int b=9;
            cout<<b<<endl;
            {
                cout<<b<<endl;
            }
        }
    }
   }
   cout<<b<<endl;
   //so this way we can create multiple local variable with same name as global
   //an variable can only be acessed in the block in which it is created thats it
   return 0;
}