char* timeConversion(char *s)
{
  int hh;
  int mm;
  int ss;
  char am_pm;
  static char out[sizeof("hh:mm:ss")];
  char tcHh[3];
  char tcMm[3];
  char tcSs[3];

  if(s)
  {
    sscanf(s, "%d:%d:%d%cM", &hh, &mm, &ss, &am_pm);
    if('P' == am_pm)
    {
      if(hh > 12)
      {
        hh = (hh + 12) - 24;
      }
      else if(hh < 12)
      {
        hh += 12;
      }
    }
    else if(('A' == am_pm) && (12 == hh))
    {
      hh = 0;
    }
    if(hh < 10)
    {
      snprintf(tcHh, sizeof("hh"), "0%d", hh);
    }
    else
    {
      snprintf(tcHh, sizeof("hh"), "%d", hh);
    }
    if(mm < 10)
    {
      snprintf(tcMm, sizeof("mm"), "0%d", mm);
    }
    else
    {
      snprintf(tcMm, sizeof("mm"), "%d", mm);
    }
    if(ss < 10)
    {
      snprintf(tcSs, sizeof("ss"), "0%d", ss);
    }
    else
    {
      snprintf(tcSs, sizeof("ss"), "%d", ss);
    }
    snprintf(out, sizeof(out), "%s:%s:%s", tcHh, tcMm, tcSs);
  }
  return out;
}