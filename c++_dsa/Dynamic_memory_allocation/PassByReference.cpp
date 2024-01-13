#include<iostream>
using namespace std;
void update(int n){
    n++;
    cout<<"Copy created an different memory taken."<<endl;
}
void updateReference(int &n){
    n++;
    cout<<"Same memory but different name."<<endl;
}
int main(){
    int n;
    cin>>n;
    cout<<"Before : "<<n<<endl;
    update(n);
    cout<<"After : "<<n<<endl;
    cout<<"Before : "<<n<<endl;
    updateReference(n);
    cout<<"After : "<<n<<endl;


}