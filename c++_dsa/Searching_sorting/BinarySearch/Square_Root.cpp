#include<iostream>
using namespace std;
int Sqrt_Integer(int x){
    int start=0;
    int end=x;
    long long int mid=start+(end-start)/2;
    long long int ans=-1; 
    while(start<=end){
        long long int square=mid*mid;
        if(square==x){
            return mid;
        }else if(square<x){
            ans=mid;
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
double Precision(int n,int integer_part,int precision){
    double factor=1;
    double ans=integer_part;
    for(int i=0;i<precision;i++){
        factor/=10;
        for(double j=ans;j*j<n;j+=factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number to find the square root ";
    cin>>n;
    cout<<"The square Root of n is "<<Precision(n,Sqrt_Integer(n),2)<<endl;
    return 0;
}
//$ we can find the square root of an number by starting counting from 0 to n then start comparing the square with the number this way they answer will have an O(root(n)) complexity but we can do it through linear search to have an      O(logn) solution which is more optimal
//$ they the square root of an number lies within fom o to n-1 we can apply binary search as the search space is monotonic comparing mid sqaure with  if it is greater than we can shift to left side by changing end to mid-1 if the square is less than we can change the start to mid+1 accordingly we can find the solution
//$ similarly we can find precision by adding o.1 then 0.01 then 0.01 then comparing the square with the number if the number is less than we can store it in the answer and at last we can find the solution
