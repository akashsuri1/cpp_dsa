#include<iostream>
using namespace std;
class A{
    public:
        int add(int a,int b){
            return a+b;
        }
        double add(double a,double b){
            return a+b;
        }
        //function overloading with different type of argument 
};
int main(){
      A obj;
      cout<<obj.add(5,10)<<endl;
      cout<<(double)obj.add(10.32222,15.433)<<endl;
      return 0;
}
//so basically we need to change these function arguments to achieve function overloading