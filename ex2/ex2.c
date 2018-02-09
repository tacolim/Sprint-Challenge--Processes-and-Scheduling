#include <stdio.h>
#include <stdlib.h>

int **alloc_2d(int rows, int cols)
{
	// !!! IMPLEMENT ME
	// (solution is about 5 lines of code)
    int r = rows, c = cols, i;
    int **array = (int **)malloc(r * sizeof(int *));
    for (i=0; i<r; i++)
         array[i] = (int *)malloc(c * sizeof(int));
    return array;
}

int main(void)
{
	int **my_array = alloc_2d(5, 10);

	// First array index is row, second is column:
	my_array[2][3] = 3490;

	// The same array access could be made with pointer arithmetic:
	*(*(my_array+2)+3) = 3490;

	// By the C spec, the array notation and pointer arithmetic notation
	// are 100% equivalent.
	
	printf("my_array[2][3] = %d\n", my_array[2][3]);
    return 0;
}