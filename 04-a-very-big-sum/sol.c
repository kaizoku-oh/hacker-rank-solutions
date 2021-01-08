long aVeryBigSum(int ar_count, long* ar)
{
  uint8_t u08Index;
  long sum;

  sum = 0;
  for(u08Index=0; u08Index<ar_count; u08Index++)
  {
    sum += ar[u08Index];
  }
  return sum;
}