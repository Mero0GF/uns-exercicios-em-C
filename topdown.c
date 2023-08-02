// #include <stdio.h>
// #define MAX 100

// int M[MAX][MAX];

// int max(int a, int b){
//   return (a > b) ? a : b;
// }

// int maior_valor(int n,int W,int w[],int v[]){
//   if (n < 0 || W<=0){
//     return 0;
//   }
//   if (M[n][W] != -1){
//     return M[n][W];
//   }
//   if (w[n] > W){
//     M[n][W] = maior_valor(n-1,W,w,v);
//   }
//   else{
//     M[n][W] = max(maior_valor(n-1, W, w, v),maior_valor(n-1, W-w[n], w, v)+v[n]);
//   }
//   return M[n][W];
// }

// int main(void) {
//   for (int i = 0;i < MAX;i++){
//     for (int j = 0;j < MAX;j++){
//       M[i][j] = -1;
//     }
//   }
//   int s[4] = {1,2,3,4};
//   int w[4] = {3,2,4,1};
//   int v[4] = {8,3,9,6};
//   int W = 5;
//   int n = 3;

//   int ma = maior_valor(n, W, w, v);

//   printf("maior valor: %d",ma);
// }