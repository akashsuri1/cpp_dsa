#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); //$this is considered faster than push back
    vector<pair<int,int>> vec;
    vec.push_back({1,3});
    vec.emplace_back(1,3); //$ automatically detects that it is an pair and inserts in it
    vector<int> v1(5,100);//$ size is 5 and all elements 100
    vector<int> v2(5);//$ 5 an all are 0
    vector<int> v3(v1); //$ this is an copy of v1
    vector<int>::iterator itr=v1.begin();
    //$iterator points to the memory location where value inside the  container is stored
    itr++;
    cout<<*itr<<endl;
    //$ * this is used to print value at that memory location
    itr+=2;
    cout<<*itr<<endl;
    vector<int>::iterator itr1=v1.end();//$ element after last elemnt 
    vector<int>::reverse_iterator itr2=v1.rbegin();//$element reverse starting
    vector<int>::reverse_iterator itr3=v1.rend();//$element reverse end
    cout<<v[0]<<" "<<v.at(0)<<endl;
    cout<<v.back()<<endl;
    //$used to get the last element in the array
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    } 
    cout<<endl;
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    //$ auto automatically picks the datatype of the variable in cpp so we dont have to write long and useless syntax
    vector<int> v4({1,2,3,4,5,5,7});
    v4.erase(v4.begin()+2);//$ used to remove one element
    v4.erase(v4.begin()+1,v4.begin()+3);//$ erase [start,end)
    vector<int> v5(5,10);
    v5.insert(v5.begin(),300);//$insert 300 at begining of the v5
    v5.insert(v5.begin()+1,3,20);//$insert 3 20's at begining of the v5
    vector<int> copy(5,200);
    v5.insert(v5.begin(),copy.begin(),copy.end());//$insert another vector at required position in another vector
    cout<<v5.size()<<endl;
    v5.pop_back();//$delete last elemnts from vector
    v1.swap(v5);
    //$it swaps value of two vector
    v1.clear();//$how much large the vector is it deletes all the value 
    cout<<v1.empty()<<endl;
    return 0;
    //$returns 1 if its is empty  
}
