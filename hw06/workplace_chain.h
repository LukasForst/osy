//
// Created by lukas on 11/7/17.
//

#ifndef HW06_WORKPLACE_CHAIN_H
#define HW06_WORKPLACE_CHAIN_H

#include "global.h"

workplace_type get_next_work_place(job_t *job);
int get_sleep_time(workplace_type current_workplace);

#endif //HW06_WORKPLACE_CHAIN_H