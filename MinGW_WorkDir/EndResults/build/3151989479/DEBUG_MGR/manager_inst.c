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
extern char vcast_unit_branch_bytes_9[];
extern char vcast_unit_single_branch_bytes_9[];
#ifdef __cplusplus
} /* end extern */
#endif
/*vcast_header_expansion_start:C:/VCAST/Environments/Git_Test/SourceFiles/ctypes.h*/
enum boolean { v_false, v_true };
enum soups { NO_SOUP, ONION, CHOWDER };
enum salads { NO_SALAD, CAESAR, GREEN };
enum entrees { NO_ENTREE, STEAK, CHICKEN, LOBSTER, PASTA };
enum desserts { NO_DESSERT, CAKE, PIE, FRUIT };
enum beverages { NO_BEVERAGE, WINE, BEER, MIXED_DRINK, SODA };
struct order_type
{
  enum soups Soup;
  enum salads Salad;
  enum entrees Entree;
  enum desserts Dessert;
  enum beverages Beverage;
};
typedef unsigned short seat_index_type;
typedef unsigned short table_index_type;
struct table_data_type
{
  enum boolean Is_Occupied;
  seat_index_type Number_In_Party;
  char Designator;
  char Wait_Person[10];
  struct order_type Order[4];
  float Check_Total;
};
typedef char name_type[32];
/*vcast_header_expansion_end*/
#include "c:/vcast/mingw/include/stdio.h"
/*vcast_header_expansion_start:C:/VCAST/Environments/Git_Test/SourceFiles/database.h*/
extern int log_tax_receipts( float this_tax_ttl );
extern struct table_data_type Get_Table_Record(table_index_type Table);
extern void Update_Table_Record(table_index_type Table, float check_total, struct table_data_type Data);
/*vcast_header_expansion_end*/
/* Allow 10 Parties to wait */
static name_type WaitingList[10];
static unsigned int WaitingListSize = 0;
static unsigned int WaitingListIndex = 0;
const struct order_type NULL_ORDER =
      {NO_SOUP, NO_SALAD, NO_ENTREE, NO_DESSERT, NO_BEVERAGE};
/*

 *  This function adds in the tax & tip and returns a new check total

 *  It will either use the tax passed in as a user parameter, or it will

 *  use the global variable (default_tax) if it is non-zero.

 *

 */
static int log_err_cnt=0;
static float state_tax = .03;
static float default_tax = .05;
float Add_Tax_Tip( float check_total, float sales_tax, float tip )
{/*vcast_internal_start*/
extern float P_9_1_1;
extern float P_9_1_2;
extern float P_9_1_3;
extern float R_9_1;
extern unsigned char SBF_9_1;
if(SBF_9_1) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_3904200724
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_3904200724
  if ( vcast_is_in_driver ) {
    P_9_1_1 = check_total;
    P_9_1_2 = sales_tax;
    P_9_1_3 = tip;
    vCAST_COMMON_STUB_PROC_9( 9, 1, 4, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_3904200724
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_3904200724
  vCAST_USER_CODE_TIMER_START();
  return R_9_1;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
    float new_total, tax;
    int log_err;
    VCAST_BRANCH_INSTRUMENTATION_POINT_REALTIME(vcast_unit_branch_bytes_9,9,0,1);
if ( VCAST_BRANCH_INSTRUMENTATION_POINT_REALTIME(vcast_unit_branch_bytes_9,9,1,(VCAST_CONDITION_TYP)(sales_tax > 0)))
    {
        VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,0);
tax = sales_tax;
    }
    else {
if ( VCAST_BRANCH_INSTRUMENTATION_POINT_REALTIME(vcast_unit_branch_bytes_9,9,2,(VCAST_CONDITION_TYP)(sales_tax == 0)))
    {
        VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,1);
tax = default_tax;
    }
    else
    {
        VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,2);
tax = 0;
    }}
    VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,3);
