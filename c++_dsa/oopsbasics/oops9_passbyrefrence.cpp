#include<iostream>
using namespace std;
void update(int &a,int &b,int &sum){
    a++;
    b--;
    sum=a+b;
}
int main(){
  int a,b,sum;
  cin>>a>>b;
  update(a,b,sum);
  cout<<a<<" "<<b<<" "<<sum<<endl;
  return 0;
  //so this way we do the refrence game pass by refrence the real variable is passed 
}