#include <stdio.h>
#include <math.h>
#include <stdlib.h>

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
