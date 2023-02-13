

#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}
//Print arrow
void print_arrow(int n)
{
 
  putchar('\n');
  for(int i = 0; i < n +n - 1; i++){
    int size = i;
    
    if(i>= n){
       size = n+n - i - 2;
    }
    for(int j = 0;j<=size+size; j++){
      if(j < size){
	putchar(' ');
      }
      else{
	putchar('*');
      }
    }
    printf("\n");
  }
}

