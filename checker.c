#include <stdio.h>
#include <assert.h>
#include "parameter_check.h"


int batteryIsOk(void) 
{
  int temperature_status=0, soc_Status=0,charge_status =0;
  temperature_status = check_Parameter1(0,45,25);
  soc_Status = check_Parameter1(20,80,70);
  charge_status = check_Parameter2(0.8,0.7);  
  if(temperature_status == 1 || soc_Status == 1 || charge_status == 1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main() 
{
  int battery_status = 0;
  battery_status= batteryIsOk();
  if(battery_status == 1)
  {
    printf("Battery status is not in range!\n");
  }
  else
  {
    printf("Battery status is good condition\n");
  }  
}
