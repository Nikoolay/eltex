#include "calc.h"

void mul(struct compl *temp, double re, double im){
			double temp_re=temp->re*re-temp->im*im;
			double temp_im=temp->im*re+temp->re*im;
			temp->re=temp_re;
			temp->im=temp_im;
			
}
	
