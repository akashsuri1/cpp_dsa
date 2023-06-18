#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the intial amount"<<endl;
    cin>>num;
    cout<<"rs 100 notes "<<num/100<<endl;
    switch(num%100 == 0){
        case 0:num=num%100;
               cout<<"rs 50 notes "<<num/50<<endl;
               switch((num%50) ==0){
                       case 0:num=num%50;
                              cout<<"rs 20 notes "<<num/20<<endl;
                              switch((num%20)==0){
                                case 0:num=num%20;
                                       cout<<"rs 1 notes "<<num/1<<endl;
                                       break;
                              }
                              break;
               }
               break;
    }
    //lets see if this nested switch works
    return 0;
}