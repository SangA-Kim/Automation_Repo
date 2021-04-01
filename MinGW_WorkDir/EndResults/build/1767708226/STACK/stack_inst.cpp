/* VectorCAST/Cover */
#ifndef VCAST_CONDITION_TYP
#define VCAST_CONDITION_TYP long long
#endif


#ifdef __cplusplus
extern "C" {
#endif

/*
---------------------------------------------
-- Copyright 2020 Vector Informatik, GmbH. --
---------------------------------------------
*/

/* Defined variable usage for this file:

   Variable names that are indented apply only if the enclosing variable is set

   <<no defined variables set>>    : Output is written to the file TESTINSS.DAT

   VCAST_USE_STDOUT                : Output is written to stdout using puts
      VCAST_USE_PUTCHAR            : Output is written to stdout using putchar
      VCAST_USE_GH_SYSCALL         : Output is written to stdout using the GH syscall
                                     (For Green Hills INTEGRITY 178B)

   VCAST_CUSTOM_STD_OUTPUT         : custom user code required to write Output 
                                     to stdout or serial port interface
                                   : Need to also define VCAST_USE_STDOUT in order
                                     to set the stdout flag. 

   VCAST_CUSTOM_FILE_OUTPUT        : custom user file i/o code required to write 
                                     Output to TESTINSS.DAT 

   VCAST_USE_STD_STRING            : This define turns ON the use of memset from the
                                     system header string.h.

   VCAST_USE_STATIC_MEMORY         : No malloc is available, use alternate data.
      VCAST_MAX_MCDC_STATEMENTS    : The number of MCDC statement conditions 
                                     that can be reached when malloc is not 
                                     available. 
   VCAST_MAX_COVERED_SUBPROGRAMS   : The number of subprograms that may be
                                     covered. 
   VCAST_ENABLE_DATA_CLEAR_API     : Enable this macro to add the API
                                     VCAST_CLEAR_COVERAGE_DATA, which allows
                                     you to clear the currently collected
                                     coverage data during the execution of
                                     the instrumented executable.
   VCAST_ATTRIBUTE_CODE            : Allows the user to specify an attribute
                                     that will be placed before the ascii, 
                                     binary and subprogram coverage pool 
                                     global variables. This is useful for 
                                     putting this data in specific places
                                     in memory.
   VCAST_DUMP_CALLBACK             : If this is defined to a function name, 
                                     then when the user calls 
                                     VCAST_DUMP_COVERAGE_DATA, the function
                                     this was defined to will be called. The 
                                     purpose is to allow the users main loop
                                     to be given a chance to run within a 
                                     certain time frame.
   VCAST_FLUSH_DATA                : Use the flush system call after each
                                     string is written with fprintf in
                                     VCAST_WRITE_TO_INST_FILE_COVERAGE. The
                                     default is disabled. Define to any value
                                     to enable.
   VCAST_APPEND_WIN32_PID          : Append the process id to the TESTINSS.DAT
                                     file. This uses windows specific system
                                     calls to get the pid.
   VCAST_APPEND_POSIX_PID          : Append the process id to the TESTINSS.DAT
                                     file. This uses Posix specific system
                                     calls to get the pid.
   VCAST_APPEND_SECONDS_SINCE_EPOCH: Append the number of seconds since the
                                     epoch to the TESTINSS.DAT
                                     file. This uses the C library time() call.
*/

#ifndef __C_COVER_H__
#define __C_COVER_H__

#ifdef __cplusplus
extern "C" {
#endif

#ifndef VCAST_PRINTF_INTEGER 
#define VCAST_PRINTF_INTEGER "%d"
#endif
#ifndef VCAST_PRINTF_STRING
#define VCAST_PRINTF_STRING "%s"
#endif

#ifndef VCAST_MCDC_STORAGE_TYPE
#ifdef VCAST_UNSIGNED_LONG_MCDC_STORAGE
#define VCAST_MCDC_STORAGE_TYPE unsigned long
#else 
#ifdef VCAST_HAS_LONGLONG
#ifdef VCAST_MICROSOFT_LONG_LONG
#define VCAST_MCDC_STORAGE_TYPE unsigned __int64
#else 
#define VCAST_MCDC_STORAGE_TYPE unsigned long long
#endif /* VCAST_MICROSOFT_LONG_LONG */
#else 
#define VCAST_MCDC_STORAGE_TYPE unsigned long
#endif /* VCAST_HAS_LONGLONG */
#endif /* VCAST_UNSIGNED_LONG_MCDC_STORAGE */
#endif /* VCAST_MCDC_STORAGE_TYPE */

#ifdef __CUDACC__
/* Instrumentation for CUDA files replaces the "kernel launch"
 * syntax's triple-angle-brackets with a function-like 
 * VCAST_CUDA_KERNEL_LAUNCH() syntax for ease of parsing. 
 * This macro restores the original syntax so nvcc can 
 * process the file.
 */
#define VCAST_CUDA_KERNEL_LAUNCH(...) <<< __VA_ARGS__ >>>
#endif

/* CUDA-specific function decorators */
#ifdef __CUDA_ARCH__
#define VCAST_CUDA_HOST_DEVICE_FUNCTION __host__ __device__
#else
#define VCAST_CUDA_HOST_DEVICE_FUNCTION
#endif

/* AVL prototypes */
typedef struct vcast_mcdc_statement* VCAST_elementType;
struct VCAST_AVLNode;
typedef struct VCAST_AVLNode *VCAST_position;
typedef struct VCAST_AVLNode *VCAST_AVLTree;
VCAST_position vcast_find (VCAST_elementType VCAST_X, VCAST_AVLTree VCAST_T);
VCAST_AVLTree vcast_insert (VCAST_elementType VCAST_X, VCAST_AVLTree VCAST_T);

struct vcast_mcdc_statement
{
  VCAST_MCDC_STORAGE_TYPE mcdc_bits;
  VCAST_MCDC_STORAGE_TYPE mcdc_bits_used;
};
typedef struct vcast_mcdc_statement *vcast_mcdc_statement_ptr;

void VCAST_REGISTER_DUMP_AT_EXIT (void);
void VCAST_CLEAR_COVERAGE_DATA (void);
void VCAST_DUMP_COVERAGE_DATA (void);

int VCAST_WRITE_FN_CALL_ID(int unit, int id);
int VCAST_WRITE_STATEMENT_ID(int unit, int id);
int VCAST_WRITE_BRANCH_ID(int unit, int id, const char* TorF);
int VCAST_WRITE_OPTIMIZED_MCDC_ID(int unit, int id, char num_conditions,
                                  VCAST_MCDC_STORAGE_TYPE mcdc_bits, 
                                  VCAST_MCDC_STORAGE_TYPE mcdc_bits_used);
int VCAST_WRITE_FUNCTION_ID(int unit, int id);

int VCAST_WRITE_GLOBAL_FN_CALL_ID(int id);
int VCAST_WRITE_GLOBAL_STATEMENT_ID(int id);
int VCAST_WRITE_GLOBAL_BRANCH_ID(int id, const char* TorF);
int VCAST_WRITE_GLOBAL_OPTIMIZED_MCDC_ID(int id, char num_conditions,
                                         VCAST_MCDC_STORAGE_TYPE mcdc_bits, 
                                         VCAST_MCDC_STORAGE_TYPE mcdc_bits_used);
int VCAST_WRITE_GLOBAL_FUNCTION_ID(int id);

#ifdef VCAST_COVERAGE_POINTS_AS_MACROS

/*
 * The instrumentation macros provide an alternative to the
 * instrumentation point functions, which are used by default. If you
 * need to add additional statements to the instrumentation points, we
 * suggest modifying the functions, and not the macros. First, ensure
 * the "Instrument using macros in c_cover.h" option is disabled and
 * then modify the functions of the same names in the c_cover_io.c file.
 *
 * The instrumentation point macros must be expressions or a
 * comma-separated list of expressions. To use them, enable the
 * "Instrument using macros in c_cover.h" option and reinstrument all
 * source files. Modification of the macros is allowed, but very
 * difficult.  You are strongly encouranged to verify coverage data when
 * using modified macros.
 */

#ifdef VCAST_GLOBAL_BUFFER_OPTIMIZATIONS
#ifdef VCAST_PACK_INSTRUMENTATION_STORAGE
#define VCAST_GLOBAL_FN_CALL_INSTRUMENTATION_POINT_REALTIME(id) (\
  ((vcast_coverage_bytes[id >> 3] & (((unsigned long)1) << id % 8)) == 0) ? \
  (vcast_coverage_bytes[id >> 3] |= (((unsigned long)1) << id % 8),         \
   VCAST_WRITE_GLOBAL_FN_CALL_ID(id)) : 1                       \
)
#else
#define VCAST_GLOBAL_FN_CALL_INSTRUMENTATION_POINT_REALTIME(id) (\
  (vcast_coverage_bytes[id] == 0) ? (vcast_coverage_bytes[id] = 1, VCAST_WRITE_GLOBAL_FN_CALL_ID(id)) : 1 \
)
#endif /* VCAST_PACK_INSTRUMENTATION_STORAGE */
#else
#ifdef VCAST_PACK_INSTRUMENTATION_STORAGE
#define VCAST_FN_CALL_INSTRUMENTATION_POINT_REALTIME(covdata, unit, id) (\
  ((covdata[id >> 3] & (((unsigned long)1) << id % 8)) == 0) ? \
  (covdata[id >> 3] |= (((unsigned long)1) << id % 8),         \
   VCAST_WRITE_FN_CALL_ID(unit, id)) : 1                       \
)
#else
#define VCAST_FN_CALL_INSTRUMENTATION_POINT_REALTIME(covdata, unit, id) (\
  (covdata[id] == 0) ? (covdata[id] = 1, VCAST_WRITE_FN_CALL_ID(unit, id)) : 1 \
)
#endif /* VCAST_PACK_INSTRUMENTATION_STORAGE */
#endif /* VCAST_GLOBAL_BUFFER_OPTIMIZATIONS */

