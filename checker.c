#include <stdio.h>
#include <assert.h>
#include "parameter_check.h"
int temperature_status=0, soc_Status=0,charge_status =0;

void batteryIsOk(int temp, int sofc, int charg) 
{  
  if(temp == 1||sofc == 1||charg==1)
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
  int battery_status = 0;
  temperature_status = check_Parameter1(0,45,25);
  soc_Status = check_Parameter1(20,80,70);
  charge_status = check_Parameter2(0.8,0.7);
  batteryIsOk(temperature_status,soc_Status,charge_status);     
}
