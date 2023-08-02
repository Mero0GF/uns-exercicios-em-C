// #include <stdio.h>

// int max(int a, int b){
//   return (a > b) ? a : b;
// }

// int maior_valor(int n,int W,int w[],int v[]){
//   if (n < 0 || W <= 0){
//     return 0;
//   }
//   if (w[n] > W){
//     return maior_valor(n-1,W,w,v);
//   }
//   else{
//     return max(maior_valor(n-1,W,w,v),maior_valor(n-1,W-w[n],w,v) + v[n]);
//   }
// }

// int main(void) {
//   int s[4] = {1,2,3,4};
//   int w[4] = {3,2,4,1};
//   int v[4] = {8,3,9,6};
//   int W = 5;
//   int n = 3;

//   int ma = maior_valor(n, W, w, v);

//   printf("maior valor: %d",ma);
// }