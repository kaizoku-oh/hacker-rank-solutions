void staircase(int n)
{
  uint8_t u08Index;
  char *pcRow;

  pcRow = malloc(n * sizeof(char));
  for(u08Index=0; u08Index<n; u08Index++)
  {
    pcRow[u08Index] = ' ';
  }
  for(u08Index=1; u08Index<=n; u08Index++)
  {
    pcRow[n-u08Index] = '#';
    printf("%s\r\n", pcRow);
  }
  free(pcRow);
}