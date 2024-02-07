#include<bits/stdc++.h>
using namespace std;
int Allpermutation(vector<int>& orignal,int index,int sum,int required){
    if(index==orignal.size()){
        if(sum==required){
            return 1;
        }
        return 0;
    }
    //take
    int left=Allpermutation(orignal,index+1,sum+orignal[index],required);
    //not take
    int right=Allpermutation(orignal,index+1,sum,required);
    return left+right;
}
int main(){
    int n,required;
    cin>>n;
    vector<int> orignal(n,0);
    for(int i=0;i<n;i++){
        cin>>orignal[i];
    } 
    cout<<"Enter the Required sum : ";
    cin>>required;    
    cout<<Allpermutation(orignal,0,0,required)<<endl;
    return 0;
}
