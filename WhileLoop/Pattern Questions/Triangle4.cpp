11111
0000
111
00
1

#include <bits/stdc++.h> 
void printPatt(int n) {
  
  int binary = 0;

  for(int i=1; i<=n; i++){

    if(i%2 != 0){
      binary = 1;
    }

    else{
      binary = 0;
    }


    for(int j=n; j>=i; j--){
      cout<<binary;
    }

    cout<<endl;
  }
}

// MIHIRR42
