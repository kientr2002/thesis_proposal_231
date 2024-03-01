#include "schedule.h"

void mySchedule::schedule_init(){
  for(uint8_t i = 0; i < this->num_tasks; i++){
    schedule_delete_task(i);
  }
  this->num_tasks = 0;
}

void mySchedule::schedule_add_task(void (* pFunction)(), uint32_t Delay, uint32_t Period){
  sTask currentTask = {pFunction, Delay, Period,0,0};
  //TO DO
  if(this->num_tasks == 0){

  }
}