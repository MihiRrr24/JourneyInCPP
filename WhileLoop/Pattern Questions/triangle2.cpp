*****
 ****     
  ***
   **
    *

#include <bits/stdc++.h> 
  
void ninjaPuzzle(int n)
{
    int row = 1;

    while(row<=n){

        int space = row-1;
        while(space){
            cout<<" ";
            space--;
        }

        int star = n-row+1;
        while(star){
            cout<<"*";
            star--;
        }

        cout<<endl;
        row++;
    }
}

// MIHIRR42
