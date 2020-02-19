/* Author: apt */

#include <stdio.h>

#define MAXN 200
// to change to actual bound

int main(){
  int leigo[MAXN], telepata[MAXN], n, i, j, inseq, acertos=0, pontos=0;

  scanf("%d",&n);

  for(i=0; i < n; i++)
    scanf("%d",&leigo[i]);

  for(i=0; i < n; i++)
    scanf("%d",&telepata[i]);

  i=0;

  while(i < n) {
    inseq = 0;
    for(j=i;j<n && leigo[j]==telepata[j]; j++)
      inseq++;
    if (inseq) {
      acertos += inseq;
      if (inseq == 1) pontos += inseq;
      else pontos += 3*inseq;
    }
    i = j+1;
  }

  printf("%d\n%d\n",acertos,pontos);

  return 0;
}
