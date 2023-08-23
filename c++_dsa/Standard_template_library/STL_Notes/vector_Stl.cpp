#include<iostream>
#include<vector>
using namespace std;
void print_vector(vector<int>& v){
    cout<<endl;
    for(vector<int>::iterator i=v.begin();i!=v.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl<<endl;
}
void print_info(vector<int>& v){
    cout<<endl;
    cout<<"[ size = "<<v.size()<<" , ";
    cout<<" capacity = "<<v.capacity()<<" , ";
    cout<<" max_size = "<<v.max_size()<<" , ";
    cout<<" empty = "<<v.empty()<<" ] "<<endl;
    cout<<endl;
}
void front_back(vector<int>& v){
    cout<<"The front is "<<v.front()<<endl;
    cout<<"The back  is "<<v.back()<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> v1({23,34,55,66,77,88,99});
    vector<int> v2(n,5);
    vector<int> v3(v1.begin(),v1.begin()+5);
    vector<int> v4;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v4.push_back(temp);
    }
    print_vector(v1);
    print_vector(v2);
    print_vector(v3);
    print_vector(v4);
    cout<<"Before insertion v1 = ";
    print_vector(v1);
    print_info(v1);
    vector<int>::iterator itr=v1.begin()+2;
    *itr=44;
    cout<<"After insertion v1 = ";
    v1.insert(itr,0);
    print_vector(v1);
    print_info(v1);
    cout<<"Before popping we have v4 =  ";
    print_vector(v4);
    print_info(v4);
    for(int i=0;i<n/2;i++){
        v4.pop_back();
    }
    cout<<"After pooping we have v4 = ";
    print_vector(v4);
    print_info(v4);
    cout<<"Before erase we have  = ";
    print_vector(v2);
    print_info(v2);
    v2.erase(v2.begin());
    cout<<"After erase we have = ";
    print_vector(v2);
    print_info(v2);
    cout<<"Before erase of v3 = ";
    print_vector(v3);
    print_info(v3);
    front_back(v3);
    v3.erase(++(v3.begin()),(v3.end())-2);
    cout<<"After erase we have = ";
    print_vector(v3);
    print_info(v3);
    front_back(v3);
    cout<<"Before clear we have  ";
    print_info(v4);
    v4.clear();
    cout<<"After clear we have  ";
    print_info(v4);
    return 0;
}
//$ so this is the another container vector of the stl we can use it this is an random access iterator we can access any value in it  as well as 