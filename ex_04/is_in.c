int             is_in_line(int **table, int line, int value)
{
  int n;

  n = 0;
  while(n < 4)
    {
      if(table[line][n] == value)
        return(0);
      n++;
    }
  return(1);
}

int             is_in_col(int **table, int column, int value)
{
  int n;

  n = 0;
  while(n < 4)
    {
      if(table[n][column] == value)
        return(0);
      n++;
    }
  return(1);
}
