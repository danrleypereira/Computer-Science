#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416
double volume(double altura, double raio);
int main(){
	double res, h, R; //h = altura, R = raio;
	scanf("%lf", &h);
	scanf("%lf", &R);
	
	res = volume(h, R);
	
	printf("%.1lf\n", res);	
	
	return 0;
}
double volume(double altura, double raio){
	return altura * pow(raio, 2) * PI;	
}
