#include <stdio.h>
#include "funs.h"

double rozwiazanie();
int main (void){
	double a,b,eps;
	printf("Podaj a\n");
	scanf("%lf",&a);
	printf("Podaj b\n");
	scanf("%lf",&b);
	printf("Podaj eps\n");
	scanf("%lf",&eps);

	double x=rozwiazanie(a,b,eps);
	printf("Miejsce zerowe to %fl\n", x);

}
