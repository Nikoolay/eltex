#include "plagin/calc.h"

int main()
{

	char operat=0;
	double re=0, im=0;
	struct compl temp={0,0};
	struct compl *ptr=&temp;
	printf("input complex number\n");
	scanf(" %lf %lf",&temp.re,&temp.im);
	printf("input operation and complex number\n");
	printf("q to exit.\n");
	while(1)
	{	
		printf("%lf+%lfi\n",ptr->re,ptr->im);
		scanf(" %c",&operat);
		
		if(operat=='q') break;

		scanf(" %lf",&re);
		scanf(" %lf",&im);
		
		switch(operat)
		{
			case '+': add(ptr,re,im);break;
			case '-': sub(ptr,re,im);break;
			case '*': mul(ptr,re,im);break;
			case '/': div(ptr,re,im);break;
			default: break;
		}
	}
	return 0;
}
