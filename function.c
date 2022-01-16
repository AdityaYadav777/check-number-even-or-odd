#include<stdio.h>
void star();
main()
{
	int i;
	star();
	printf("\n hello aditya ");
	do{
		star();
		i++;
		printf("\n");
		
	}while(i<5);
}
void star()
{
	int i;
	for(i=1;i<10;i++)
	{
		printf("*");
		
	}
}

