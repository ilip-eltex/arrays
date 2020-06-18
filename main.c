#include <stdio.h>
#include <malloc.h>

int main ()
{
	int n = 0, count=1;

	printf ("Enter N: ");
        scanf ("%d", &n);

	printf ("\n\tTask 1: Print square N matrix\n"); 		// 1
	int **a = malloc (sizeof(int*) * n); 
	
	for (int i=0; i<n; i++) 
	{
		a[i] = malloc (sizeof(int)*n);
		for (int j=0; j<n; j++)
			a[i][j] = count++;
	}

	for (int i=0; i<n; i++) 
	{
		for (int j=0; j<n; j++)
			printf ("%d ", a[i][j]);
		printf ("\n");
	}

	printf ("\n\tTask 2: Reverse array\n"); 			// 2
	
	int *a2 = malloc (sizeof(int) * n);
	
	for (int i=0; i < n; i++) 
	{
		a2[i] = i + 1;
	       printf ("%d ", a2[i]);	
	}
	
	printf ("\n");

	for (int i = n-1; i >= 0; i--)
		printf ("%d ", a2[i]);

	printf ("\n\n\tTask 3: Fill triangles with 0 and 1\n"); 	// 3       	
	for (int i=0; i<n; i++) 
	{
		for (int j=0; j<n; j++) 
		{
			if (i < j)
				a[i][j] = 0;
			else
				a[i][j] = 1;
			printf ("%d ", a[i][j]);

		}
		printf ("\n");
	}
	
	printf ("\n\tTask 4: Print spiral array\n"); 			// 4	
		
	int right_i = n-1, left_i = 0, up_j = 0, down_j = n-1, i, j=0; 
	count = 1;
	while (left_i < right_i && up_j < down_j) 
	{
		
		for (i = left_i; i <= right_i; i++)
			a[i][j] = count++;
	       	
		
		for (j = up_j+1; j <= down_j; j++)
			a[i][j] = count++;
		
		
		for (i--; i >= left_i; i--)
			a[i][j] = count++;
		

		
		for (j--; j > up_j; j--)
			a[i][j] = count++;
		left_i++;
		right_i--;
		up_j++;
		down_j--;

		
	}

	return 0;
}
