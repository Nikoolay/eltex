#include "calc.h"

void sub(struct compl *temp, double re, double im){
	temp->re=temp->re-re;
	temp->im=temp->im-im;
}
