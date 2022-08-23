
int checkAgainstMaxMinRange(float min1, float max1, float Parameter_value1)
{
  if(Parameter_value1 < min1 || Parameter_value1 > max1)
  {return 1;}
  else
  {return 0;}}
int checkAgainstMaxRange(float max2, float Parameter_value2)
{
  if(Parameter_value2 > max2) 
  {return 1;}
  else
  {return 0;}}
