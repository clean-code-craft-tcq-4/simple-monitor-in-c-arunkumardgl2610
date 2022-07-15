#include <stdio.h>
#include <assert.h>
#include "parameter_check.h"
int temperature_status=0, soc_Status=0,charge_status =0;

void parametertype1_status(int temp_status, int sofc_status)
{
  if(temp_status == 1||sofc_status == 1)
  {
    printf("Battery status is not in range!\n");
  }
  else
  {
    printf("Battery status is good condition\n");
  }
}
void parametertype2_status(int charg_status) 
{  
  if(charg_status==1)
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
  temperature_status = check_Parametertype1(0,45,25);
  soc_Status = check_Parametertype1(20,80,70);
  charge_status = check_Parametertype2(0.8,0.7);
  battery_status = (temperature_status | charge_status | soc_Status);
  if(battery_status==1)
  {
    printf("Battery status is not in range!\n");
  }
  else
  {
    printf("Battery status is good condition\n");
  }
}
