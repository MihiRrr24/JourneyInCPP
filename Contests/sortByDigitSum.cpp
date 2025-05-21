// https://leetcode.com/problems/minimum-swaps-to-sort-by-digit-sum/

#include <bits/stdc++.h>
using namespace std;

int digitSum(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int minSwaps(vector<int> &nums)
{
    int n = nums.size();

    vector<int> v = nums;

    sort(v.begin(), v.end(), [&](int a, int b)
         {
        int sumA = digitSum(a);
        int sumB = digitSum(b);
        if (sumA == sumB) return a < b;
        return sumA < sumB; });

    unordered_map<int, int> mp;
    for (int i = 0; i < n; ++i)
    {
        mp[nums[i]] = i;
    }

    vector<bool> visited(n, false);
    int cnt = 0;

    for (int i = 0; i < n; ++i)
    {
        if (visited[i] || v[i] == nums[i])
            continue;

        int cycle_size = 0;
        int j = i;

        while (!visited[j])
        {
            visited[j] = true;
            j = mp[v[j]];
            cycle_size++;
        }

        if (cycle_size > 1)
        {
            cnt += (cycle_size - 1);
        }
    }

    return cnt;
}

int main()
{
    vector<int> nums = {37, 100};
    cout<<minSwaps(nums)<<endl;
}