log_err = log_tax_receipts( tax*check_total );
    if ( VCAST_BRANCH_INSTRUMENTATION_POINT_REALTIME(vcast_unit_branch_bytes_9,9,3,(VCAST_CONDITION_TYP)(log_err)))
    {
        VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,4);
log_err_cnt++;
        VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,5);
printf("\nError in Logging Tax Receipts\n");
    }
    VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,6);
new_total = check_total * (1 + tax + tip);
    VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,7);
return( new_total );
/*vcast_internal_start*/}/*vcast_internal_end*/
}
/* This function will add a free dessert to specific orders based on the 

   entree, salad, and beverage choice. */
int Add_Included_Dessert(struct order_type* Order)
{/*vcast_internal_start*/
extern struct order_type *P_9_2_1;
extern int R_9_2;
extern unsigned char SBF_9_2;
if(SBF_9_2) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_1220426544
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_1220426544
  if ( vcast_is_in_driver ) {
    P_9_2_1 = Order;
    vCAST_COMMON_STUB_PROC_9( 9, 2, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_1220426544
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_1220426544
  vCAST_USER_CODE_TIMER_START();
  return R_9_2;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
  static int rc;
  VCAST_BRANCH_INSTRUMENTATION_POINT_REALTIME(vcast_unit_branch_bytes_9,9,4,1);
VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,8);
rc = 0; //Neither
  if( VCAST_BRANCH_INSTRUMENTATION_POINT_REALTIME(vcast_unit_branch_bytes_9,9,5,(VCAST_CONDITION_TYP)(Order->Entree == STEAK &&
     Order->Salad == CAESAR &&
     Order->Beverage == MIXED_DRINK)))
  {
    VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,9);
rc = 1;
    VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,10);
Order->Dessert = PIE;
  }
  else {
if( VCAST_BRANCH_INSTRUMENTATION_POINT_REALTIME(vcast_unit_branch_bytes_9,9,6,(VCAST_CONDITION_TYP)(Order->Entree == LOBSTER &&
          Order->Salad == GREEN &&
          Order->Beverage == WINE)))
  {
    VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,11);
rc = 2;
    VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,12);
Order->Dessert = CAKE;
  }}
  VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,13);
return(rc);
/*vcast_internal_start*/}/*vcast_internal_end*/
}
float Place_Order(table_index_type Table,
                seat_index_type Seat,
                struct order_type Order)
{/*vcast_internal_start*/
extern unsigned short P_9_3_1;
extern unsigned short P_9_3_2;
extern struct order_type P_9_3_3;
extern float R_9_3;
extern unsigned char SBF_9_3;
if(SBF_9_3) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_453126248
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_453126248
  if ( vcast_is_in_driver ) {
    P_9_3_1 = Table;
    P_9_3_2 = Seat;
    P_9_3_3 = Order;
    vCAST_COMMON_STUB_PROC_9( 9, 3, 4, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_453126248
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_453126248
  vCAST_USER_CODE_TIMER_START();
  return R_9_3;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
  int vcast_switch_taken_1 = 0;
struct table_data_type Table_Data;
  struct table_data_type *Table_Bfr;
  VCAST_BRANCH_INSTRUMENTATION_POINT_REALTIME(vcast_unit_branch_bytes_9,9,7,1);
VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,14);
Table_Data = Get_Table_Record(Table);
  VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,15);
Table_Data.Is_Occupied = v_true;
  VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,16);
Table_Data.Number_In_Party = Table_Data.Number_In_Party + 1;
  VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,17);
Table_Data.Order[Seat] = Order;
  /* Add a free dessert in some cases */
  VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,18);
