#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0 ; i<n ; i++ ){
        cout << arr[i] << ' ';
    }
    cout << endl;
}
void sortone(int arr[],int n){
    //this is an two pointer appproach
    int step=1;
    int left=0,right=n-1;
   while(left<right){
        while(arr[left]==0){
            left++;
        }
        while(arr[right]==1){
            right--;
        }
     //means now at arr[i]==1 and arr[j]==0 hence now swap these two if left less than right
     if(left<right){
        //using this inbuilt swap function increase runtime  of the program
        swap(arr[left],arr[right]);
        left++;
        right--;
     }
    //  after every step print
     cout<<"this is step "<<step<<endl;
     printarray(arr,n);
     step++;
   }     
}
int main(){
    int arr[8]={ 1,1,0,0,1,0,1,0};
    sortone(arr,8);
    return 0;
    //this way we have coded to sort using two point approach 

}