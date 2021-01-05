int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count)
{
  int count;
  uint8_t u08Index;
  static int ts32ResultArray[2];

  *result_count = 2;
  count = (a_count >= b_count)?a_count:b_count;
  for(u08Index=0; u08Index<count; u08Index++)
  {
    if(a[u08Index] > b[u08Index])
    {
      ts32ResultArray[0] += 1;
    }
    else if (b[u08Index] > a[u08Index])
    {
      ts32ResultArray[1] += 1;
    }
  }
  return ts32ResultArray;
}