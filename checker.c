#include <stdio.h>
#include <assert.h>

void checkbattery_status(float temperature,float soc1, float chargeRate1)
{
  int case_number = 0;
  switch (case_number)
  {
    case case_number:
      if(temperature <0 || temperature > 45)
      {
        printf("Temperature out of range!\n"); 
        break;
      }
      else
      {
        printf("Temperature is in normal range!\n"); 
        case_number++;
      }
      case case_number:
      if(soc < 20 || soc > 80)
      {
        printf("State of Charge out of range!\n");
        break;
      }
      else
      {
        printf("soc is in normal range!\n"); 
        case_number++;
      }
    case case_number:
      if(chargeRate > 0.8) 
      {
        printf("Charge Rate out of range!\n");
        break;
      }
      else
      {
        printf("charge is in normal range!\n");
        printf("Battery is in good condition\n");
        break;
      }
      default:
      printf("Give correct details\n");
      break;
  }
}



int main() 
{
  checkbattery_status(25,70,0.7);
}
