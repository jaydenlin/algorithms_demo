#include <stdio.h>
int n = 4;
int a[4] = {1,2,3,7};
int k = 13;
bool dfs(int,int);
int main(void){

  if(dfs(0,0)){
    printf("Yes\n");
  }else{
    printf("No\n");  
  }

return 0;  
}

bool dfs(int i,int sum){
  if(n==i){
    return k==sum;
  }
  if(dfs(i+1,sum)){
    return true;
  }
  if(dfs(i+1,sum+a[i])){
    return true;  
  }

  return false;

}



