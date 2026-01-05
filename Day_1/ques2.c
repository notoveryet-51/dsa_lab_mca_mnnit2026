/* program to solve ques2
Name: Sandipan	Ray
Regn. no.: 2025ca085
Date: 5-1-2026	*/

#include <stdio.h>
 int main()	{
 	int marks[] = {60, 70, 80, 90, 50};
 	for (int i=0; i<5; i++)	{
 		if((i&1)!=0)	marks[i]+=5;
 	}
 	for (int i=0; i<5; i++)	printf("%d ",marks[i]);
 	printf ("\n");
 	return 0;
 }
