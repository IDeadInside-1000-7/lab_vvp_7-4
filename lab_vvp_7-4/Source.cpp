#include <stdio.h>
#include <math.h>
int main()
{
	float V1, V2, S, T, L;
	printf("Enter V1: ");
	scanf("%f", &V1);
	printf("Enter V2: ");
	scanf("%f", &V2);
	printf("Enter S: ");
	scanf("%f", &S);
	printf("Enter T: ");
	scanf("%f", &T);
	L = S + T * (V1 + V2);
	printf("Distance(km) between two cars is: ");
	printf("%f\n", L);
}