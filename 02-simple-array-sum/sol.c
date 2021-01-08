int simpleArraySum(int ar_count, int* ar)
{
  int index;
  int sum;

  sum = 0;
  if(ar)
  {
    for(index=0; index<ar_count; index++)
    {
      sum += ar[index];
    }
  }
  return sum;
}