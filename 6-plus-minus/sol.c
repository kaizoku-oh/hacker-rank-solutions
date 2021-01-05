void plusMinus(int arr_count, int* arr)
{
  uint8_t u08Index;
  float fPosCounter;
  float fNegCounter;
  float fZeroCounter;

  fPosCounter = 0;
  fNegCounter = 0;
  fZeroCounter = 0;
  if(arr)
  {
    for(u08Index=0; u08Index<arr_count; u08Index++)
    {
      if(arr[u08Index] > 0)
      {
        fPosCounter++;
      }
      else if(arr[u08Index] < 0)
      {
        fNegCounter++;
      }
      else
      {
        fZeroCounter++;
      }
    }
    printf("%.6f\r\n", fPosCounter/arr_count);
    printf("%.6f\r\n", fNegCounter/arr_count);
    printf("%.6f\r\n", fZeroCounter/arr_count);
  }
}