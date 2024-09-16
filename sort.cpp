#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> sortVec(vector<int> &nums)
{
    // sort using the sort funtion
    sort(nums.rbegin(), nums.rend());
    for (int n : nums)
    {
        std::cout << n << ' ';
    }
}
int main()
{
    vector<int> nums;
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    // Sort the vector and get the sorted result
    vector<int> sortedNums = sortVec(nums);

    // Output the sorted vector
    cout << "Sorted elements: ";
    for (int i = 0; i < sortedNums.size(); ++i)
    {
        cout << sortedNums[i] << " ";
    }
    cout << endl;
    cout << find(nums.begin(),nums.end(),5) - nums.begin();

    return 0;
}