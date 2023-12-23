    *
   ***
  *****
 *******



#include<bits/stdc++.h>

void printPattern(int n) {
	
	int row = 1;

	while(row<=n){
		int space = n-row;
        while (space) {
        cout << " ";
        space--;
        }

    /* PRINT THE FIRST TRIANGLE*/
    	int col = 1;
    	while (col<=row){
			cout<<"*";
			col++;
		}

	/* PRINT THE SECOND TRIANGLE */
		int start = row - 1;
		while(start){
			cout<<"*";
			start--;
		}

		cout<<endl;
		row++;
    }
}
