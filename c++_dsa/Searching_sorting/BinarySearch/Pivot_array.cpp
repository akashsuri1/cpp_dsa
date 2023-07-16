#include<iostream>
#include<limits.h>
using namespace std;
void Printarray(int array[],int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
void Selectionsort(int array[],int n){
    int Min;
    for(int i=0;i<n-1;i++){
        Min=i;
        for(int j=i+1;j<n;j++){
            if(array[j]<array[Min]){
                Min=j;
            }
        }
        swap(array[i],array[Min]);
    }
}
void Rotate_array(int array[],int n,int freq){
    while(freq--){
        int temp=array[n-1];
        for(int i=n-1;i>0;i--){
            swap(array[i],array[i-1]);
        }
        array[0]=temp;
    }
}
int Find_Pivot(int array[],int n){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(array[mid]>=array[0]){
            start=mid+1;
        }else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
    //*we can also return end here same the answer will be same  
}
int Find_Pivot_Great(int array[],int n){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(end-start>1){
        if(array[mid]>=array[0]){
            start=mid;
        }else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}

int main(){
    int n;
    cout<<"Enter the no of Elements in an array ";
    cin>>n;
    int *array=new int[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    Selectionsort(array,n);
    Printarray(array,n);    
    int freq;
    cout<<"Enter the no of times you want to Rotate the array ";
    cin>>freq;
    Rotate_array(array,n,freq);
    Printarray(array,n);
    cout<<"The pivot element lies at index at "<<Find_Pivot(array,n)<<endl;
    cout<<"The pivot element lies at index at "<<Find_Pivot_Great(array,n)<<endl;
    return 0;
}
//* so an pivot in the rotated sorted array is the index at which the the actual array started
//* for example in this case :- 6 7 8 1 2 3 4 like here 1 is the pivot which is at 3rd index we can clearly see the it is the minimum element in the array we can find it through linear search but that will have linear time complexity O(n) we can find it through binary search of O(log(n))
//* so when its graph is plotted we can clearly see that the the pivot is the point all point like 6 7 8 have higher value / they constitute this line which is here while the line 1 2 3 4 have lower value and constitue second line we can also consider 8 as pivot we can also find it by changing the small algorithim
//$ so we will find mid and then check if it lies on 1 st line is greater than array[0] if that is the case we change start=mid+1 beacuse our answer lies on the second line so we nedd to come close to it
//$ in case the mid lies on second line we change end to mid not mid-1 because if in case its pivot we shift to first line which can give wrong answer 