/*************************************/
/* Use CUDA device-side code/buffer */
#ifdef __CUDA_ARCH__
#define VCAST_FN_CALL_INSTRUMENTATION_POINT_BUFFERED(covdata, id) (\
    atomicOr(&(((int*)(covdata ## _device))[id >> 5]),\
                (((unsigned long)1) << (id % 32)) ) )
/* Host-side code */
#else
#ifdef VCAST_GLOBAL_BUFFER_OPTIMIZATIONS
#ifdef VCAST_PACK_INSTRUMENTATION_STORAGE
#define VCAST_GLOBAL_FN_CALL_INSTRUMENTATION_POINT_BUFFERED(id) (  \
  vcast_coverage_bytes[id >> 3] |= (((unsigned long)1) << (id % 8)) \
)
#else
#define VCAST_GLOBAL_FN_CALL_INSTRUMENTATION_POINT_BUFFERED(id) (\
  vcast_coverage_bytes[id] = 1 \
)
#endif /* VCAST_PACK_INSTRUMENTATION_STORAGE */
#else
#if defined(VCAST_PACK_INSTRUMENTATION_STORAGE)
#define VCAST_FN_CALL_INSTRUMENTATION_POINT_BUFFERED(covdata, id) (\
  covdata[id >> 3] |= (((unsigned long)1) << (id % 8)) \
)
#else
#define VCAST_FN_CALL_INSTRUMENTATION_POINT_BUFFERED(covdata, id) (\
  covdata[id] = 1 \
)
#endif /* VCAST_PACK_INSTRUMENTATION_STORAGE */
#endif /* VCAST_GLOBAL_BUFFER_OPTIMIZATIONS */
#endif /* __CUDA_ARCH__ */
/*************************************/


#ifdef VCAST_GLOBAL_BUFFER_OPTIMIZATIONS
#define VCAST_GLOBAL_FN_CALL_INSTRUMENTATION_POINT_ANIMATION(id) (\
  VCAST_WRITE_GLOBAL_FN_CALL_ID(id) \
)
#else
#define VCAST_FN_CALL_INSTRUMENTATION_POINT_ANIMATION(unit, id) (\
  VCAST_WRITE_FN_CALL_ID(unit, id) \
)
#endif

#ifdef VCAST_GLOBAL_BUFFER_OPTIMIZATIONS
#if !defined(VCAST_PACK_INSTRUMENTATION_STORAGE)
#define VCAST_GLOBAL_STATEMENT_INSTRUMENTATION_POINT_REALTIME(id) ( \
  (vcast_coverage_bytes[id] == 0) ? (vcast_coverage_bytes[id] = 1, VCAST_WRITE_GLOBAL_STATEMENT_ID(id)) : 1 \
)
#else
#define VCAST_GLOBAL_STATEMENT_INSTRUMENTATION_POINT_REALTIME(id) ( \
  ((vcast_coverage_bytes[id >> 3] & (((unsigned long)1) << id % 8)) == 0) ? \
  (vcast_coverage_bytes[id >> 3] |= (((unsigned long)1) << id % 8), \
   VCAST_WRITE_GLOBAL_STATEMENT_ID(id)) : 1 \
)
#endif
#else
#if !defined(VCAST_PACK_INSTRUMENTATION_STORAGE)
#define VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(covdata, unit, id) (\
  (covdata[id] == 0) ? (covdata[id] = 1, VCAST_WRITE_STATEMENT_ID(unit, id)) : 1 \
)
#else
#define VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(covdata, unit, id) (\
  ((covdata[id >> 3] & (((unsigned long)1) << id % 8)) == 0) ? \
  (covdata[id >> 3] |= (((unsigned long)1) << id % 8), \
   VCAST_WRITE_STATEMENT_ID(unit, id)) : 1 \
)
#endif
#endif /* VCAST_GLOBAL_BUFFER_OPTIMIZATIONS */

/*************************************/
/* Use CUDA device-side code/buffer */
#ifdef __CUDA_ARCH__
#define VCAST_STATEMENT_INSTRUMENTATION_POINT_BUFFERED(covdata, id) \
   ( atomicOr(&(((int*)(covdata ## _device))[id >> 5]), (((unsigned long)1) << (id % 32))) )
/* Host-side code */
#else
#if !defined(VCAST_PACK_INSTRUMENTATION_STORAGE)
#ifdef VCAST_GLOBAL_BUFFER_OPTIMIZATIONS
#define VCAST_GLOBAL_STATEMENT_INSTRUMENTATION_POINT_BUFFERED(id) (\
  vcast_coverage_bytes[id] = 1 \
)
#else
#define VCAST_STATEMENT_INSTRUMENTATION_POINT_BUFFERED(covdata, id) (\
  covdata[id] = 1 \
)
#endif /* VCAST_GLOBAL_BUFFER_OPTIMIZATIONS */
#else
#ifdef VCAST_GLOBAL_BUFFER_OPTIMIZATIONS
#define VCAST_GLOBAL_STATEMENT_INSTRUMENTATION_POINT_BUFFERED(id) (\
  vcast_coverage_bytes[id >> 3] |= (((unsigned long)1) << (id % 8)) \
)
#else
#define VCAST_STATEMENT_INSTRUMENTATION_POINT_BUFFERED(covdata, id) (\
  covdata[id >> 3] |= (((unsigned long)1) << (id % 8)) \
)
#endif /* VCAST_GLOBAL_BUFFER_OPTIMIZATIONS */
#endif
#endif /* __CUDA_ARCH__ */
/*************************************/

#ifdef VCAST_GLOBAL_BUFFER_OPTIMIZATIONS
#define VCAST_GLOBAL_STATEMENT_INSTRUMENTATION_POINT_ANIMATION(id) (\
  VCAST_WRITE_GLOBAL_STATEMENT_ID(id) \
)
#else
#define VCAST_STATEMENT_INSTRUMENTATION_POINT_ANIMATION(unit, id) (\
  VCAST_WRITE_STATEMENT_ID(unit, id) \
)
#endif

