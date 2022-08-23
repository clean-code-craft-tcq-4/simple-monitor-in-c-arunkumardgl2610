#include <stdio.h>
#include <assert.h>
#include "parameter_check.h"
int temperature_status=0, soc_Status=0,charge_status =0,battery_status=0,lang=0,overall_status;
int batteryIsInGoodCondition(float para1,float para2,float para3) 
{
  temperature_status = checkAgainstMaxMinRange(0,45,para1);
  soc_Status = checkAgainstMaxMinRange(20,80,para2);
  charge_status = checkAgainstMaxRange(0.8,para3);
  battery_status = (temperature_status | charge_status | soc_Status);
  overall_status = display_status(battery_status,lang);
  return overall_status;
}
int main() 
{
lang = 1;
  assert(batteryIsInGoodCondition(25, 70, 0.7));
  assert(!batteryIsInGoodCondition(50, 85, 0));
  assert(!batteryIsInGoodCondition(60, 15, 0.9));
lang =2;
  assert(batteryIsInGoodCondition(25, 40, 0.4));
  assert(!batteryIsInGoodCondition(43, 78, 0.9));
  assert(batteryIsInGoodCondition(25, 79, 0.6));
}
