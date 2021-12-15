#include <stdio.h>
#include <math.h>
#include "funs.h"

double rozwiazanie(double a, double b, double eps){
	double przedzial = (b-a)*eps;
	//int ilosc=eps/2;
	while ( (b-a)!=przedzial){
		if (cos(a)*cos((a/2)+(b/2))<0)
				b=(a+b)/2;
		else if (cos(a)*cos((a/2)+(b/2))>0)
				a=(a+b)/2;
		else break;
		//ilosc=ilosc/2;
	}
double x=(a/2)+(b/2);
return x;
}
