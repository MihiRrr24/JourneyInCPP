// https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/

#include<bits/stdc++.h>
using namespace std;

int smallestIndex(vector<int> &nums)
{
    int sum = 0;
    int smallestIndex = INT_MAX;

    for (int i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        int num = nums[i];

        while (num != 0)
        {
            int digits = num % 10;
            sum += digits;
            num /= 10;
        }

        if (sum == i)
        {
            if (smallestIndex > i)
            {
                smallestIndex = i;
            }
        }
    }
    return (smallestIndex == INT_MAX) ? -1 : smallestIndex;
}

int main(){
    vector<int> arr = {1,3,2};
    cout<<"Smallest Index : "<<smallestIndex(arr);
}
