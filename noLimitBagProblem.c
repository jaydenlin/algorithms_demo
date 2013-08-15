#include <stdio.h>
#include <algorithm>
using namespace std;
int n =3;
int w[3] = {3,4,2};
int v[3] = {4,5,3};
int dp[3][7] ={0};
int W = 7;
int solve();
int solve2();
//dp[i+1][j] = max(dp[i+1][j],dp[i][j-k*w[i]]+v[i])
int main(){
  solve2();  
  return 0;
}

int solve(){
 
 for (int i=0;i<=3;i++){
   for(int j=0;j<=W;j++){
        for (int k =0 ; k*w[i]<= j ;k++){
          dp[i+1][j] = max(dp[i+1][j],dp[i][j-k*w[i]]+k*v[i]);
          }
    }
 }

printf("%d",dp[3][7]);

  return 0;
}

int solve2(){
  for(int i=0;i<n;i++){
    for(int j=0;j<=W;j++){
      
      if(j<w[i]){
          dp[i+1][j]=dp[i][j];
        }else{
          dp[i+1][j]=max(dp[i][j],dp[i+1][j-w[i]]+v[i]);
          }
      }
    }
 printf("%d",dp[3][7]);
  return 0;
  }

