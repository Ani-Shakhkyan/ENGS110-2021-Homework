#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
	int *opened, res, count = 1,a;
	FILE *data;
	opened = &a;
	res = 0;
	data = fopen("input.txt","r");
	
	while(fscanf(data, "%d", opened)!=EOF){
	   	count++;
	}
	opened = (int*)malloc(count*sizeof(int));
	data = fopen("input.txt","r");
	while (!data)
	{
		printf("Error");
		break;
	}
	while (fscanf(data, "%d", opened)!=EOF)
		res = res + *opened;
	printf("Sum in input.txt is %d\n",res);
	data = fopen("output.txt", "w+");
	fprintf(data, "%d\n", res);
	fclose(data);
	free(opened);
}
