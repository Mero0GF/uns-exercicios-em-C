#include <stdio.h>

#define MAX 100

int M[MAX][MAX];

int max(int a, int b){
  return (a > b) ? a : b;
}

int maior_valor(int n, int W,int w[],int v[]){
  for (int i = 1;i < n+1;i++){
    for (int j = 1;j < W+1;j++){
      if (w[i-1] > W){
        M[i][j] = M[i-1][j];
      }
      else{
        M[i][j] = max(M[i-1][j],M[i-1][j-w[i]]+v[i]);
      }
    }
  }
  return M[n][W];
}

int main(void) {
  for (int i = 0;i < MAX;i++){
    for (int j = 0;j < MAX;j++){
      M[i][j] = 0;
    }
  }  
  int s[4] = {1,2,3,4};
  int w[4] = {3,2,4,1};
  int v[4] = {8,3,9,6};
  int W = 5;
  int n = 3;

  int ma = maior_valor(n, W, w, v);

  printf("maior valor: %d",ma);
}