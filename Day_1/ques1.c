/* Program for the question no1
Name: Sandipan Ray
Regn.no.: 2025CA085
Date: 05-01-2026	*/

#include <stdio.h>
int main ()	{
	int array[6]={12,7,9,15,6,10};
	int min=1000,max=-1;
	int j=0,dif,sum=0;
	for (int i=0; i<6; i++)	{
		if (array[i]>max)	max=array[i];
		if (array[i]<min)	min=array[i];
		if ((i&1)==0)	sum+=array[i];
	}
	dif=max-min;
	printf("The difference between max and min values is %d.\n",dif);
	printf ("The sum of defects at even indices is %d.\n",sum);
	return 0;
}
