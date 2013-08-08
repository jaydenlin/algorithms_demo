#include <stdio.h>
char field[8][5] = {
  {'W',',','.','.','.'},
  {'W','W','.','.','W'},
  {'W','W','W','.','W'},
  {'W','W','W','.','W'},
  {'W','W','.','.','W'},
  {'W',',','.','.','W'},
  {'.','.','W','.','.'},
  {'W','W','W','.','.'},
  };
int m = 8;
int n = 5;
int dfs(int,int);

int main(void){
    int c =0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(field[i][j]=='W'){
              dfs(i,j);
              c++;
            }
        }  
    }
    printf("%d\n",c);

return 0;  
}

int dfs(int x,int y){
  
  field[x][y]='.';

  for(int dx=-1;dx<=1;dx++){
    for(int dy=-1;dy<=1;dy++){
         if((x+dx)>=0 && (y+dy)>=0 && (x+dx) < m && (y+dy) < n && field[x+dx][y+dy]=='W'){
            dfs(x+dx,y+dy);  
         } 
    }
  }

  return 0;

}


