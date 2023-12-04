#include <bits/stdc++.h>
using namespace std;
void recurpermute(vector<vector<int>> &ans, int index, vector<int> &nums)
{
    if (index == nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for (int i = index; i < nums.size(); i++)
    {
        swap(nums[index], nums[i]);
        recurpermute(ans, index + 1, nums);
        swap(nums[index], nums[i]);
    }
}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    recurpermute(ans, 0, nums);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> vec(n, 0);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    vector<vector<int>> ans = permute(vec);
    for (auto itr : ans)
    {
        for (auto it : itr)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}