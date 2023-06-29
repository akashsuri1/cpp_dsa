#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void findTriplets(int *arr, int n, int s) {
	sort(arr,arr+n);
	for(int i=0;i<n-2;i++){
		int required=s-arr[i];
		int front=i+1;
		int back=n-1;
        //this way we can approach the problem in n2 maneer by using the advanatage of sorting 
        while(front<back){
			int x=arr[front]+arr[back];
			if(x<required){
				front++;
			}else if(x>required){
				back--;
			}else{
                cout<<arr[i]<<" "<<arr[front]<<" "<<arr[back]<<endl;
				front++;
				back--;
			}
		}
	}
    return;
}
int main(){
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cout<<"enter the required sum ";
    cin>>sum;
    findTriplets(arr,n,sum);
    delete []arr;
    return 0;

}