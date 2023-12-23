1 2 3 4 17 18 19 20 
5 6 7 14 15 16 
8 9 12 13 
10 11 

#include <bits/stdc++.h> 
  
vector<vector<int>>printPattern(int n)
{
	vector<vector<int>> ans;

	int row=0,cnt=1,newCnt=n*(n+1),i=n;

	while(row<n){

		vector<int> temp;
		int col=0;
		
		while(col<i ){
			temp.push_back(cnt);
			cnt++,col++;
		}
		col=i-1;
		while(col>=0){
			temp.push_back(newCnt);
			newCnt--,col--;
		}
		reverse(temp.begin()+i,temp.end());
		
		ans.push_back(temp);
		row++,i--;

	}
	return ans;
}

//MIHIRR42
