int birthdayCakeCandles(int candles_count, int* candles)
{
  int max;
  int max_count;

  if(candles)
  {
    /* 1. search for max */
    max = candles[0];
    for(int i=0; i<candles_count; i++)
    {
      if(candles[i] > max)
      {
        max = candles[i];
      }
    }
    /* 2. count how many times max repeats */
    max_count = 0;
    for(int i=0; i<candles_count; i++)
    {
      if(candles[i] == max)
      {
        max_count++;
      }
    }
  }
  return max_count;
}
