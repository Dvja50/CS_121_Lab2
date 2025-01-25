#include <stdio.h>
const int MAX=9;

void printValues(int*values );
void sort(int*values );
void swap(int*a , int*b  );


 void printValues(int* values) {
    for (int i = 0; i < MAX; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");
}

// Function to swap two integers
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void sort(int* values) {
    for (int i = 0; i < MAX - 1; i++) {
        for (int j = 0; j < MAX - 1 - i; j++) {
            if (values[j] > values[j + 1]) {
                swap(&values[j], &values[j + 1]);
	       	printValues(values);
            }
        }
    }
}
int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: \n");
  printValues(values);

  // test swap
  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  swap(&x, &y);
  printf("x: %d, y: %d \n", x, y);

  sort(values);
  printf("After: \n");
  printValues(values);

  return(0);
} // end main

