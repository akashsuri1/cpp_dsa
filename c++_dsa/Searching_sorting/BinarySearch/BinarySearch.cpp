#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    //so it is written this way to prevent intger from overflowing
    int mid =start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        //in that case we check in right part only
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            //in this case we check in left part as key<arr[mid]
            end=mid-1;
        }
        mid=start+(end-start)/2;
        //one of end or start has changed so we now calculate newer mid
    }
     return -1;
    /*1. if this is not found anywhere we return -1;
      2. in this alogorithim until the start is less than end we keep comapring middle element and then deciding which part to go on if its not found in worst case this has complexity of logn thus quite efficent than the linear search
      3. one thing to remeber it works only in case of ontotnic functions
    */
}
int main(){
    int Even[10]={11,19,23,34,44,55,67,68,79,134};
    int Odd[7]={8,17,23,39,45,60,77};
    cout<<"79 is present in array at index "<<BinarySearch(Even,10,79)<<endl;
    cout<<"8 is present in array at index "<<BinarySearch(Odd,7,8)<<endl;;
    //now we test the elements that are not present 
    cout<<"33 is present in array at index "<<BinarySearch(Even,10,33)<<endl;
    cout<<"79 is present in array at index "<<BinarySearch(Odd,7,79)<<endl;;
    return 0;
}