#ifdef VCAST_GLOBAL_BUFFER_OPTIMIZATIONS
#if !defined(VCAST_PACK_INSTRUMENTATION_STORAGE)
#define VCAST_GLOBAL_BRANCH_INSTRUMENTATION_POINT_REALTIME(id, condition) ( \
  condition ? \
  ((vcast_coverage_bytes[id * 2] == 0) ? (vcast_coverage_bytes[id * 2] = 1, VCAST_WRITE_GLOBAL_BRANCH_ID(id, "T"), 1) : 1) \
  : \
  ((vcast_coverage_bytes[id * 2 + 1] == 0) ? (vcast_coverage_bytes[id * 2 + 1] = 1, VCAST_WRITE_GLOBAL_BRANCH_ID(id, "F"), 0) : 0) \
)
#define VCAST_GLOBAL_SINGLE_BRANCH_INSTRUMENTATION_POINT_REALTIME(id, condition) ( \
  (vcast_coverage_bytes[id] == 0) ? (vcast_coverage_bytes[id] = 1, VCAST_WRITE_GLOBAL_BRANCH_ID(id, "S"), condition) : condition \
)
#else
#define VCAST_GLOBAL_BRANCH_INSTRUMENTATION_POINT_REALTIME(id, condition) ( \
  condition ? \
  (((vcast_coverage_bytes[id >> 2] & (((unsigned long)1) << (id % 4 << 1))) == 0) ?       \
   (vcast_coverage_bytes[id >> 2] |= (((unsigned long)1) << (id % 4 << 1)),               \
    VCAST_WRITE_GLOBAL_BRANCH_ID(id, "T"), 1) : 1)                       \
  : \
  (((vcast_coverage_bytes[id >> 2] & (((unsigned long)1) << ((id % 4 << 1) + 1))) == 0) ?   \
   (vcast_coverage_bytes[id >> 2] |= (((unsigned long)1) << ((id % 4 << 1) + 1)),       \
    VCAST_WRITE_GLOBAL_BRANCH_ID(id, "F"), 0) : 0)          \
)
#define VCAST_GLOBAL_SINGLE_BRANCH_INSTRUMENTATION_POINT_REALTIME(id, condition) ( \
  ((vcast_coverage_bytes[id >> 3] & (((unsigned long)1) << (id % 8))) == 0) ? \
  (vcast_coverage_bytes[id >> 3] |= (((unsigned long)1) << (id % 8)), (VCAST_WRITE_GLOBAL_BRANCH_ID(id, "S"), condition)) \
  : condition \
)
#endif
#else
#if !defined(VCAST_PACK_INSTRUMENTATION_STORAGE)
#define VCAST_BRANCH_INSTRUMENTATION_POINT_REALTIME(covdata, unit, id, condition) ( \
  condition ? \
  ((covdata[id * 2] == 0) ? (covdata[id * 2] = 1, VCAST_WRITE_BRANCH_ID(unit, id, "T"), 1) : 1) \
  : \
  ((covdata[id * 2 + 1] == 0) ? (covdata[id * 2 + 1] = 1, VCAST_WRITE_BRANCH_ID(unit, id, "F"), 0) : 0) \
)
#else
#define VCAST_BRANCH_INSTRUMENTATION_POINT_REALTIME(covdata, unit, id, condition) ( \
  condition ? \
  (((covdata[id >> 2] & (((unsigned long)1) << (id % 4 << 1))) == 0) ?       \
   (covdata[id >> 2] |= (((unsigned long)1) << (id % 4 << 1)),               \
    VCAST_WRITE_BRANCH_ID(unit, id, "T"), 1) : 1)                       \
  : \
  (((covdata[id >> 2] & (((unsigned long)1) << ((id % 4 << 1) + 1))) == 0) ?   \
   (covdata[id >> 2] |= (((unsigned long)1) << ((id % 4 << 1) + 1)),       \
    VCAST_WRITE_BRANCH_ID(unit, id, "F"), 0) : 0)          \
)
#endif
#endif /* VCAST_GLOBAL_BUFFER_OPTIMIZATIONS */

/*************************************/
/* Use CUDA device-side code/buffer */
#ifdef __CUDA_ARCH__
#define VCAST_BRANCH_INSTRUMENTATION_POINT_BUFFERED(covdata, id, condition) \
   ( condition ? \
      (atomicOr(&(((int*)(covdata ## _device))[id >> 4]), (((unsigned long)1) << (id % 16 << 1))), 1) \
      : \
      (atomicOr(&(((int*)(covdata ## _device))[id >> 4]), (((unsigned long)1) << ((id % 16 << 1) + 1))), 0) )
/* Host-side code */
#else
#ifdef VCAST_GLOBAL_BUFFER_OPTIMIZATIONS
#if !defined(VCAST_PACK_INSTRUMENTATION_STORAGE)
#define VCAST_GLOBAL_BRANCH_INSTRUMENTATION_POINT_BUFFERED(id, condition) ( \
  condition ? \
  ((vcast_coverage_bytes[id * 2] == 0) ? (vcast_coverage_bytes[id * 2] = 1, 1) : 1) \
  : \
  ((vcast_coverage_bytes[id * 2 + 1] == 0) ? (vcast_coverage_bytes[id * 2 + 1] = 1, 0) : 0) \
)
#define VCAST_GLOBAL_SINGLE_BRANCH_INSTRUMENTATION_POINT_BUFFERED(id, condition) (\
  (vcast_coverage_bytes[id] = 1, condition) \
)
#else
#define VCAST_GLOBAL_BRANCH_INSTRUMENTATION_POINT_BUFFERED(id, condition) (\
  condition ? \
  (vcast_coverage_bytes[id >> 2] |= (((unsigned long)1) << (id % 4 << 1)), 1)     \
  : \
  (vcast_coverage_bytes[id >> 2] |= (((unsigned long)1) << ((id % 4 << 1) + 1)), 0)     \
)
#define VCAST_GLOBAL_SINGLE_BRANCH_INSTRUMENTATION_POINT_BUFFERED(id, condition) (\
  (vcast_coverage_bytes[id >> 3] |= (((unsigned long)1) << (id % 8)), condition) \
)
#endif
#else
#if !defined(VCAST_PACK_INSTRUMENTATION_STORAGE)
#define VCAST_BRANCH_INSTRUMENTATION_POINT_BUFFERED(covdata, id, condition) ( \
  condition ? \
  ((covdata[id * 2] == 0) ? (covdata[id * 2] = 1, 1) : 1) \
  : \
  ((covdata[id * 2 + 1] == 0) ? (covdata[id * 2 + 1] = 1, 0) : 0) \
)
#define VCAST_SINGLE_BRANCH_INSTRUMENTATION_POINT_BUFFERED(covdata, id, condition) (\
  (covdata[id] = 1, condition) \
)
#else
#define VCAST_BRANCH_INSTRUMENTATION_POINT_BUFFERED(covdata, id, condition) (\
  condition ? \
  (covdata[id >> 2] |= (((unsigned long)1) << (id % 4 << 1)), 1)     \
  : \
  (covdata[id >> 2] |= (((unsigned long)1) << ((id % 4 << 1) + 1)), 0)     \
)
#define VCAST_SINGLE_BRANCH_INSTRUMENTATION_POINT_BUFFERED(covdata, id, condition) (\
  (covdata[id >> 3] |= (((unsigned long)1) << (id % 8)), condition) \
)
#endif
#endif /* VCAST_GLOBAL_BUFFER_OPTIMIZATIONS */
#endif
/*************************************/

#ifdef VCAST_GLOBAL_BUFFER_OPTIMIZATIONS
#define VCAST_GLOBAL_BRANCH_INSTRUMENTATION_POINT_ANIMATION(id, condition, onPath) ( \
  condition ? \
  (VCAST_WRITE_GLOBAL_BRANCH_ID(id, onPath ? "T" : "TX"), 1)      \
  : \
  (VCAST_WRITE_GLOBAL_BRANCH_ID(id, onPath ? "F" : "FX"), 0)      \
)

#define VCAST_GLOBAL_SINGLE_BRANCH_INSTRUMENTATION_POINT_ANIMATION(id, condition, onPath) ( \
  (VCAST_WRITE_GLOBAL_BRANCH_ID(id, "S"), condition)      \
)
#else /* VCAST_GLOBAL_BUFFER_OPTIMIZATIONS */
#define VCAST_BRANCH_INSTRUMENTATION_POINT_ANIMATION(unit, id, condition, onPath) ( \
  condition ? \
  (VCAST_WRITE_BRANCH_ID(unit, id, onPath ? "T" : "TX"), 1)      \
  : \
  (VCAST_WRITE_BRANCH_ID(unit, id, onPath ? "F" : "FX"), 0)      \
)
#endif /* VCAST_GLOBAL_BUFFER_OPTIMIZATIONS */

