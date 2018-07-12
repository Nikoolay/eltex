#include "calc.h"

void div(struct compl *temp, double re, double im){
		double temp_re=(temp->re*re+temp->im*im)/(re*re+im*im);
		temp->im=(temp->im*re-temp->re*im)/(re*re+im*im);
		temp->re=temp_re;
		
		
}
