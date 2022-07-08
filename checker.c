#include <stdio.h>
#include <assert.h>

void checkbattery_Temp(float temperature)
{
  if(temperature <0 || temperature > 45)
  {
    printf("Temperature out of range!\n"); 
  }
  else
  {
     printf("Temperature is in normal range!\n"); 
  }
}

void checkbattery_soc(float soc)
{
  if(soc < 20 || soc > 80)
  {
    printf("State of Charge out of range!\n"); 
  }
  else
  {
     printf("soc is in normal range!\n"); 
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
  checkbattery_Temp(25);
  checkbattery_soc(70);
  batteryIsOk(0.7);
}
