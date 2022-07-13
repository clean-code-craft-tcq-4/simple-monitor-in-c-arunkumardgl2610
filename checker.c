#include <stdio.h>
#include <assert.h>

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
void batteryIsOk(void) 
{
  int temperature_status=0, soc_Status=0,charge_status =0;
  temperature_status = check_Parameter1(0,45,25);
  soc_Status = check_Parameter1(20,80,70);
  charge_status = check_Parameter2(0.8,0.7);  
  if(temperature_status == 1 || soc_Status == 1 || charge_status == 1)
  {
    printf("Battery status is not in range!\n");
  }
  else
  {
    printf("Battery status is good condition\n");
  }
}



int main() 
{
  batteryIsOk();
  
}
