/*
 * Mr. 4th Dimention - Allen Webster
 *
 * 18.07.2017
 *
 * Cross platform threading constants
 *
 */

// TOP

#if !defined(FRED_SHARED_THREADING_CONSTANTS_H)
#define FRED_SHARED_THREADING_CONSTANTS_H

#define CORE_COUNT 8

#define THREAD_TYPE_SIZE             32
#define MUTEX_TYPE_SIZE              64
#define CONDITION_VARIABLE_TYPE_SIZE 48
#define SEMAPHORE_TYPE_SIZE          32

/*
fprintf(stdout, "%d VS %d\n", (i32)sizeof(Thread), THREAD_TYPE_SIZE);    \
fprintf(stdout, "%d VS %d\n", (i32)sizeof(Mutex), MUTEX_TYPE_SIZE);    \
fprintf(stdout, "%d VS %d\n", (i32)sizeof(Condition_Variable), CONDITION_VARIABLE_TYPE_SIZE);    \
fprintf(stdout, "%d VS %d\n", (i32)sizeof(Semaphore), SEMAPHORE_TYPE_SIZE);    \
*/

#define AssertThreadSizes()                                         \
Assert(            sizeof(Thread) == THREAD_TYPE_SIZE            ); \
Assert(             sizeof(Mutex) == MUTEX_TYPE_SIZE             ); \
Assert(sizeof(Condition_Variable) == CONDITION_VARIABLE_TYPE_SIZE); \
Assert(         sizeof(Semaphore) == SEMAPHORE_TYPE_SIZE         )

#endif

// BOTTOM