#ifdef VCAST_GLOBAL_BUFFER_OPTIMIZATIONS
#define VCAST_GLOBAL_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_REALTIME_0(id, condition) (\
  condition ?                                                                                \
  (((vcast_coverage_bytes[id >> 2] & ((((unsigned long)0x3) << ((id << 1) % 8)))) == 0) ?     \
    (vcast_coverage_bytes[id >> 2] |= ((((unsigned long)0x3) << ((id << 1) % 8))),            \
     VCAST_WRITE_GLOBAL_OPTIMIZED_MCDC_ID(id, 'a', (VCAST_MCDC_STORAGE_TYPE)1,(VCAST_MCDC_STORAGE_TYPE)1), 1) : 1) \
      :                                                                                      \
      (((vcast_coverage_bytes[id >> 2] & ((((unsigned long)0x1) << ((id << 1) % 8)))) == 0) ? \
       (vcast_coverage_bytes[id >> 2] |= ((((unsigned long)0x1) << ((id << 1) % 8))),         \
        VCAST_WRITE_GLOBAL_OPTIMIZED_MCDC_ID(id, 'a', (VCAST_MCDC_STORAGE_TYPE)0, (VCAST_MCDC_STORAGE_TYPE)1), 0) : 0) \
)
#else /* VCAST_GLOBAL_BUFFER_OPTIMIZATIONS */
#define VCAST_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_REALTIME_0(covdata, unit, id, condition) (\
  condition ?                                                                                \
  (((covdata[id >> 2] & ((((unsigned long)0x3) << ((id << 1) % 8)))) == 0) ?     \
    (covdata[id >> 2] |= ((((unsigned long)0x3) << ((id << 1) % 8))),            \
     VCAST_WRITE_OPTIMIZED_MCDC_ID(unit, id, 'a', (VCAST_MCDC_STORAGE_TYPE)1,(VCAST_MCDC_STORAGE_TYPE)1), 1) : 1) \
      :                                                                                      \
      (((covdata[id >> 2] & ((((unsigned long)0x1) << ((id << 1) % 8)))) == 0) ? \
       (covdata[id >> 2] |= ((((unsigned long)0x1) << ((id << 1) % 8))),         \
        VCAST_WRITE_OPTIMIZED_MCDC_ID(unit, id, 'a', (VCAST_MCDC_STORAGE_TYPE)0, (VCAST_MCDC_STORAGE_TYPE)1), 0) : 0) \
)
#endif /* VCAST_GLOBAL_BUFFER_OPTIMIZATIONS */

