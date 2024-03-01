#ifndef _INC_SCHEDULE_H_
#define _INC_SCHEDULE_H_

#include "global.h"



class mySchedule {
  public:
    class sTask{
      private:
        
        uint32_t Delay;
        uint32_t Period;
        uint8_t Runme;
        sTask *pNext;
        friend class mySchedule;
      public:
        sTask(){
          pNext = nullptr;
        }
        sTask(void pTask(), uint32_t Delay, uint32_t Period, uint32_t Runme, sTask *pNext){
          this->Delay = Delay;
          //TO DO

        }

    };
  private:
    sTask *task;
    sTask *head;
    sTask *tail;
    uint8_t num_tasks;
  public:
    void schedule_init();
    void schedule_add_task(void (* pFunction)(), uint32_t Delay, uint32_t Period);
    void schedule_processing ();
    void schedule_delete_task (uint32_t TaskID);
};





#endif