#include<bits/stdc++.h>
using namespace std;
map<int,string> mpp={
    {0,"zero"},
    {1,"one"},
    {2,"two"},
    {3,"three"},
    {4,"four"},
    {5,"five"},
    {6,"six"},
    {7,"seven"},
    {8,"eight"},
    {9,"nine"}
};
void saydigit(int n){
    if(n==0){
        return;
    }
    int digit=n%10;
    saydigit(n/10);
    cout<<mpp[digit]<<" ";
}
int main(){
    int n;
    cin>>n;
    saydigit(n);
    cout<<endl;
    return 0;
}