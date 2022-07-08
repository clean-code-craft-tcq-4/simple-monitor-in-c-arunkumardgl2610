#include <stdio.h>
#include <assert.h>

int checkbattery_Temp(float temperature)
{
  if(temperature <0 || temperature > 45)
  {
    printf("Temperature out of range!\n"); 
    return 1;
  }
  else
  {
     printf("Temperature is in normal range!\n"); 
     return 0;
  }
}

int checkbattery_soc(float soc)
{
  if(soc < 20 || soc > 80)
  {
    printf("State of Charge out of range!\n");
    return 1;
  }
  else
  {
     printf("soc is in normal range!\n"); 
    return 0;
  }
}

int batteryIsOk(float chargeRate) 
{
  if(chargeRate > 0.8) 
  {
    printf("Charge Rate out of range!\n");
    return 1;
  }
  else
  {
    printf("charge is in normal range!\n");
    return 0;
  }
}

int main() 
{
  int Temp_Error=0, Soc_Error=0,ChargeRate_Error=0;
  Temp_Error=checkbattery_Temp(25);
  Soc_Error = checkbattery_soc(70);
  ChargeRate_Error = batteryIsOk(0.7);
  if(Temp_Error == 1 || Soc_Error == 1 || ChargeRate_Error == 1 )
  {
    printf("The battery is not ready to charge\n");
  }
  else
  {
     printf("The battery is ready to charge\n");
  }
}
