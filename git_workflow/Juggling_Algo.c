#include "Juggling_Algo.h"

int gcd(int m, int n) {
	return n ? gcd(n, m%n) : m;
}

int* Juggling(int arr[], int n, int k) {
	int d = -1, i, j, temp;
	int* dest = (int*)malloc((sizeof(int))*n);
	for (int i = 0; i < n; i++) {
		dest[i] = arr[i];
	}
	for (i = 0; i < gcd(n, k); i++) {
		j = i;
		temp = dest[i];
		while (1) {
			d = (j + k) % n;
			if (d == i) break;

			dest[j] = dest[d];
			j = d;
		}
		dest[j] = temp;
	}
	return dest;
}


