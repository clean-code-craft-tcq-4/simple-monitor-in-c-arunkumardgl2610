#include <stdio.h>
#include <assert.h>

void checkbattery_Temp(float temperature,float soc1, float chargeRate1)
{
  if(temperature <0 || temperature > 45)
  {
    printf("Temperature out of range!\n"); 
  }
  else
  {
     printf("Temperature is in normal range!\n"); 
    checkbattery_soc(soc1,chargeRate1)
  }
}

void checkbattery_soc(float soc, float chargeRate2)
{
  if(soc < 20 || soc > 80)
  {
    printf("State of Charge out of range!\n");
  }
  else
  {
     printf("soc is in normal range!\n"); 
    batteryIsOk(chargeRate2);
  }
}

void batteryIsOk(float chargeRate) 
{
  if(chargeRate > 0.8) 
  {
    printf("Charge Rate out of range!\n");
  }
  else
  {
    printf("charge is in normal range!\n");
  }
}

int main() 
{
  checkbattery_Temp(25,70,0.7);
}