Add_Included_Dessert(&Table_Data.Order[Seat]);
  {
VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,19);
{vcast_switch_taken_1 = 0;
switch(Order.Entree)
    {
    case NO_ENTREE :VCAST_BRANCH_INSTRUMENTATION_POINT_REALTIME(vcast_unit_branch_bytes_9,9,8,1);vcast_switch_taken_1 = 1;
       VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,20);
break;
    case STEAK :if (!vcast_switch_taken_1) VCAST_BRANCH_INSTRUMENTATION_POINT_REALTIME(vcast_unit_branch_bytes_9,9,9,1);vcast_switch_taken_1 = 1;
       VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,21);
Table_Data.Check_Total = Table_Data.Check_Total + 14;
       VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,22);
break;
    case CHICKEN :if (!vcast_switch_taken_1) VCAST_BRANCH_INSTRUMENTATION_POINT_REALTIME(vcast_unit_branch_bytes_9,9,10,1);vcast_switch_taken_1 = 1;
       VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,23);
Table_Data.Check_Total = Table_Data.Check_Total + 10;
       VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,24);
break;
    case LOBSTER :if (!vcast_switch_taken_1) VCAST_BRANCH_INSTRUMENTATION_POINT_REALTIME(vcast_unit_branch_bytes_9,9,11,1);vcast_switch_taken_1 = 1;
       VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,25);
Table_Data.Check_Total = Table_Data.Check_Total + 18;
       VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,26);
break;
    case PASTA :if (!vcast_switch_taken_1) VCAST_BRANCH_INSTRUMENTATION_POINT_REALTIME(vcast_unit_branch_bytes_9,9,12,1);vcast_switch_taken_1 = 1;
       VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,27);
Table_Data.Check_Total = Table_Data.Check_Total + 12;
       VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,28);
break;
    default:if (!vcast_switch_taken_1) VCAST_BRANCH_INSTRUMENTATION_POINT_REALTIME(vcast_unit_branch_bytes_9,9,13,1);vcast_switch_taken_1 = 1;
       VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,29);
printf( "Invalid Entree: %d", Order.Entree);
       VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,30);
break;
    }}
}
  VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,31);
Update_Table_Record(Table, Table_Data.Check_Total, Table_Data);
  VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,32);
return (Table_Data.Check_Total);
/*vcast_internal_start*/}/*vcast_internal_end*/
}
int Clear_Table(table_index_type Table)
{/*vcast_internal_start*/
extern unsigned short P_9_4_1;
extern int R_9_4;
extern unsigned char SBF_9_4;
if(SBF_9_4) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_2460377677
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_2460377677
  if ( vcast_is_in_driver ) {
    P_9_4_1 = Table;
    vCAST_COMMON_STUB_PROC_9( 9, 4, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_2460377677
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_2460377677
  vCAST_USER_CODE_TIMER_START();
  return R_9_4;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
  struct table_data_type Table_Data;
  seat_index_type Seat;
  VCAST_BRANCH_INSTRUMENTATION_POINT_REALTIME(vcast_unit_branch_bytes_9,9,14,1);
VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,33);
Table_Data = Get_Table_Record(Table);
  VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,34);
Table_Data.Is_Occupied = v_false;
  VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,35);
Table_Data.Number_In_Party = 1;
  VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,36);
printf("\nClear Table %d\n", Table);
  {
for (Seat=0;  VCAST_BRANCH_INSTRUMENTATION_POINT_REALTIME(vcast_unit_branch_bytes_9,9,15,(VCAST_CONDITION_TYP)(Seat < 4)); Seat++)
    {
VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,37);
Table_Data.Order[Seat] = NULL_ORDER;}
}
    VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,38);
Table_Data.Check_Total = 0;
  VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,39);
Update_Table_Record(Table, 0, Table_Data);
  VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,40);
