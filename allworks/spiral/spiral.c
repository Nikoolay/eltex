#include <stdio.h>
#define n 5


int main()
{

	int i, j;
	int a[n][n];
	int b[n][n];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			a[i][j]=i*n+j;

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%2d ",a[i][j]);
		printf("\n");
	}
	
	{
		int topline=0, botline=n, leftline=0, rightline=n;
		i=0;
		int *p; 
		p=&a[0][0];
		while(1)
		{
			for(j=leftline;j<rightline;j++,i++)
				b[topline][j]=*(p+i);
			topline=topline+1;
			if(topline==botline) break;
			
			for(j=topline;j<botline-1;j++,i++)
				b[j][rightline-1]=*(p+i);
			rightline=rightline-1;
			if(rightline==leftline) break;

			for(j=rightline;j>=leftline;j--,i++)
				b[botline-1][j]=*(p+i);
			botline=botline-1;
			if(botline==topline) break;

			for(j=botline-1;j>=topline;j--,i++)
				b[j][leftline]=*(p+i);
			leftline=leftline+1;
			if(leftline==botline) break;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%2d ",b[i][j]); 
		printf("\n");
	}
}


