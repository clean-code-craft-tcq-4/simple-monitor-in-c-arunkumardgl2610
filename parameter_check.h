int check_Parameter1(float min1, float max1, float Parameter_value1)
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
int check_Parameter2(float max2, float Parameter_value2)
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
