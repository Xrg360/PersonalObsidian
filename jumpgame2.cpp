// You are given a 0-indexed array of integers nums of length n. You are initially positioned at nums[0].

// Each element nums[i] represents the maximum length of a forward jump from index i. In other words, if you are at nums[i], you can jump to any nums[i + j] where:

// 0 <= j <= nums[i] and
// i + j < n
// Return the minimum number of jumps to reach nums[n - 1]. The test cases are generated such that you can reach nums[n - 1].

#include <bits/stdc++.h>
using namespace std;

int jump(vector<int>& nums) {
    int n = nums.size();
    if(n==1) return 0;
    int jumps = 1;
    int maxReach = nums[0];
    int steps = nums[0];
    for(int i=1;i<n;i++){
        if(i==n-1) return jumps;
        maxReach = max(maxReach,i+nums[i]);
        steps--;
        if(steps==0){
            jumps++;
            if(i>=maxReach) return -1;
            steps = maxReach-i;
        }
    }
    return -1;
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

    int ans = jump(nums);
    cout<<ans<<endl;
    return 0;
}