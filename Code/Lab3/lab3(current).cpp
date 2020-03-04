#include<stdio.h>
float ohm_law(float I, float R)
{
	float V = I*R;
	return V;
}
float series(float R1, float R2) 
{
	float R = R1 + R2;
	return R;
}
float parallel(float R1, float R2) 
{
	float R = 1 / (1 / R1 + 1 / R2);
	return R;
}
void main()
{
	float r1 = 100, r2 = 200, r3 = 300, r4 = 400, r5 = 500, r6 = 600, r7 = 700;
	float r8, r9, r10,r11,r12,I1, I2;
	r8 = series(r1, r2);
	r9 = parallel(r3, r4);
	r10 = series(parallel(r6, r7), r5);
	r11= parallel(r8, r9);
	I1 = 12000 / parallel(r11,r10);
	r1 = 123, r2 = 234, r3 = 345, r4 = 456, r5 = 567, r6 = 678, r7 = 789;
	r8 = series(r1, r2);
	r9 = parallel(r3, r4);
	r10 = series(parallel(r6, r7), r5);
	r11 = parallel(r8, r9);
	I2= 12000 / parallel(r11, r10);
	printf("When r1=100, r2=200, r3=300, r4=400, r5=500, r6=600, r7=700.\n");
	printf("i1= %.fmA\n", i1);
	printf("When r1=123, r2=234, r3=345, r4=456, r5=567, r6=678, r7=789.\n");
	printf("i2= %.fmA\n", i2);
	getchar();
}