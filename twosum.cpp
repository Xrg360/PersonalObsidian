#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> num_map;
    for (int i = 0; i < nums.size(); i++)
    {
        int comp = target - nums[i];
        if (num_map.find(comp) != num_map.end())
        {
            return {num_map[comp], i};
        }
        num_map[nums[i]] = i;
    }
    return {0};
}

int main(){
    vector<int> nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int target;
    cin>>target;
    vector<int> ans = twoSum(nums,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}