#include <stdio.h>
int main(){
	int item1,item2,item3;
	float price1,price2,price3;
	//pro1
	scanf ("%d",&item1);
	price1 = (item1*0.95);
	printf ("%.2f\n",price1);
	//pro2
	scanf ("%d",&item2);
	price2 = ((item2+item1)*0.85);
	printf ("%.2f\n",price2);
	//pro3
	scanf ("%d",&item3);
	price3 = ((item3+item2+item1)*0.70);
	printf ("%.2f\n",price3);
}
