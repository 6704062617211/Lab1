#include<stdio.h>
int main() {
	int mid,final,q1,q2,lab,sit;
	scanf("%d %d %d %d %d %d",&mid,&final,&q1,&q2,&lab,&sit);
	//calculate
	float m=(mid*30.0)/100.0;
	float f=(final*35.0)/120.0;
	float q11=(q1*12.0)/60.0;
	float q22=(q2*13.0)/60.0;
	float l=(lab*5.0)/16.0;
	float s=(sit*5.0)/16.0;
	float sum=(m+f+q11+q22+l+s);
	
	printf("%10s=%8d=>%.2f\n","Mid",mid,m);
	printf("%10s=%8d=>%.2f\n","Final",final,f);
	printf("%10s=%8d=>%.2f\n","Q1",q1,q11);
	printf("%10s=%8d=>%.2f\n","Q2",q2,q22);
	printf("%10s=%8d=>%.2f\n","Lab",lab,l);
	printf("%10s=%8d=>%.2f\n","Sit",sit,s);
	printf("*****%.2f*****",sum);
}
