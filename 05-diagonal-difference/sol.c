int diagonalDifference(int arr_rows, int arr_columns, int** arr)
{
  uint8_t u08Index;
  uint8_t u08DiagSize;
  int *ps32DiagArrayA;
  int *ps32DiagArrayB;
  int s32SumDiagA;
  int s32SumDiagB;

  s32SumDiagA = 0;
  s32SumDiagB = 0;
  u08DiagSize = (arr_rows <= arr_columns)?arr_rows:arr_columns;
  ps32DiagArrayA = malloc(u08DiagSize * sizeof(int));
  ps32DiagArrayB = malloc(u08DiagSize * sizeof(int));
  /* Extract diagonals from matrix and calculate each diagonal elements sum */
  for(u08Index=0; u08Index<u08DiagSize; u08Index++)
  {
    ps32DiagArrayA[u08Index] = arr[u08Index][u08Index];
    s32SumDiagA += arr[u08Index][u08Index];
    ps32DiagArrayB[u08Index] = arr[u08Index][(u08DiagSize-1)-u08Index];
    s32SumDiagB += arr[u08Index][(u08DiagSize-1)-u08Index];
  }
  return abs(s32SumDiagA - s32SumDiagB);
}