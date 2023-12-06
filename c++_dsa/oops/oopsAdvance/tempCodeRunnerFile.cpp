#include<iostream>
using namespace std;
template <class T>
class vector{
    public:
        T* arr;
        int size;
    public:
        vector(int m){
            size=m;
            arr=new T[size];
        }
        T dotproduct(vector& other){
            T d=0;
            for(int i=0;i<size;i++){
                d+=this->arr[i]*other.arr[i];
            }
            return d;
        }
        void print(){
            for(int i=0;i<size;i++) cout<<arr[i]<<" ";
            cout<<endl;
        }
};
int main(){
    vector<float> vec1(3);
    vec1.arr[0]=0.1;
    vec1.arr[1]=0.2;
    vec1.arr[2]=7.8;
    vector<float> vec2(3);
    vec2.arr[0]=3.4;
    vec2.arr[1]=2.7;
    vec2.arr[2]=1.2;
    float ans=vec1.dotproduct(vec2);
    cout<<ans<<endl;
    return 0; 
}
