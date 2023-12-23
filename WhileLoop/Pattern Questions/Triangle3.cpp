1
23
345
4567
56789

#include <bits/stdc++.h> 

vector<string> numberPattern(int n)
{
    vector<string>ans;

    for(int row=1; row<=n; row++){
        int value = row;
		    string temp ="";
		
		for(int col=1; col<=row; col++){
            temp = temp + to_string(value);
			      value++;
		}

        ans.push_back(temp);
	}

    return ans;
}
