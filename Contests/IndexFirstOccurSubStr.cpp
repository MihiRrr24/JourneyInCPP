// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/?envType=study-plan-v2&envId=top-interview-150

#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle)
{
    int m = haystack.length();
    int n = needle.length();
    if (n == 0)
        return 0; // empty needle

    for (int i = 0; i <= m - n; i++)
    {
        if (haystack.substr(i, n) == needle)
        {
            return i;
        }
    }

    return -1;
}

/* JAVA SOLUTION
public int strStr(String haystack, String needle) {
        int haylength=haystack.length();
        int needlelength=needle.length();

        if(haylength<needlelength) return -1;

        for(int i=0;i<=haystack.length()-needle.length();i++){
            int j=0;
            while(j<needle.length() && haystack.charAt(i+j)==needle.charAt(j)) {
                j++;
            }
            if(j==needle.length()){
                return i;
            }
        }
        return -1;
    }
        */

int main()
{
    string haystack = "sadbutsad";
    string needle = "sad";
    cout<<strStr(haystack, needle);
}