/*************************************/
/* Use CUDA device-side code/buffer */
#ifdef __CUDA_ARCH__
#define VCAST_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_BUFFERED_0(covdata, id, condition) \
   ( condition ? \
      (atomicOr(&(((int*)(covdata ## _device))[id >> 4]), (((unsigned long)0x3) << ((id << 1) % 32))), 1) \
      : \
      (atomicOr(&(((int*)(covdata ## _device))[id >> 4]), (((unsigned long)0x1) << ((id << 1) % 32))), 0) )
/* Host-side code */
#else
#ifdef VCAST_GLOBAL_BUFFER_OPTIMIZATIONS
#define VCAST_GLOBAL_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_BUFFERED_0(id, condition) (\
  condition ?                                                                      \
  (vcast_coverage_bytes[id >> 2] |= ((((unsigned long)0x3) << ((id << 1) % 8))), 1) \
  :                                                                                \
  (vcast_coverage_bytes[id >> 2] |= ((((unsigned long)0x1) << ((id << 1) % 8))), 0) \
)
#else
#define VCAST_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_BUFFERED_0(covdata, id, condition) (\
  condition ?                                                                      \
  (covdata[id >> 2] |= ((((unsigned long)0x3) << ((id << 1) % 8))), 1) \
  :                                                                                \
  (covdata[id >> 2] |= ((((unsigned long)0x1) << ((id << 1) % 8))), 0) \
)
#endif
#endif
/*************************************/

#ifdef VCAST_GLOBAL_BUFFER_OPTIMIZATIONS
#if !defined(VCAST_PACK_INSTRUMENTATION_STORAGE)
#define VCAST_GLOBAL_FUNCTION_INSTRUMENTATION_POINT_REALTIME(id) ( \
  (vcast_coverage_bytes[id] == 0) ? (vcast_coverage_bytes[id] = 1, VCAST_WRITE_GLOBAL_FUNCTION_ID(id)) : 1 \
)
#else
#define VCAST_GLOBAL_FUNCTION_INSTRUMENTATION_POINT_REALTIME(id) ( \
  ((vcast_coverage_bytes[id >> 3] & (((unsigned long)1) << id % 8)) == 0) ? \
  (vcast_coverage_bytes[id >> 3] |= (((unsigned long)1) << id % 8), \
   VCAST_WRITE_GLOBAL_FUNCTION_ID(id)) : 1 \
)
#endif
#else
#if !defined(VCAST_PACK_INSTRUMENTATION_STORAGE)
#define VCAST_FUNCTION_INSTRUMENTATION_POINT_REALTIME(covdata, unit, id) (\
  (covdata[id] == 0) ? (covdata[id] = 1, VCAST_WRITE_FUNCTION_ID(unit, id)) : 1 \
)
#else
#define VCAST_FUNCTION_INSTRUMENTATION_POINT_REALTIME(covdata, unit, id) (\
  ((covdata[id >> 3] & (((unsigned long)1) << id % 8)) == 0) ? \
  (covdata[id >> 3] |= (((unsigned long)1) << id % 8), \
   VCAST_WRITE_FUNCTION_ID(unit, id)) : 1 \
)
#endif
#endif /* VCAST_GLOBAL_BUFFER_OPTIMIZATIONS */

/*************************************/
/* Use CUDA device-side code/buffer */
#ifdef __CUDA_ARCH__
#define VCAST_FUNCTION_INSTRUMENTATION_POINT_BUFFERED(covdata, id) \
   ( atomicOr(&(((int*)(covdata ## _device))[id >> 5]), \
   (((unsigned long)1) << (id % 32))) )
/* Host-side code */
#else
#ifdef VCAST_GLOBAL_BUFFER_OPTIMIZATIONS
#ifdef VCAST_PACK_INSTRUMENTATION_STORAGE
#define VCAST_GLOBAL_FUNCTION_INSTRUMENTATION_POINT_BUFFERED(id) (\
  vcast_coverage_bytes[id >> 3] |= (((unsigned long)1) << (id % 8)) \
)
#else
#define VCAST_GLOBAL_FUNCTION_INSTRUMENTATION_POINT_BUFFERED(id) (\
  vcast_coverage_bytes[id] = 1 \
)
#endif /* VCAST_PACK_INSTRUMENTATION_STORAGE */
#else
#if defined(VCAST_PACK_INSTRUMENTATION_STORAGE)
#define VCAST_FUNCTION_INSTRUMENTATION_POINT_BUFFERED(covdata, id) (\
  covdata[id >> 3] |= (((unsigned long)1) << (id % 8)) \
)
#else
#define VCAST_FUNCTION_INSTRUMENTATION_POINT_BUFFERED(covdata, id) (\
  covdata[id] = 1 \
)
#endif /* VCAST_PACK_INSTRUMENTATION_STORAGE */
#endif /* VCAST_GLOBAL_BUFFER_OPTIMIZATIONS */
#endif /* __CUDA_ARCH__ */
/*************************************/

#ifdef VCAST_GLOBAL_BUFFER_OPTIMIZATIONS
#define VCAST_GLOBAL_FUNCTION_INSTRUMENTATION_POINT_ANIMATION(id) (\
  VCAST_WRITE_GLOBAL_FUNCTION_ID(id) \
)
#else
#define VCAST_FUNCTION_INSTRUMENTATION_POINT_ANIMATION(unit, id) (\
  VCAST_WRITE_FUNCTION_ID(unit, id) \
)
#endif

#else

int VCAST_FN_CALL_INSTRUMENTATION_POINT_REALTIME(char* covdata, int unit, int id);
int VCAST_GLOBAL_FN_CALL_INSTRUMENTATION_POINT_REALTIME(int id);
VCAST_CUDA_HOST_DEVICE_FUNCTION
int VCAST_FN_CALL_INSTRUMENTATION_POINT_BUFFERED(char* covdata, int id);
VCAST_CUDA_HOST_DEVICE_FUNCTION
int VCAST_GLOBAL_FN_CALL_INSTRUMENTATION_POINT_BUFFERED(int id);
int VCAST_FN_CALL_INSTRUMENTATION_POINT_ANIMATION(int unit, int id);
int VCAST_GLOBAL_FN_CALL_INSTRUMENTATION_POINT_ANIMATION(int id);
int VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(char* covdata, int unit, int id);
int VCAST_GLOBAL_STATEMENT_INSTRUMENTATION_POINT_REALTIME(int id);
VCAST_CUDA_HOST_DEVICE_FUNCTION
int VCAST_STATEMENT_INSTRUMENTATION_POINT_BUFFERED(char* covdata, int id);
VCAST_CUDA_HOST_DEVICE_FUNCTION
int VCAST_GLOBAL_STATEMENT_INSTRUMENTATION_POINT_BUFFERED(int id);
int VCAST_STATEMENT_INSTRUMENTATION_POINT_ANIMATION(int unit, int id);
int VCAST_GLOBAL_STATEMENT_INSTRUMENTATION_POINT_ANIMATION(int id);
int VCAST_BRANCH_INSTRUMENTATION_POINT_REALTIME(char* covdata, int unit, int id, VCAST_CONDITION_TYP condition);
int VCAST_SINGLE_BRANCH_INSTRUMENTATION_POINT_REALTIME(char* covdata, int unit, int id, VCAST_CONDITION_TYP condition);
int VCAST_GLOBAL_BRANCH_INSTRUMENTATION_POINT_REALTIME(int id, VCAST_CONDITION_TYP condition);
int VCAST_GLOBAL_SINGLE_BRANCH_INSTRUMENTATION_POINT_REALTIME(int id, VCAST_CONDITION_TYP condition);
VCAST_CUDA_HOST_DEVICE_FUNCTION
int VCAST_BRANCH_INSTRUMENTATION_POINT_BUFFERED(char* covdata, int id, VCAST_CONDITION_TYP condition);
int VCAST_GLOBAL_BRANCH_INSTRUMENTATION_POINT_BUFFERED(int id, VCAST_CONDITION_TYP condition);
int VCAST_SINGLE_BRANCH_INSTRUMENTATION_POINT_BUFFERED(char* covdata, int id, VCAST_CONDITION_TYP condition);
int VCAST_GLOBAL_SINGLE_BRANCH_INSTRUMENTATION_POINT_BUFFERED(int id, VCAST_CONDITION_TYP condition);
int VCAST_BRANCH_INSTRUMENTATION_POINT_ANIMATION(int unit, int id, VCAST_CONDITION_TYP condition, int onPath);
int VCAST_GLOBAL_BRANCH_INSTRUMENTATION_POINT_ANIMATION(int id, VCAST_CONDITION_TYP condition, int onPath);
int VCAST_GLOBAL_SINGLE_BRANCH_INSTRUMENTATION_POINT_ANIMATION(int id, VCAST_CONDITION_TYP condition, int onPath);
VCAST_CONDITION_TYP 
VCAST_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_REALTIME_0(char* covdata,
                                                                int unit, int id,
                                                                VCAST_CONDITION_TYP condition);
VCAST_CONDITION_TYP 
VCAST_GLOBAL_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_REALTIME_0(int id,
                                                                       VCAST_CONDITION_TYP condition);
VCAST_CUDA_HOST_DEVICE_FUNCTION
VCAST_CONDITION_TYP 
VCAST_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_BUFFERED_0(char* covdata,
                                                                int id,
                                                                VCAST_CONDITION_TYP condition);
VCAST_CONDITION_TYP 
VCAST_GLOBAL_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_BUFFERED_0(int id,
                                                                       VCAST_CONDITION_TYP condition);
int VCAST_FUNCTION_INSTRUMENTATION_POINT_REALTIME(char* covdata, int unit, int id);
int VCAST_GLOBAL_FUNCTION_INSTRUMENTATION_POINT_REALTIME(int id);
VCAST_CUDA_HOST_DEVICE_FUNCTION
int VCAST_FUNCTION_INSTRUMENTATION_POINT_BUFFERED(char* covdata, int id);
int VCAST_GLOBAL_FUNCTION_INSTRUMENTATION_POINT_BUFFERED(int id);
int VCAST_FUNCTION_INSTRUMENTATION_POINT_ANIMATION(int unit, int id);
int VCAST_GLOBAL_FUNCTION_INSTRUMENTATION_POINT_ANIMATION(int id);

/***************************************************************************/
/* For CUDA, remap calls on device side to use device-specific buffer name */
/* See corresponding #undefs in c_cover_io.c */ 
#ifdef __CUDA_ARCH__
/* Depending on the setting of "use macros for coverage" option, these will
 * either be macros above (which don't need remapping) or functions, which 
 * do. If functions, remap arguments. */
#define VCAST_FN_CALL_INSTRUMENTATION_POINT_BUFFERED(covdata, id) VCAST_FN_CALL_INSTRUMENTATION_POINT_BUFFERED(covdata ## _device, id)
#define VCAST_STATEMENT_INSTRUMENTATION_POINT_BUFFERED(covdata, id) VCAST_STATEMENT_INSTRUMENTATION_POINT_BUFFERED(covdata ## _device, id)
#define VCAST_BRANCH_INSTRUMENTATION_POINT_BUFFERED(covdata, id, condition) VCAST_BRANCH_INSTRUMENTATION_POINT_BUFFERED(covdata ## _device, id, condition)
#define VCAST_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_BUFFERED_0(covdata, id, condition) VCAST_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_BUFFERED_0(covdata ## _device, id, condition)
#define VCAST_FUNCTION_INSTRUMENTATION_POINT_BUFFERED(covdata, id) VCAST_FUNCTION_INSTRUMENTATION_POINT_BUFFERED(covdata ## _device, id)
#endif
/***************************************************************************/

#endif /* VCAST_COVERAGE_POINTS_AS_MACROS */

VCAST_CUDA_HOST_DEVICE_FUNCTION
VCAST_CONDITION_TYP
VCAST_SAVE_MCDC_SUBCONDITION (struct vcast_mcdc_statement *mcdc_statement,
                              int bit_index, VCAST_CONDITION_TYP condition);

VCAST_CONDITION_TYP 
VCAST_MCDC_CONDITION_INSTRUMENTATION_POINT_REALTIME(VCAST_AVLTree *vcast_mcdc_array,
                                                    struct vcast_mcdc_statement *mcdc_statement,
                                                    int unit, int id,
                                                    VCAST_CONDITION_TYP condition);
VCAST_CONDITION_TYP 
VCAST_GLOBAL_MCDC_CONDITION_INSTRUMENTATION_POINT_REALTIME(struct vcast_mcdc_statement *mcdc_statement,
                                                           int id,
                                                           VCAST_CONDITION_TYP condition);

VCAST_CONDITION_TYP 
VCAST_MCDC_CONDITION_INSTRUMENTATION_POINT_ANIMATION(struct vcast_mcdc_statement *mcdc_statement,
                                                     int unit, int id, VCAST_CONDITION_TYP condition);

VCAST_CONDITION_TYP 
VCAST_GLOBAL_MCDC_CONDITION_INSTRUMENTATION_POINT_ANIMATION(struct vcast_mcdc_statement *mcdc_statement,
                                                            int id, VCAST_CONDITION_TYP condition);

VCAST_CUDA_HOST_DEVICE_FUNCTION
VCAST_CONDITION_TYP 
VCAST_MCDC_CONDITION_INSTRUMENTATION_POINT_BUFFERED(VCAST_AVLTree *vcast_mcdc_array,
                                                    struct vcast_mcdc_statement *mcdc_statement,
                                                    int id,
                                                    VCAST_CONDITION_TYP condition);
VCAST_CONDITION_TYP 
VCAST_GLOBAL_MCDC_CONDITION_INSTRUMENTATION_POINT_BUFFERED(struct vcast_mcdc_statement *coverage,
                                                           int id,
                                                           VCAST_CONDITION_TYP condition);

VCAST_CONDITION_TYP 
VCAST_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_REALTIME_1(char* covdata,
                                                                struct vcast_mcdc_statement *mcdc_statement,
                                                                int unit, int id,
                                                                VCAST_CONDITION_TYP condition);
VCAST_CONDITION_TYP 
VCAST_GLOBAL_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_REALTIME_1(struct vcast_mcdc_statement *mcdc_statement,
                                                                       int id,
                                                                       VCAST_CONDITION_TYP condition);
VCAST_CONDITION_TYP 
VCAST_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_REALTIME(char* covdata,
                                                          struct vcast_mcdc_statement *mcdc_statement,
                                                          int unit, int id,
                                                          int num_conditions,
                                                          VCAST_CONDITION_TYP condition);
VCAST_CONDITION_TYP 
VCAST_GLOBAL_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_REALTIME(char* covdata,
                                                                     struct vcast_mcdc_statement *mcdc_statement,
                                                                     int id,
                                                                     int num_conditions,
                                                                     VCAST_CONDITION_TYP condition);

VCAST_CUDA_HOST_DEVICE_FUNCTION
VCAST_CONDITION_TYP 
VCAST_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_BUFFERED_1(char* covdata,
                                                                struct vcast_mcdc_statement *mcdc_statement,
                                                                int id,
                                                                VCAST_CONDITION_TYP condition);
VCAST_CONDITION_TYP 
VCAST_GLOBAL_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_BUFFERED_1(struct vcast_mcdc_statement *mcdc_statement,
                                                                       int id,
                                                                       VCAST_CONDITION_TYP condition);
VCAST_CUDA_HOST_DEVICE_FUNCTION
VCAST_CONDITION_TYP 
VCAST_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_BUFFERED_2(char* covdata,
                                                                struct vcast_mcdc_statement *mcdc_statement,
                                                                int id,
                                                                VCAST_CONDITION_TYP condition);

VCAST_CUDA_HOST_DEVICE_FUNCTION
VCAST_CONDITION_TYP 
VCAST_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_BUFFERED(char* covdata,
                                                              struct vcast_mcdc_statement *mcdc_statement,
                                                              int id,
                                                              int num_conditions,
                                                              VCAST_CONDITION_TYP condition);
VCAST_CONDITION_TYP 
VCAST_GLOBAL_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_BUFFERED(char* covdata,
                                                                     struct vcast_mcdc_statement *mcdc_statement,
                                                                     int id,
                                                                     int num_conditions,
                                                                     VCAST_CONDITION_TYP condition);

VCAST_CONDITION_TYP 
VCAST_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_ANIMATION(struct vcast_mcdc_statement *mcdc_statement,
                                                           int unit, int id,
                                                           int num_conditions,
                                                           VCAST_CONDITION_TYP condition);
                                                           
VCAST_CONDITION_TYP 
VCAST_GLOBAL_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_ANIMATION(struct vcast_mcdc_statement *mcdc_statement,
                                                                      int id,
                                                                      int num_conditions,
                                                                      VCAST_CONDITION_TYP condition);
                                                           
/***************************************************************************/
/* For CUDA, remap calls on device side to use device-specific buffer name */
/* See corresponding #undefs in c_cover_io.c */ 
#ifdef __CUDA_ARCH__
/* These will always be functions regardless of the "use macros for coverage" 
 * option, so do the redefine globally. */
#define VCAST_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_BUFFERED(covdata, statement, id, num_conditions, condition) VCAST_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_BUFFERED(covdata ## _device, statement, id, num_conditions, condition)
#define VCAST_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_BUFFERED_1(covdata, statement, id, condition) VCAST_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_BUFFERED_1(covdata ## _device, statement, id, condition)
#define VCAST_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_BUFFERED_2(covdata, statement, id, condition) VCAST_OPTIMIZED_MCDC_CONDITION_INSTRUMENTATION_POINT_BUFFERED_2(covdata ## _device, statement, id, condition)
#endif
/***************************************************************************/

int VCAST_COUPLING_INSTRUMENTATION_POINT (int vc_probeIndex);
void vcastDumpCouplingData (void);
void vcastCouplingDataInit (void);
int vcastControlCoupleTargetCall (int vc_probeIndex);
int vcastControlCoupleFptrCall (int probeIndex, void *fnCall, void *fnTarget);
int vcastControlCoupleVrtlCall (int vc_probeIndex);
                                                           
int vcast_strlen(const char *VC_S);
char * vcast_strcat (char *VC_S, const char *VC_T);
char * vcast_int_to_string (char *buf, VCAST_MCDC_STORAGE_TYPE vc_x);
void VCAST_WRITE_TO_INST_FILE_COVERAGE (const char *S, int flush);
                                                           

#ifndef VCAST_UNIT_TEST_TOOL

#ifdef VCAST_HAS_LONGLONG
  #ifdef VCAST_MICROSOFT_LONG_LONG
  #define VCAST_LONGEST_INT __int64
  #else
  #define VCAST_LONGEST_INT long long
  #endif
#else
  #define VCAST_LONGEST_INT long
#endif

#ifndef VCAST_UNSIGNED_CONVERSION_TYPE
#define VCAST_UNSIGNED_CONVERSION_TYPE unsigned VCAST_LONGEST_INT
#endif
#ifndef VCAST_SIGNED_CONVERSION_TYPE
#define VCAST_SIGNED_CONVERSION_TYPE VCAST_LONGEST_INT
#endif

/* types */
/* ifdef VCAST_NO_FLOAT */
#ifdef VCAST_NO_FLOAT
typedef long vCAST_double;
typedef long vCAST_long_double;
/* else */
#else
typedef double vCAST_double;
/* ifdef VCAST_ALLOW_LONG_DOUBLE */
#if defined(VCAST_ALLOW_LONG_DOUBLE) || !defined(VCAST_NO_LONG_DOUBLE)
typedef long double vCAST_long_double;
#else
typedef double vCAST_long_double;
#endif
/* endif VCAST_ALLOW_LONG_DOUBLE */
#endif
/* endif VCAST_NO_FLOAT */

VCAST_LONGEST_INT vcast_abs ( VCAST_LONGEST_INT vcNum );
void vectorcast_signed_to_string ( char vcDest[], VCAST_LONGEST_INT vcSrc );
int VCAST_special_compare ( char *vcDouble1, char *vcDouble2, int vcLen );
void vectorcast_strcpy ( char *VC_S, const char *VC_T );
void vectorcast_float_to_string( char *mixed_str, vCAST_long_double f );

/* This macro is always defined, because, it "tells" the c_cover_io.c 
   file that the prototypes are available to it. */
#define VCAST_PROBE_PRINT_AVAILABLE

void vcast_probe_print (const char *S);
void vcast_probe_print_int (VCAST_SIGNED_CONVERSION_TYPE i);
void vcast_probe_print_unsigned (VCAST_UNSIGNED_CONVERSION_TYPE i);
void vcast_probe_print_float (vCAST_long_double f);

#endif /* VCAST_UNIT_TEST_TOOL */

#ifdef __cplusplus
}
#endif

#endif

#ifdef __cplusplus
}
#endif
#ifdef __cplusplus
extern "C" {
#endif
extern char vcast_unit_stmt_bytes_9[];
#ifdef __cplusplus
} /* end extern */
#endif
enum StackErrorsT { E_OVERFLOW, E_UNDERFLOW };
template <typename T>
class Stack {
  public:
    /*vcast_internal_start*/
struct SBF___ct__16Stack__tm__4_Z1ZFUi_1601437447 {
  static unsigned char _SBF_enabled;
  void stub(unsigned maxSize);
};
/*vcast_internal_end*/
Stack(unsigned maxSize);
    /*vcast_internal_start*/
struct SBF_empty__16Stack__tm__4_Z1ZFv_b_2666998317 {
  static unsigned char _SBF_enabled;
  bool stub();
  Stack& _SBF_parent;
  SBF_empty__16Stack__tm__4_Z1ZFv_b_2666998317(Stack& __SBF_parent) : _SBF_parent(__SBF_parent) {}
};
/*vcast_internal_end*/
bool empty();
    /*vcast_internal_start*/
struct SBF___opb__16Stack__tm__4_Z1ZFv_695050629 {
  static unsigned char _SBF_enabled;
  bool stub();
  Stack& _SBF_parent;
  SBF___opb__16Stack__tm__4_Z1ZFv_695050629(Stack& __SBF_parent) : _SBF_parent(__SBF_parent) {}
};
/*vcast_internal_end*/
operator bool();
    /*vcast_internal_start*/
struct SBF_push__16Stack__tm__4_Z1ZFZ1Z_v_3177782385 {
  static unsigned char _SBF_enabled;
  void stub(T item);
  Stack& _SBF_parent;
  SBF_push__16Stack__tm__4_Z1ZFZ1Z_v_3177782385(Stack& __SBF_parent) : _SBF_parent(__SBF_parent) {}
};
/*vcast_internal_end*/
void push(T item) throw ( StackErrorsT );
    /*vcast_internal_start*/
struct SBF_pop__16Stack__tm__4_Z1ZFv_Z1Z_2876666714 {
  static unsigned char _SBF_enabled;
  T stub();
  Stack& _SBF_parent;
  SBF_pop__16Stack__tm__4_Z1ZFv_Z1Z_2876666714(Stack& __SBF_parent) : _SBF_parent(__SBF_parent) {}
};
/*vcast_internal_end*/
T pop() throw ( StackErrorsT );
    /*vcast_internal_start*/
struct SBF_count__16Stack__tm__4_Z1ZFv_Ui_2502702118 {
  static unsigned char _SBF_enabled;
  unsigned stub();
  Stack& _SBF_parent;
  SBF_count__16Stack__tm__4_Z1ZFv_Ui_2502702118(Stack& __SBF_parent) : _SBF_parent(__SBF_parent) {}
};
/*vcast_internal_end*/
unsigned count();
    /*vcast_internal_start*/
struct SBF_grow__16Stack__tm__4_Z1ZFUi_v_1856310542 {
  static unsigned char _SBF_enabled;
  void stub(unsigned newMax);
  Stack& _SBF_parent;
  SBF_grow__16Stack__tm__4_Z1ZFUi_v_1856310542(Stack& __SBF_parent) : _SBF_parent(__SBF_parent) {}
};
/*vcast_internal_end*/
void grow ( unsigned newMax ) throw ( StackErrorsT );
  public:
    struct ItemContainer {
      /*vcast_internal_start*/
struct SBF___ct__Q2_16Stack__tm__4_Z1Z13ItemContainerFZ1Z_121526501 {
  static unsigned char _SBF_enabled;
  void stub(T p);
};
/*vcast_internal_end*/
ItemContainer(T p) : item(p), next(0) {/*vcast_internal_start*/
if (SBF___ct__Q2_16Stack__tm__4_Z1Z13ItemContainerFZ1Z_121526501::_SBF_enabled) {
  SBF___ct__Q2_16Stack__tm__4_Z1Z13ItemContainerFZ1Z_121526501().stub(p);
  return;
}
/*vcast_internal_end*/
VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,0);
}
      T item;
      ItemContainer *next;
    };
    ItemContainer *mStack;
    unsigned mStackCount;
    unsigned mMaxSize;
};
template <typename T>
Stack<T>::Stack(unsigned maxSize) :
  mStack(0),
  mStackCount(0),
  mMaxSize(maxSize)
{/*vcast_internal_start*/
if (SBF___ct__16Stack__tm__4_Z1ZFUi_1601437447::_SBF_enabled) {
  SBF___ct__16Stack__tm__4_Z1ZFUi_1601437447().stub(maxSize);
  return;
}
/*vcast_internal_end*/
VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,1);
}
template <typename T>
bool Stack<T>::empty()
{/*vcast_internal_start*/
if (SBF_empty__16Stack__tm__4_Z1ZFv_b_2666998317::_SBF_enabled) {
  return SBF_empty__16Stack__tm__4_Z1ZFv_b_2666998317(*this).stub();
}
/*vcast_internal_end*/
  VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,2);
