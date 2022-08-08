int checkAgainstMaxMinRange(float min1, float max1, float Parameter_value1)
{
   if(Parameter_value1 < min1 || Parameter_value1 > max1)
  {
      return 1;
  }
  else
  {
    return 0;
  }
}
int checkAgainstMaxRange(float max2, float Parameter_value2)
{
    if(Parameter_value2 > max2) 
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int checkAgainstwarnMaxMinRange(float min1, float max1, float Parameter_value1)
{
    int war_min = 0,war_max = 0, war_Per=0;
    war_Per = min1/5;
    war_min = war_Per + min1;
    war_max = max1 - war_Per;
    if( Parameter_value1 <= min1)
    {
     printf("Low SOC breach\n");   
    }
    if( Parameter_value1 > min1 && Parameter_value1 <= war_min)
    {
     printf("LOW_SOC_WARNING\n");   
    }
    if( Parameter_value1 > war_min && Parameter_value1 < war_max)
    {
     printf("NORMAL\n");   
    }
    if( Parameter_value1 >= war_max && Parameter_value1 < max1)
    {
     printf("HIGH_SOC_WARNING\n");   
    }
    if( Parameter_value1 > max1)
    {
     printf("HIGH_SOC_BREACH\n");   
    }
}
