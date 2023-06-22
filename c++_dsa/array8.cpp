#include<iostream>
using namespace std;
int main(){
      int fifth[15]={2,3};
      int fifthsize=sizeof(fifth)/sizeof(int);
      cout<<"the size of fifth is "<<fifthsize<<endl;
      int third[10]={1};
      int thirdsize=sizeof(third)/sizeof(int);
      //so using size of we could find the actual length of the array but if we have only 2 relevant elements in an large array an rest are garbage value we could never determine it by using the size of thus it is necesary to pass the size as parameter in the array
      cout<<"the size of third  is "<<thirdsize<<endl;
      return 0; 
}