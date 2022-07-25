#include<stdio.h>
int main()
{
	int a = 10;
	
	int* pa = &a;

	printf("%d\n", *pa);
	printf("%d\n", *(&a));

	int arr[5] = { 1,2,3 };
	pa = arr;
	//arr = &a;

	printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	printf("%d %d %d\n", pa[0], pa[1], pa[2]);

	printf("%lld %lld\n", arr, arr + 1);

	printf("%d %d %d\n", *arr, *(arr+1), *(arr+2));
	printf("%d %d %d\n", *pa, *(pa +1), *(pa +2));


	printf("%d %d %d\n", ++arr[0], ++arr[1], ++arr[2]);
	printf("%d %d %d\n", pa[0], pa[1], pa[2]);


	printf("%d %d %d\n", ++( * (arr)), ++ ( * (arr + 1)), ++ ( * (arr + 2)));
	printf("%d %d %d\n", pa[0], pa[1], pa[2]);
	printf("%d %d %d\n", arr[0], arr[1], arr[2]);


	printf("%d %d %d\n", ++(*(pa)), ++(*(pa + 1)), ++(*(pa + 2)));
	printf("%d %d %d\n", pa[0], pa[1], pa[2]);
	printf("%d %d %d\n", arr[0], arr[1], arr[2]);

	return 0;
}