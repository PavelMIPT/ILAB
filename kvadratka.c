#include <stdio.h>
#include <math.h>

void sol_kvadro(long double *D, long double *x1, long double *x2, long double a, long double b, long double c){
	if (a == 0 && b == 0)
		printf("You have infinive equations");
	else{
	
		*D = pow(b, 2) - 4 * a * c;
		if (*D < 0)
			printf("There is no roots");
	
		else{
			 *x1 = (-b + sqrt(*D)) / (2 * a);
		 	*x2 = (-b - sqrt(*D)) / (2 * a);
		}
	}
}



int main(){
	long double a;
	long double b;
	long double c;
	long double x1;
	long double x2;
	long double D;
	printf("Please enter your coefficient values: ");
	int count = scanf("%3Le %3Le %3Le,", &a, &b, &c);
	if (count == 3){
		sol_kvadro(&D, &x1, &x2, a, b, c);
		if (D == 0){
			printf("The root equation is: ");
			printf("%Le", x1);
		}
		if (D > 0){
			printf("The roots equation are: ");
			printf("%Le %Le", x1, x2);
		}
	}	
	else
		printf("You have a wrong input, please try again");
}
