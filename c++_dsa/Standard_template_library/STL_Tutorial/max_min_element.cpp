#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++) cin>>array[i];
    cout<<"The array's max element "<<*max_element(array,array+n)<<endl;
    cout<<"The array's min element "<<*min_element(array,array+n)<<endl;
    return 0;    
}