return !(bool)mStack;
}
template <typename T>
Stack<T>::operator bool()
{/*vcast_internal_start*/
if (SBF___opb__16Stack__tm__4_Z1ZFv_695050629::_SBF_enabled) {
  return SBF___opb__16Stack__tm__4_Z1ZFv_695050629(*this).stub();
}
/*vcast_internal_end*/
  VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,3);
return !empty();
}
template <typename T>
void Stack<T>::push(T item)
throw ( StackErrorsT )
{/*vcast_internal_start*/
if (SBF_push__16Stack__tm__4_Z1ZFZ1Z_v_3177782385::_SBF_enabled) {
  SBF_push__16Stack__tm__4_Z1ZFZ1Z_v_3177782385(*this).stub(item);
  return;
}
/*vcast_internal_end*/
  {
VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,4);
if (mStack) {
    if ( (VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,5),mStackCount >= mMaxSize) )
       {
VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,6);
throw E_OVERFLOW;}
    VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,7);
ItemContainer *tmp =
          new ItemContainer(item);
    if ( (VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,8),!tmp) )
       {
VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,9);
throw E_OVERFLOW;}
    VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,10);
tmp->next = mStack;
    VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,11);
mStack = tmp;
    VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,12);
mStackCount++;
  } else {
    VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,13);
