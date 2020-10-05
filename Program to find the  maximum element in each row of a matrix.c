#include<stdio.h>
#define ROW 3
#define COLUMN 3
void maximumInrow();
int main(void)
{
	int matrix1[ROW][COLUMN],matrix2[ROW][COLUMN],i,j;
	printf("<-------Enter the elements in the matrix 1-------->\n\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			printf("Element at position matrix1[%d][%d] :-",i,j);
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("\n\n<-----The Original Matrix is ----->\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			printf("%d\t",matrix1[i][j]);
		}
		printf("\n");
	}
	maximumInrow(matrix1);
	return 0;
}
void maximumInrow(int matrix1[][COLUMN])
{
	int i,j,max;
	for(i=0;i<ROW;i++)
	{
		max=matrix1[i][0];
		for(j=1;j<COLUMN;j++)
		{
			if(matrix1[i][j]>max)
			{
				max=matrix1[i][j];
				}	
		}
		printf("\nMaximum Elemrnt In Row %d is :- %d",i,max);
	}
}
