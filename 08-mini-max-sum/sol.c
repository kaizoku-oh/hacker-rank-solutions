void miniMaxSum(int arr_count, int* arr)
{
  long exception;
  long min;
  long max;
  long *sums;

  if(arr)
  {
    /* 1. calculate the array sums using four of the five integers */
    sums = malloc(arr_count * sizeof(long));
    for(int i=0; i<arr_count; i++)
    {
      exception = arr[i];
      for(int j=0; j<arr_count; j++)
      {
        if((arr[j] != exception) || ((arr[j] == exception) && (j != i)))
        {
          sums[i] += arr[j];
        }
      }
    }
    /* 2. find min and max in sums array */
    min = sums[0];
    max = sums[0];
    for(int i=0; i<arr_count; i++)
    {
      if(sums[i] < min)
      {
        min = sums[i];
      }
      else if(sums[i] > max)
      {
        max = sums[i];
      }
    }
    printf("%ld %ld", min, max);
  }
}
