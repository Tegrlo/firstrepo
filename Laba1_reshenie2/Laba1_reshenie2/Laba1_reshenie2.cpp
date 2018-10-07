
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
int main()
{
    int *arrElements, *sortedArrayElements; 
    int i, arrSize,n, firstElement;
    system("chcp 1251");
    system("cls");
    printf("¬ведите размер массива: ");
    scanf("%d", &arrSize);
    arrElements = (int*)malloc(arrSize * sizeof(int));
    sortedArrayElements = (int*)malloc(arrSize * sizeof(int)); 
    n=1;
    for (i = 1; i<arrSize+1; i++)
    {
      printf("arrayElement[%d]:  ", i);
      scanf("%d", &arrElements[i]);
    }
    printf("\n");
    firstElement=arrElements[1];	
	for (i = 1; i<arrSize+1; i++)
	{
	  if(arrElements[i]>firstElement)
			{
				sortedArrayElements[n]=arrElements[i];
				n++;
			}
	}
	for (i = 1; i<arrSize+1; i++)
	{
	  if(arrElements[i]==firstElement)
			{
				sortedArrayElements[n]=arrElements[i];
				n++;
			}		
	}	
	for (i = 1; i<arrSize+1; i++)
    {
		if(arrElements[i]<firstElement)
			{
				sortedArrayElements[n]=arrElements[i];
				n++;
		    }  
	}
	for (i=1;i<arrSize+1;i++)
		printf("%d ",sortedArrayElements[i]);
	getchar();
	getchar();
	return 0;
}