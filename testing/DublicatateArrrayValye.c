/* C Program to Delete Duplicate Elements from an Array */

#include <stdio.h>

int main()
{
	int arr[10], i, j, k, Size;

	printf("\n Please Enter Number of elements in an array  :   ");
	scanf("%d", &Size);

	printf("\n Please Enter %d elements of an Array \n", Size);
	for (i = 0; i < Size; i++)
	{
    	scanf("%d", &arr[i]);
   	}

	for (i = 0; i < Size; i++)
	{
		for(j = i + 1; j < Size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			for(k = j; k < Size; k++)
    			{
    				arr[k] = arr[k + 1];
    				printf("Debug : %d\t",arr[k]);
				}
				Size--;
				j--;
			}
		}
	}

 	printf("\n Final Array after Deleteing Duplicate Array Elements is:\n");
 	for (i = 0; i < Size; i++)
  	{
 		printf("%d\t", arr[i]);
  	}
 	return 0;
}
