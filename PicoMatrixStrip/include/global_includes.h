#ifndef _OS_INCLUDES_H
#define _OS_INCLUDES_H

/**
#include "Arduino.h"
#include "stdlib.h"
#include "stdio.h"

#include "threads_list.h"
#include "event_type_list.h"
#include "enabled_modules.h"

#include "CSAL_SHARED/os_error.h"
#include "CSAL_SHARED/statemachine.h"
#include "CSAL_SHARED/safe_circular_queue.hpp"

#include "os_mutx.h"
#include "os_queue.h"
#include "os_sem.h"
#include "os_setbits.h"
#include "os_thread.h"
#include "os_misc.h"

*/

#include "stdlib.h"
#include "FreeRTOSCSAL/csal_includes.h"
#include "FreeRTOSCSAL/CSAL_SHARED/csal_shared_includes.h"
#include "FreeRTOSCSAL/CSAL_SHARED/event_management.hpp"

#include "enabled_modules.h"
#include "event_type_list.h"
#include "threads_list.h"


#endif