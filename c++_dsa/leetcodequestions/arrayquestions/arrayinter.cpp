#include<iostream>
#include <bits/stdc++.h> 
#include<vector>
#include<limits.h>
using namespace std;
void input(int arr[],int n){
    for(int i=0;i<n;i++){
          cin>>arr[i];
    }
}
vector<int> findarray(int arr1[],int arr2[],int n,int m){
     vector<int> ans;
    // we will check each value with one value of the array the other array
    //then we will if the element is matched then update the elemen tso no other matches 
    //if the latter arary beginin g elemnt is greater than we break
    int start=0;
	for(int i=0;i<n;i++){
		int element=arr1[i];
		for(int j=start;j<m;j++){
			if(element<arr2[j]){
				break;
			}
		    if(arr2[j] == element){
				//element matched then push back
				ans.push_back(arr2[j]);
				/*then update elment
                then we can increase start if the lement match because it is sorted therefore no use of comapring again
				 arr2[j]=-1;*/
                start=j+1;
                //this way we used the fact that that the array is sorted thus optimized code
				break;
			}
            if(element>arr2[j]){
                start++;
            }
		}
	}
	return ans;
}
int main(){
    int t;
    cin>>t;
    int n,m;
    int arr1[100],arr2[100];
    while(t--){
        cin>>n>>m;
        input(arr1,n);
        input(arr2,m);
        vector<int> ans=findarray(arr1,arr2,n,m);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
//so this is optmized version of iteration we could alos update the value of the matched address but this is more fun to increase intial point of iteration on desirable situations