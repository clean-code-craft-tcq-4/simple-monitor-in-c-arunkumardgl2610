
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
int display_status(int battery_status_display,int language)
{
  if(battery_status_display == 1) {
    if(language == 1)
  {
    printf("Battery status is not in range!\n");}
    else
    {
      printf("Batteriestatus ist nicht im Bereich!\n");}
    return 0;}
  else{
    if(language == 1)
    {
      printf("Battery status is good condition\n");}
    else
    {
      printf("Batteriestatus ist guter Zustand\n"); }
    return 1;
  }
}
