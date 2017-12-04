#include <stdio.h>
#include "Juggling_Algo.h"
#include "ming.h"

int main() {
	int arr[6] = { 1,2,3,4,5,6 };
	int *jugg = Juggling(arr, 6, 2);
	for (int i = 0; i < 6; i++) {
		printf("%d ", jugg[i]);
	}
	printf("\n");
	free(jugg);
	return 0;
}