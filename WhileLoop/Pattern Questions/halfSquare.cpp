*****
****
***
**
*

#include <bits/stdc++.h> 
  
vector<string> printPatt(int n)
{
    int row=1;
    vector<string> temp;
    string str;

    while(row<=n){
        
        /* PRINTING THE STARS */
        int star = n-row+1;
        while(star){

            str.push_back('*');
            star--;
        }
        
        temp.push_back(str);
        /* AFTER ADDING THE ROW TO TEMP THEN AGAIN EMPTY MARKED FOR NEXT ROW */
        str="";
        row++;
    }

    return temp;
}

// MIHIRR42
