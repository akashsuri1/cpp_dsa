#include<iostream>
using namespace std;
int main(){
    int a=5,b=3;
    int sum=a+b;
    cout<<"sum is "<<sum<<endl;
    int diff=a-b;
    cout<<"diff is "<<diff<<endl;
    int prd=a*b;
    cout<<"product is "<<prd<<endl;
    int div=a/b;
    cout<<"division is but here only intger part is displayed "<<div<<endl;
    float div_2=a*1.0/b;
    cout<<"here is the complete answer as here float/int gives answer as float "<<div_2<<endl;
    int odiv=a*1.0/b;
    cout<<"here still only the integer part is displayed due to typecasting of the answer "<<odiv<<endl;
    return 0;
}