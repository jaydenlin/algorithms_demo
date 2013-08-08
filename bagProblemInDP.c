#include <stdio.h>
#include <algorithm>
using namespace std;
int w[4] = {2,1,3,2};
int v[4] = {3,2,4,2};
int n = 4;
int limitWeight = 5; 
int dfs(int,int,int);

int main(void){
 printf("%d\n",dfs(0,0,0)); 
 return 0; 
}

int dfs(int i, int sumValue, int sumWeight){
  if(i==4){
      return sumValue;  
  }
  else if(w[i]>limitWeight){//cut
      return dfs(i+1,sumValue,sumWeight);
  }
  else if(sumWeight+w[i]<=limitWeight){//keep adding but evaluate which is max and return it
      return max(dfs(i+1,sumValue+v[i],sumWeight+w[i]),dfs(i+1,sumValue,sumWeight));
  }
  else{//stop adding
       return dfs(i+1,sumValue,sumWeight);
  }
}

