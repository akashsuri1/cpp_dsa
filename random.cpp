#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int> ans){
    for(auto i:ans){
        cout << i << " ";
    }
    cout<<endl;
}
int main(){
   int n;
   cin>>n;
   vector<int> vec(n);
   for(int i=0;i<n;i++){
    cin>>vec[i];
   }
   sort(vec.begin(),vec.end());
   print(vec);
   while(!vec.empty()){
       vec.pop_back();
   }
   cout<<vec.size()<<endl;
   cout<<vec.empty()<<endl;

}