#include<bits/stdc++.h>
using namespace std;
//this is how you create template with multiple parameter and default parameter also
template<typename T1,typename T2=char >
class myarray{
    public:
        vector<T1> vec1;
        vector<T2> vec2;
        int n;
        myarray(int size){
            n=size;
            for(int i=0;i<n;i++){
                T1 temp;
                cin>>temp;
                vec1.push_back(temp);
            }
            for(int i=0;i<n;i++){
                T2 temp;
                cin>>temp;
                vec2.push_back(temp);
            }
        }
        void displaysum(){
            cout<<accumulate(vec1.begin(),vec1.end(),0)<<endl;
            cout<<accumulate(vec2.begin(),vec2.end(),0)<<endl;
        }
        void display(){
            for(T1 itr:vec1){
                cout<<itr<<" ";
            }
            cout<<endl;
            for(T2 itr:vec2){
                cout<<itr<<" ";
            }
            cout<<endl;
        }
};
int main(){
    myarray<int,float> obj(5);
    obj.display();
    obj.displaysum();
    return 0;
}

