#include <stdio.h>
#include <math.h>


void sol_kvadro(long double *x1, long double *x2, long double a, long double b, long double c){
	long double D = pow(b, 2) - 4 * a * c;
	if (D < 0)
		printf("There is no roots");
	if (D == 0)
		 *x1 = -b / (2 * a);
	else
		 *x1 = (-b + sqrt(D)) / (2 * a);
		 *x2 = (-b - sqrt(D)) / (2 * a);
}



int main(){
	long double a;
	long double b;
	long double c;
	long double x1;
	long double x2;
	int count = scanf("%Le %Le %Le,", &a, &b, &c);
	if (count == 3){
		sol_kvadro(&x1, &x2, a, b, c);
		printf("%Le %Le", x1, x2);
	}
	else
		printf("You have a wrong input, please try again");
}
