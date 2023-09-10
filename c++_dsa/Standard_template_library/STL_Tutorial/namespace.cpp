#include <bits/stdc++.h> //this is done to include all files but not recommeded in an interviw as importing all files take memory
using namespace std;     // this is an scope kind of thing
namespace akash
{
    int val = 30;
    void greet()
    {
        cout << "hello isn't its amazing to work with these namespaces" << endl;
    }
}
void greet()
{
    cout << "yes i definetly have priorities" << endl;
}
int main()
{
    double val = 30.1020;
    cout << val << endl;
    cout << akash::val << endl;
    greet();
    akash::greet();
    return 0;
}
// by defualt c++ has kept all it function in std namespace