return 0;
/*vcast_internal_start*/}/*vcast_internal_end*/
}
float Get_Check_Total(table_index_type Table)
{/*vcast_internal_start*/
extern unsigned short P_9_5_1;
extern float R_9_5;
extern unsigned char SBF_9_5;
if(SBF_9_5) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_3462039048
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_3462039048
  if ( vcast_is_in_driver ) {
    P_9_5_1 = Table;
    vCAST_COMMON_STUB_PROC_9( 9, 5, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_3462039048
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_3462039048
  vCAST_USER_CODE_TIMER_START();
  return R_9_5;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
  struct table_data_type Table_Data;
  VCAST_BRANCH_INSTRUMENTATION_POINT_REALTIME(vcast_unit_branch_bytes_9,9,16,1);
VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,41);
Table_Data = Get_Table_Record(Table);
  VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,42);
return (Table_Data.Check_Total);
/*vcast_internal_start*/}/*vcast_internal_end*/
}
void Add_Party_To_Waiting_List(char* Name)
{/*vcast_internal_start*/
extern char *P_9_6_1;
extern unsigned char SBF_9_6;
if(SBF_9_6) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_1361818386
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_1361818386
  if ( vcast_is_in_driver ) {
    P_9_6_1 = Name;
    vCAST_COMMON_STUB_PROC_9( 9, 6, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_1361818386
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_1361818386
  vCAST_USER_CODE_TIMER_START();
  return;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
  int i = (VCAST_BRANCH_INSTRUMENTATION_POINT_REALTIME(vcast_unit_branch_bytes_9,9,17,1),(VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,43),0));
  if( VCAST_BRANCH_INSTRUMENTATION_POINT_REALTIME(vcast_unit_branch_bytes_9,9,18,(VCAST_CONDITION_TYP)(WaitingListSize > 9)))
    {
VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,44);
WaitingListSize = 0;}
  {
while( VCAST_BRANCH_INSTRUMENTATION_POINT_REALTIME(vcast_unit_branch_bytes_9,9,19,(VCAST_CONDITION_TYP)(Name && *Name))) {
    VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,45);
WaitingList[WaitingListSize][i++] = *Name;
    VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,46);
Name++;
  }}
  VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,47);
WaitingList[WaitingListSize++][i] = 0;
/*vcast_internal_start*/}/*vcast_internal_end*/
}
char* Get_Next_Party_To_Be_Seated(void)
{/*vcast_internal_start*/
extern char *R_9_7;
extern unsigned char SBF_9_7;
if(SBF_9_7) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_11444024
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_11444024
  if ( vcast_is_in_driver ) {
    vCAST_COMMON_STUB_PROC_9( 9, 7, 1, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_11444024
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_11444024
  vCAST_USER_CODE_TIMER_START();
  return R_9_7;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
  VCAST_BRANCH_INSTRUMENTATION_POINT_REALTIME(vcast_unit_branch_bytes_9,9,20,1);
if( VCAST_BRANCH_INSTRUMENTATION_POINT_REALTIME(vcast_unit_branch_bytes_9,9,21,(VCAST_CONDITION_TYP)(WaitingListIndex > 9)))
    {
VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,48);
WaitingListIndex = 0;}
  VCAST_STATEMENT_INSTRUMENTATION_POINT_REALTIME(vcast_unit_stmt_bytes_9,9,49);
return WaitingList[WaitingListIndex++];
/*vcast_internal_start*/}/*vcast_internal_end*/
}
/*vcast_internal_start*/
float P_9_1_1;
float P_9_1_2;
float P_9_1_3;
float R_9_1;
unsigned char SBF_9_1 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
struct order_type *P_9_2_1;
int R_9_2;
unsigned char SBF_9_2 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
unsigned short P_9_3_1;
unsigned short P_9_3_2;
struct order_type P_9_3_3;
float R_9_3;
unsigned char SBF_9_3 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
unsigned short P_9_4_1;
int R_9_4;
unsigned char SBF_9_4 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
unsigned short P_9_5_1;
float R_9_5;
unsigned char SBF_9_5 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
char *P_9_6_1;
unsigned char SBF_9_6 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
char *R_9_7;
unsigned char SBF_9_7 = 0;
/*vcast_internal_end*/

