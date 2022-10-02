#include<bits/stdc++.h>
using namespace std;
  

int CountPS(char str[], int n)
{
   
  int ans=0;
  
   
    bool P[n][n];
    memset(P, false, sizeof(P));
  
    // palindrome of single length
    for (int i = 0; i < n; i++){
        P[i][i] = true;
    }
  
  
  
    for (int gap = 2; gap <=n; gap++) {
        for (int i = 0; i <= n-gap; i++) {
          
            int j = gap + i-1;
  
          
            if(i==j-1){
              P[i][j]=(str[i]==str[j]);
            }else {
              
              P[i][j]=(str[i]==str[j] && P[i+1][j-1]);
            }
         
          if(P[i][j]){
            ans++;
          }
        }
    }
  
   
    return ans;
}
  

int main()
{
    char str[] = "abaab";
    int n = strlen(str);
    cout << CountPS(str, n) << endl;
    return 0;
}