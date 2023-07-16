#include<iostream>
using namespace std;
void Insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(key<=arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    //$ it has an worst case complexity of O(n^2) thus quadratci time will quicksort does it in O(nlogn) complexity
    //$it is used for small data sets or when the bigger array is almost sorted with some valuse here there   
}
void Rotate_array(int arr[],int n,int d){
    for(int i=0;i<d;i++){
        int key=arr[n-1];
        for(int j=n-1;j>0;j--){
            arr[j]=arr[j-1];
        }
        arr[0]=key;
    }
    //* this has an space complexity of O(1) while an time complexity of in worst case O(d*n)
}
void Two_pointer_Rotate(int arr[],int n,int d){
    for(int i=0;i<d;i++){
        int start=0,end=n-1;
        for(;start!=end;start++){
            swap(arr[start],arr[end]);
        }
    }
    //*this also has an worst case complexity of O(n*d) while it has an space conplexity of O(1);in this we ke[[ the j or end fixed while we move i toward it and keep swaping
}
void Reverse(int arr[],int start,int end){
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void Reversal_law_Right(int arr[],int n,int d){
    d=d%n;
    //* if the d is greater than n or equal to n we can handle it his way to achieve our answer by dividing it with the length of array
    Reverse(arr,0,n-1);
    //*first revrese the entier array
    Reverse(arr,0,d-1);
    //*here reverse the required element in the front 
    Reverse(arr,d,n-1);
    //*here reverse the rest of the array to achieve the answer
    //? this is the most optimal solution as we are only using an while loop at worst case from 0 to n-1 thus it has complexity of O(n) 
}
void Reversal_law_left(int arr[],int n,int d){
    d=d%n;
    Reverse(arr,0,n-1);
    Reverse(arr,n-d ,n-1);
    Reverse(arr,0,n-d-1);
    //$ this also has an worst case complexity of O(n) better than the two pointer or the swaping approach
}
void Printarray(int array[],int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int Binary_search(int arr[],int s,int e,int key){
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<key){
            start=mid+1;
        //$ search in right part
        }else{
            end=mid-1;
        //$ search in left part
        }
        //$ RE-calculate Mid
        mid=start+(end-start)/2;
    }
    return -1;
}
int Find_Pivot(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    //* this is to prevent integer overflow
    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
            //$ so this means it lies on first line so therefore we shift start to mid +1;
        }else{
            end=mid;
            //$ this lies on second line as ith has value less than arr[0] so here we change end to mid as it can be pivot also
        }
        mid=start+(end-start)/2;
    }
    return start;
    //$ we could also return end here 
}
int Rotated_search(int arr[],int n,int key){
    int Pivot=Find_Pivot(arr,n);
    //? now we will check if that element lies in first line on second line as both lines are montonic nature so we can use binary search to find our solution the same can be done through linear search but it has O(n) linear search time complexity we can do it through O(logn)
    if(arr[Pivot]<=key && key<=arr[n-1]){
        //? if it lies on second line then we can use binary search on it
        return Binary_search(arr,Pivot,n-1,key);
    }else{
        //? if it lies on first line we can use Binary search there 
        return Binary_search(arr,0,Pivot-1,key);
    }
}
int main(){
    int n,d,key;
    cout<<"Enter the size of the array ";
    cin>>n;
    int *array=new int[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    Insertion_sort(array,n);
    Printarray(array,n);
    cout<<"The no of times rotate the array ";
    cin>>d;
    Rotate_array(array,n,d);
    Printarray(array,n);
    Insertion_sort(array,n);
    Two_pointer_Rotate(array,n,d);
    Printarray(array,n);
    Insertion_sort(array,n);
    Reversal_law_left(array,n,d);
    Printarray(array,n);
    Insertion_sort(array,n);
    Reversal_law_Right(array,n,d);
    Printarray(array,n);
    cout<<"Enter the key you want to search for  ";
    cin>>key;
    cout<<"The element is found at "<<Rotated_search(array,n,key)<<endl;
    cout<<"Enter the key you want to search for  ";
    cin>>key;
    cout<<"The element is found at "<<Rotated_search(array,n,key)<<endl;
    cout<<"Enter the key you want to search for  ";
    cin>>key;
    cout<<"The element is found at "<<Rotated_search(array,n,key)<<endl;
    delete []array;
    //$ delete the dynamically allocated array
    return 0;
}