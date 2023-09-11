#include <bits/stdc++.h>
using namespace std;
void print(vector<int> array){
    for(int i=0;i<array.size();i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> arr; //{}
    cout << arr.size() << endl;
    arr.push_back(0); //{0};
    arr.push_back(1); //{0,1}
    cout << arr.size() << endl;
    arr.pop_back(); //{0}
    cout << arr.size() << endl;
    arr.push_back(0); //{0,0}
    arr.push_back(1); //{0,0,1}
    arr.clear();
    cout << arr.size() << endl;
    vector<int> vec(5, 0);   
    print(vec);                   //{0,0,0,0,0}
    vector<int> vec2(4, 10);                    //{10,10,10,10}
    print(vec2);                   //{0,0,0,0,0}
    vector<int> vec3(vec2.begin(), vec2.end()); //[) it is an this kind of thing
    print(vec3);                   //{0,0,0,0,0}
    vector<int> vec4;
    vec4.push_back(1);
    vec4.push_back(2);
    vec4.push_back(3);
    vec4.push_back(5);
    print(vec4);                   //{0,0,0,0,0}
    vector<int> v5(vec4.begin(), vec4.begin() + 2);
    print(v5);
    return 0;
}