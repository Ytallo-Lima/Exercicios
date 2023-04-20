#include <stdio.h>
#include <stdlib.h>

int main ()

{

	double volume, r, pi = 3.14159;
	
	scanf("%lf", &r);
	
	volume = (4.0/3) * pi * r * r * r;
	
	printf ("VOLUME = %.3lf\n", volume);
	
	return 0;
}
