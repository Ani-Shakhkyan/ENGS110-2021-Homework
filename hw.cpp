#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *opened, res;
	FILE *data;
	
	res = 0;
	data = fopen("input.txt","r");
	opened = (int*)malloc(150*sizeof(int));
	while (!data)
	{
		printf("Error");
		break;
	}
	while (fscanf(data, "%d", opened)!=EOF)
	{ 
	res = res + *opened;	}
	printf("Sum in input.txt is %d\n",res);
	fclose(data);
	data = fopen("output.txt", "w+");
	fprintf(data, "%d\n", res);
	fclose(data);
	return (res);
}
