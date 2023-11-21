#include<iostream>
using namespace std;
bool sorted(int array[],int i,int n){
    if(i==n-1){
        return true;   
    }
    return array[i]<=array[i+1]&sorted(array,i+1,n);
}
int main(){
    int n;
    cin>>n;
    int *array=new int[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    if(sorted(array,0,n)) 
         cout<<"true"<<endl;
    else 
        cout<<"false"<<endl;
    return 0;
}