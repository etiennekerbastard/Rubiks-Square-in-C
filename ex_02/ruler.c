#include <stdio.h>
#include <stdlib.h>
#include "rubiks.h"

int		fill_tab(int **table)
{
  table[0][0] = 0;
  table[0][1] = 0;
  table[0][2] = 1;
  table[0][3] = 1;
  table[1][0] = 0;
  table[1][1] = 0;
  table[1][2] = 1;
  table[1][3] = 1;
  table[2][0] = 2;
  table[2][1] = 2;
  table[2][2] = 3;
  table[2][3] = 3;
  table[3][0] = 2;
  table[3][1] = 2;
  table[3][2] = 3;
  table[3][3] = 3;

  return(0);
}

void		print_tab(int **table)
{
  int row;

  row = 0;
  while(row < 4)
    {
      printf("—————————————————\n");
      printf("| %d | %d | %d | %d |\n",table[row][0], table[row][1], table[row][2], table[row][3]);
      row++;
    }
  printf("—————————————————\n");
}

int		main()
{
  int **table;
  int i;

  i = 0;
  table = malloc(4 * sizeof(int*));
    while(i < 4)
      {
	table[i] = malloc(4 * sizeof(int));
	i++;
      }
     if(table == NULL)
	  {
	exit(0);
	printf("MALLOC_EN_PLS");
	  }
    fill_tab(table);
    algo_line(table, 0);
    print_tab(table);
    algo_column(table, 0);
    print_tab(table);
    algo_square(table, 0);
    print_tab(table);
    while(i < 4)
      {
	free(table[i]);
	i++;
      }
    free(table);
    return(0);
}