mStack = new ItemContainer (item);
    VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,14);
mStackCount++;
    if ( (VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,15),!mStack) )
       {
VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,16);
throw E_OVERFLOW;}
  }}
}
template <typename T>
T Stack<T>::pop()
throw ( StackErrorsT )
{/*vcast_internal_start*/
if (SBF_pop__16Stack__tm__4_Z1ZFv_Z1Z_2876666714::_SBF_enabled) {
  return SBF_pop__16Stack__tm__4_Z1ZFv_Z1Z_2876666714(*this).stub();
}
/*vcast_internal_end*/
  {
VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,17);
if (empty()) {
    VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,18);
throw E_UNDERFLOW;
  }}
  VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,19);
T rtn = mStack->item;
  VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,20);
ItemContainer *tmp = mStack;
  VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,21);
mStack = mStack->next;
  VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,22);
delete tmp;
  VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,23);
mStackCount--;
  VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,24);
return rtn;
}
template <typename T>
unsigned Stack<T>::count()
{/*vcast_internal_start*/
if (SBF_count__16Stack__tm__4_Z1ZFv_Ui_2502702118::_SBF_enabled) {
  return SBF_count__16Stack__tm__4_Z1ZFv_Ui_2502702118(*this).stub();
}
/*vcast_internal_end*/
  VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,25);
