#include<bits/stdc++.h>
using namespace std;
int pos(int arr[] , int ele,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ele)
        return i;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int dup[n];
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    dup[i] = arr[i];
    }

    sort(arr,arr+n);
    int min = arr[0];
    int max = arr[n-1];

    int pos1 = pos(dup,min,n);
    int pos2 = pos(dup,max,n);
    int k=0;
    cout<<pos1<<endl;
    while(pos1!=0)
    {
        swap(dup[pos1],dup[pos1-1]);
        k++;
        pos1--;
    }
    cout<<k<<endl;
    while(pos2!=n-1)
    {
        swap(dup[pos2],dup[pos2+1]);
        k++;
        pos2++;
    }

    cout<<k;

    return 0;
}