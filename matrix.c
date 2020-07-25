#include<stdio.h>
void main()
{
	int array1[3][3],i,j;
	printf("Input element in the matrix:  \n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
	printf("element-[%d],[%d]: ",i,j);
	scanf("%d",&array1[i][j]);
}
}
printf("\n The matrix is:  \n");
for(i=0;i<3;i++)
{
	printf("\n");
	for (j=0;j<3;j++)
	printf("%d\t",array1[i][j]);
}
printf("\n\n");
}
