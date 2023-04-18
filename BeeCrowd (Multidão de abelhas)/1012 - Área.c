#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float a, b, c;
	float area_triangulo, area_circulo, area_trapezio, area_quadrado, area_retangulo;
	
		scanf("%f", &a);
		scanf("%f", &b);
		scanf("%f", &c);
		
	area_triangulo = (a * c) /2; 
	
    area_circulo =  c * c * 3.14159;

    area_trapezio = ((a + b) * c) / 2;
    
    area_quadrado = b * b;

    area_retangulo = a * b;
    
    printf("TRIANGULO: %.3f\n", area_triangulo);
    printf("CIRCULO: %.3f\n", area_circulo);
    printf("TRAPEZIO: %.3f\n", area_trapezio);
    printf("QUADRADO: %.3f\n", area_quadrado);
    printf("RETANGULO: %.3f\n", area_retangulo);
	
	
	return 0;
}