return mStackCount;
}
template <typename T>
void Stack<T>::grow ( unsigned newMax ) throw(StackErrorsT)
{/*vcast_internal_start*/
if (SBF_grow__16Stack__tm__4_Z1ZFUi_v_1856310542::_SBF_enabled) {
  SBF_grow__16Stack__tm__4_Z1ZFUi_v_1856310542(*this).stub(newMax);
  return;
}
/*vcast_internal_end*/
  {
VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,26);
if ( newMax < mStackCount )
     {
VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,27);
throw E_OVERFLOW;}
}
  VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,28);
mMaxSize = newMax;
}
/*vcast_internal_start*/
unsigned P_9_1_1;
/*vcast_internal_end*/
/*vcast_internal_start*/
bool R_9_2;
/*vcast_internal_end*/
/*vcast_internal_start*/
bool R_9_3;
/*vcast_internal_end*/
/*vcast_internal_start*/
float P_9_4_1;
enum StackErrorsT E_9_4_0;
/*vcast_internal_end*/
/*vcast_internal_start*/
float R_9_5;
enum StackErrorsT E_9_5_0;
/*vcast_internal_end*/
/*vcast_internal_start*/
unsigned R_9_6;
/*vcast_internal_end*/
/*vcast_internal_start*/
unsigned P_9_7_1;
enum StackErrorsT E_9_7_0;
/*vcast_internal_end*/
/*vcast_internal_start*/
unsigned P_9_8_1;
/*vcast_internal_end*/
/*vcast_internal_start*/
bool R_9_9;
/*vcast_internal_end*/
/*vcast_internal_start*/
bool R_9_10;
/*vcast_internal_end*/
/*vcast_internal_start*/
int P_9_11_1;
enum StackErrorsT E_9_11_0;
/*vcast_internal_end*/
/*vcast_internal_start*/
int R_9_12;
enum StackErrorsT E_9_12_0;
/*vcast_internal_end*/
/*vcast_internal_start*/
unsigned R_9_13;
/*vcast_internal_end*/
/*vcast_internal_start*/
unsigned P_9_14_1;
enum StackErrorsT E_9_14_0;
/*vcast_internal_end*/
/*vcast_internal_start*/
float P_9_15_1;
/*vcast_internal_end*/
/*vcast_internal_start*/
int P_9_16_1;
/*vcast_internal_end*/
/*vcast_internal_start*/
#define VCAST_STUBBED_TEMPLATE_4178012948
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_4178012948
#define VCAST_STUBBED_TEMPLATE_2241338165
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_2241338165
template< class T> 
void Stack< T> ::ItemContainer::SBF___ct__Q2_16Stack__tm__4_Z1Z13ItemContainerFZ1Z_121526501::stub(T p) {
  Stack< T> ::ItemContainer::SBF___ct__Q2_16Stack__tm__4_Z1Z13ItemContainerFZ1Z_121526501::_SBF_enabled = 0;
  ItemContainer _SBF_dummy(p);
}
template< class T> 
unsigned char Stack< T> ::ItemContainer::SBF___ct__Q2_16Stack__tm__4_Z1Z13ItemContainerFZ1Z_121526501::_SBF_enabled = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
#define VCAST_STUBBED_TEMPLATE_1622493966
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_1622493966
#define VCAST_STUBBED_TEMPLATE_953572184
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_953572184
template< class T> 
void Stack< T> ::SBF___ct__16Stack__tm__4_Z1ZFUi_1601437447::stub(unsigned maxSize) {
  Stack< T> ::SBF___ct__16Stack__tm__4_Z1ZFUi_1601437447::_SBF_enabled = 0;
  Stack< T>  _SBF_dummy(maxSize);
}
template< class T> 
unsigned char Stack< T> ::SBF___ct__16Stack__tm__4_Z1ZFUi_1601437447::_SBF_enabled = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
#define VCAST_STUBBED_TEMPLATE_3027053020
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_3027053020
#define VCAST_STUBBED_TEMPLATE_910016013
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_910016013
template< class T> 
bool Stack< T> ::SBF_empty__16Stack__tm__4_Z1ZFv_b_2666998317::stub() {
  Stack< T> ::SBF_empty__16Stack__tm__4_Z1ZFv_b_2666998317::_SBF_enabled = 0;
  return this->_SBF_parent.empty();
}
template< class T> 
unsigned char Stack< T> ::SBF_empty__16Stack__tm__4_Z1ZFv_b_2666998317::_SBF_enabled = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
#define VCAST_STUBBED_TEMPLATE_3446060922
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_3446060922
#define VCAST_STUBBED_TEMPLATE_3325751367
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_3325751367
template< class T> 
bool Stack< T> ::SBF___opb__16Stack__tm__4_Z1ZFv_695050629::stub() {
  Stack< T> ::SBF___opb__16Stack__tm__4_Z1ZFv_695050629::_SBF_enabled = 0;
  return this->_SBF_parent.operator bool();
}
template< class T> 
unsigned char Stack< T> ::SBF___opb__16Stack__tm__4_Z1ZFv_695050629::_SBF_enabled = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
#define VCAST_STUBBED_TEMPLATE_2064609495
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_2064609495
#define VCAST_STUBBED_TEMPLATE_2370240574
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_2370240574
template< class T> 
void Stack< T> ::SBF_push__16Stack__tm__4_Z1ZFZ1Z_v_3177782385::stub(T item) {
  Stack< T> ::SBF_push__16Stack__tm__4_Z1ZFZ1Z_v_3177782385::_SBF_enabled = 0;
  this->_SBF_parent.push(item);
}
template< class T> 
unsigned char Stack< T> ::SBF_push__16Stack__tm__4_Z1ZFZ1Z_v_3177782385::_SBF_enabled = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
#define VCAST_STUBBED_TEMPLATE_4018297964
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_4018297964
#define VCAST_STUBBED_TEMPLATE_432680069
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_432680069
template< class T> 
T Stack< T> ::SBF_pop__16Stack__tm__4_Z1ZFv_Z1Z_2876666714::stub() {
  Stack< T> ::SBF_pop__16Stack__tm__4_Z1ZFv_Z1Z_2876666714::_SBF_enabled = 0;
  return this->_SBF_parent.pop();
}
template< class T> 
unsigned char Stack< T> ::SBF_pop__16Stack__tm__4_Z1ZFv_Z1Z_2876666714::_SBF_enabled = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
#define VCAST_STUBBED_TEMPLATE_851654740
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_851654740
#define VCAST_STUBBED_TEMPLATE_3281357441
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_3281357441
template< class T> 
unsigned Stack< T> ::SBF_count__16Stack__tm__4_Z1ZFv_Ui_2502702118::stub() {
  Stack< T> ::SBF_count__16Stack__tm__4_Z1ZFv_Ui_2502702118::_SBF_enabled = 0;
  return this->_SBF_parent.count();
}
template< class T> 
unsigned char Stack< T> ::SBF_count__16Stack__tm__4_Z1ZFv_Ui_2502702118::_SBF_enabled = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
#define VCAST_STUBBED_TEMPLATE_47424539
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_47424539
#define VCAST_STUBBED_TEMPLATE_4085585614
#include "vcast_stubbed_templates.cpp"
#undef VCAST_STUBBED_TEMPLATE_4085585614
template< class T> 
void Stack< T> ::SBF_grow__16Stack__tm__4_Z1ZFUi_v_1856310542::stub(unsigned newMax) {
  Stack< T> ::SBF_grow__16Stack__tm__4_Z1ZFUi_v_1856310542::_SBF_enabled = 0;
  this->_SBF_parent.grow(newMax);
}
template< class T> 
unsigned char Stack< T> ::SBF_grow__16Stack__tm__4_Z1ZFUi_v_1856310542::_SBF_enabled = 0;
/*vcast_internal_end*/

