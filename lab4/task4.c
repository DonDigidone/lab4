#include <stdio.h>
#include <stdlib.h>

void sort(int* arr, int n) {
	for (int s = n / 2; s > 0; s /= 2) {
		for (int i = 0; i < n; i++) {
			for (int j = i + s; j < n; j += s) {
				if (arr[i] > arr[j]) {
					int temp = arr[j];
					arr[j] = arr[i];
					arr[i] = temp;
				}
			}
		}
	}
}