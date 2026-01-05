/* program to solve ques4
Name: Sandipan Ray
Regn. no.: 2025ca085
Date: 5-1-2026	*/

#include<stdio.h>
int main ()	{
	int memory[] = {20, 40, 60, 80};
	int sum=0,avg;
	for (int i=0;i<4; i++)	sum+=memory[i];
	avg=sum/4;
	for (int i=0;i<4; i++)	if (memory[i]>avg)	printf("%d ",memory[i]);
	printf ("\n");
	return 0;
}
