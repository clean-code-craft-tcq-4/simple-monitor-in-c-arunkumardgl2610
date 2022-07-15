#include <stdio.h>
#include <assert.h>
#include "parameter_check.h"
int temperature_status=0, soc_Status=0,charge_status =0,battery_status=0;
void battery_parametertest(float para1,float para2,float para3) 
{
  temperature_status = check_Parametertype1(0,45,para1);
  soc_Status = check_Parametertype1(20,80,para2);
  charge_status = check_Parametertype2(0.8,para3);
  battery_status = (temperature_status | charge_status | soc_Status);
  if(battery_status==1)
  {
    printf("Battery status is not in range!\n");
  }
  else
  {
    printf("Battery status is good condition\n");
  }
  return battery_status;
}
int main() 
{
  assert(battery_parametertest(25, 70, 0.7));
  assert(!battery_parametertest(50, 85, 0));
}
