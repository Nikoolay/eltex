#include "fun.h"
#define N 5

int main()

{
 
 int a[N]={10, 11, 12, 13, 14};
 int t=0;
 printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);

	for (int i=0; i<N/2; i++){
	  t=a[i];
	  a[i]=a[N-i-1];
	  a[N-i-1]=t;
	} 
 printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
}
