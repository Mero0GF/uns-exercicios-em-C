#include <stdio.h>

void algoritmo_do_caminhoneiro(int *p,int n,int c){
  int s[6] = {0,0,0,0,0,0};
  int aux = 0;
  int ultima_parada = 0;
  for (int i = 0;i < n;i++){
    if (p[i] - ultima_parada > c){
      ultima_parada = i-1;
      s[aux] = p[i-1];
      aux++;
    }
  }
  printf("posições que o caminhao deve parar:");
  for (int i = 0;i < aux;i++){
    printf("%d\n",s[i]);
  }
}

int main(void) {
  int p[4] = {10,30,50,70},n = 4,c = 20;
  algoritmo_do_caminhoneiro(p, n, c);
}