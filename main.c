#include <stdio.h>

void seleciona_atv(int *s,int *t,int n){
  int a[20] = {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  int j = 1;
  int aux = 1;
  for (int i = 1;i <= n;i++){
    if (s[i] >= t[j]){
      a[aux] = i;
      aux++;
      j = i;
    }
  }
  printf("atividades a serem feitas:\n");
  for (int i = 0;i < aux;i++){
    printf("%d\n",a[i]);
  }
}

int main(void) {
  int s[4] = {1,3,6,8};
  int t[4] = {2,5,7,10};
  int n = 4;
  seleciona_atv(s, t, n);
  return 0;
}