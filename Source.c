#include<stdio.h>
#include<math.h>
const  int sizeOfMatrix = 5 ; 
void sortingTheExchange(int a[], int sizeOfMatrix);
void sort_matrix(int a[sizeOfMatrix][sizeOfMatrix]);
void main()
{
	int i, j;      
	int a[sizeOfMatrix][sizeOfMatrix];
	for (i = 0; i < sizeOfMatrix; i++)
	{
		for (j = 0; j < sizeOfMatrix; j++)
		{
			a[i][j] = rand() % 20; 
			printf("a[%d][%d] = %d\n ", i + 1, j + 1, a[i][j]);

		}
		printf("\n");
	}
	printf("\nold matrix\n");
	for (i = 0; i < sizeOfMatrix; i++)
	{
		for (j = 0; j < sizeOfMatrix; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
	sort_matrix(a);
	printf("\nnew matrix\n");
	for (i = 0; i < sizeOfMatrix; i++)
	{
		printf("[%d]:", i);
		for (j = 0; j < sizeOfMatrix; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	int theSumOfTheArithmeticMean = 0;

	for (int j = sizeOfMatrix - 1; j > 0; j--)
	{
		int productItemsInEachColumn = 1;
		for (int i = sizeOfMatrix - j; i < sizeOfMatrix; i++)
		{
			productItemsInEachColumn *= a[i][j];
		}
		printf("<<%d>>\n", productItemsInEachColumn);
		theSumOfTheArithmeticMean += productItemsInEachColumn;
	}
	printf("%f", theSumOfTheArithmeticMean / (sizeOfMatrix - 1.0));
	getchar();
}
void sortingTheExchange(int a[], int sizeOfMatrix)
{
	for (int i = 0; i < sizeOfMatrix; i++)
		for (int j = 0; j < sizeOfMatrix; j++)
			if (a[i] < a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}
void sort_matrix(int a[sizeOfMatrix][sizeOfMatrix])
{
	for (int i = 0; i < sizeOfMatrix; i++)
		sort(a[i], sizeOfMatrix);
}

