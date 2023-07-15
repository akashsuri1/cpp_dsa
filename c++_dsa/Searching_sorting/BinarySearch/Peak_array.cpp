#include<iostream>
using namespace std;
int Peakindex(int array[],int n){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    //* the last time the start is less than end then this loops run changing the start to desired value at that moment we should terminate beacuse after that the start equal to end which is the required index 
    //* on the left side of peak arr[i]<arr[i+1]
    //? on the right side of peak arr[i]>arr[i+1]
    //? at peak arr[i]<arr[i+1]>arr[i+2] at "peak" the elemnt
    while(start<end){
        //?if this is case then the mid lies on the left side of the peak
        if(array[mid]<array[mid+1]){
            start=mid+1;
        }else{
            //$in this case the mid can be on peak or on its right side we cannot afford to change it to mid-1 because it can cause problem if it is peak itself   
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}
void Printarray(int array[],int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    int* array=new int[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    Printarray(array,n);
    cout<<"The peak index in the array is at "<<Peakindex(array,n)<<endl;
    delete []array;
    //? delete the dynamically allocated memory 
    return 0;
}
//$ this is amazing way to make new commets more colerful and more exciting 
/*
 ? 1.)we could have done this through linear search by finding the peak or maximum elment that would have O(n) complexity
 $ 2.)But doing it through binary search decrease complexity to O(logn) thus this way we have an efficent and better solution   
*/