#include <stdio.h>

struct compl{ 
	double re;
	double im;	
};

void add(struct compl*, double, double);
void sub(struct compl*, double, double);
void mul(struct compl*, double, double);
void div(struct compl*, double, double);

