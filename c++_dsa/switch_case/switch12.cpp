#include<iostream>
using namespace std;
int main(){
    int num=10;
    while(1){
       switch(num){
          case 14:cout<<"lets exit this while loop easily by the exit function"<<endl;
                  exit(0);
                  break;
          default:cout<<"lets terminate this program"<<endl;

       }
       num++;
}
 return 0; 
}