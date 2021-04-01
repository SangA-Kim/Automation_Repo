/*vcast_separate_expansion_start:S0000009.cpp*/
/***********************************************
 *      VectorCAST Test Harness Component      *
 *     Copyright 2021 Vector Informatik, GmbH.    *
 *              20.sp6 (02/02/21)              *
 ***********************************************/
/***********************************************
 * VectorCAST Unit Information
 *
 * Name: stack
 *
 * Path: C:/VCAST/Environments/Git_Test/SourceFiles/stack.cpp
 *
 * Type: stub-by-function
 *
 * Unit Number: 9
 *
 ***********************************************/
/*vcast_header_expansion_start:vcast_env_defines.h*/
/*vcast_header_expansion_end*/
/*vcast_header_expansion_start:stack_driver_prefix.c*/
/*vcast_header_expansion_end*/
/*vcast_header_expansion_start:S0000009.h*/
/***********************************************
 *      VectorCAST Test Harness Component      *
 *     Copyright 2021 Vector Informatik, GmbH.    *
 *              20.sp6 (02/02/21)              *
 ***********************************************/
/***********************************************
 *      VectorCAST Test Harness Component      *
 *     Copyright 2021 Vector Informatik, GmbH.    *
 *              20.sp6 (02/02/21)              *
 ***********************************************/
/*
---------------------------------------------
-- Copyright 2020 Vector Informatik, GmbH. --
---------------------------------------------
*/
/***********************************************
 *      VectorCAST Test Harness Component      *
 *     Copyright 2021 Vector Informatik, GmbH.    *
 *              20.sp6 (02/02/21)              *
 ***********************************************/
/*
---------------------------------------------
-- Copyright 2020 Vector Informatik, GmbH. --
---------------------------------------------
*/
/* setup for "long long" capability */
/* setup for Microsoft "long long" */
/* setup for MinGW "long long" formats */
/* setup for other "long long" formats */
/* end "long long" formats */
/* end "long long" support */
/* no "long long" support */
/* end "long long" check */
/***********************************************
 *      VectorCAST Test Harness Component      *
 *     Copyright 2021 Vector Informatik, GmbH.    *
 *              20.sp6 (02/02/21)              *
 ***********************************************/
/*
---------------------------------------------
-- Copyright 2020 Vector Informatik, GmbH. --
---------------------------------------------
*/
extern "C" {
/* ----------------------------------------------------------------------------
-- These funtions are called at the start and end of the test harenss
-- and contain conditionally compiled code to setup for the particular I/O
-- mode and in some case the particular target.
-------------------------------------------------------------------------------*/
void vectorcast_initialize_io (int inst_status, int inst_fd);
void vectorcast_terminate_io (void);
void vectorcast_write_vcast_end (void);
int vectorcast_fflush(int fpn);
void vectorcast_fclose(int fpn);
int vectorcast_feof(int fpn);
int vectorcast_fopen(const char *filename, const char *mode);
char *vectorcast_fgets (char *line, int maxline, int fpn);
/* return failure condition if the line we read is too long */
int vectorcast_readline(char *vcast_buf, int fpn);
void vectorcast_fprint_char (int fpn, char vcast_str);
void vectorcast_fprint_char_hex ( int fpn, char vcast_value );
void vectorcast_fprint_char_octl ( int fpn, char vcast_value );
void vectorcast_fprint_string (int fpn, const char *vcast_str);
void vectorcast_fprint_string_with_cr (int fpn, const char *vcast_str);
void vectorcast_print_string (const char *vcast_str);
void vectorcast_fprint_string_with_length(int fpn, const char *vcast_str, int length);
void vectorcast_fprint_short (int vcast_fpn, short vcast_value );
void vectorcast_fprint_integer (int vcast_fpn, int vcast_value );
void vectorcast_fprint_long (int vcast_fpn, long vcast_value );
void vectorcast_fprint_long_long (int vcast_fpn, long long vcast_value );
void vectorcast_fprint_unsigned_short (int vcast_fpn,
                                       unsigned short vcast_value );
void vectorcast_fprint_unsigned_integer (int vcast_fpn,
                                         unsigned int vcast_value );
void vectorcast_fprint_unsigned_long (int vcast_fpn,
                                      unsigned long vcast_value );
void vectorcast_fprint_unsigned_long_long (int vcast_fpn,
                                           unsigned long long vcast_value );
void vectorcast_fprint_long_float (int fpn, vCAST_long_double);
/* numeric conversion routines */
void vcast_signed_to_string ( char vcDest[],
                              long long vcSrc );
void vcast_unsigned_to_string ( char vcDest[],
                                unsigned long long vcSrc );
void vcast_float_to_string ( char *mixed_str, vCAST_long_double vcast_f );
/* ----------------------------------------------------------------------------
-- API for Harness Trace Functions
-----------------------------------------------------------------------------*/
/* To write output, the normal API is: vectorcast_print_string
   vectorcast_write_to_std_out should only be used for abnormal termination
   and debug trace messages */
void vectorcast_write_to_std_out (const char *s);
/*---------------------------------------------------------------------------*/
void vcast_char_to_based_string ( char vcDest[],
                                  unsigned char vcSrc,
                                  unsigned vcUseHex );
/* ----------------------------------------------------------------------------
-- To Save Output Size, for some targets using stdout mode, we output a 
-- number rather than a filename.  So for example, we put out: 
-- "1: data" instead of: "ASCIIRES.DAT: data"
-- JJP TBD: Not sure why this needs to be in the header --
-------------------------------------------------------------------------------*/
enum vcast_env_file_kind
{
   VCAST_ASCIIRES_DAT = 1,
   VCAST_EXPECTED_DAT = 2,
   VCAST_TEMP_DIF_DAT = 3,
   VCAST_TESTINSS_DAT = 4,
   VCAST_THISTORY_DAT = 5,
   VCAST_USERDATA_DAT = 6
};
/* Get the name of the file */
const char *vcast_get_filename(enum vcast_env_file_kind kind);
/* ----------------------------------------------------------------------------
-- Need to evaluate these items
-- JJP TBD
-------------------------------------------------------------------------------*/
/* -------------------------------------------------------------------------------*/
/* -------------------------------------------------------------------------------*/
/* End of File, close the Extern C block */
} /* extern "C" */
extern int vCAST_ITERATION_COUNTERS [3][25];
/***********************************************
 *      VectorCAST Test Harness Component      *
 *     Copyright 2021 Vector Informatik, GmbH.    *
 *              20.sp6 (02/02/21)              *
 ***********************************************/
/*
---------------------------------------------
-- Copyright 2020 Vector Informatik, GmbH. --
---------------------------------------------
*/
extern "C" {
extern vCAST_array_boolean vCAST_GLOBALS_TOUCHED[6];
} /* extern "C" */
enum vCAST_testcase_options_type {
        vCAST_MULTI_RETURN_SPANS_RANGE,
        vCAST_MULTI_RETURN_SPANS_COMPOUND_ITERATIONS,
        vCAST_DISPLAY_INTEGER_RESULTS_IN_HEX,
        vCAST_DISPLAY_FULL_STRING_DATA,
        vCAST_HEX_NOTATION_FOR_UNPRINTABLE_CHARS,
        vCAST_DO_COMBINATION,
        vCAST_REFERENCED_GLOBALS,
        vCAST_FLOAT_POINT_DIGITS_OF_PRECISION,
        vCAST_FLOAT_POINT_TOLERANCE,
        vCAST_EVENT_LIMIT,
        vCAST_GLOBAL_DATA_DISPLAY,
        vCAST_EXPECTED_BEFORE_UUT_CALL,
        vCAST_DATA_PARTITIONS,
        vCAST_SHOW_ONLY_DATA_WITH_EXPECTED_RESULTS,
        vCAST_SHOW_ONLY_EVENTS_WITH_EXPECTED_RESULTS};
enum vCAST_globals_display_type {
        vCAST_EACH_EVENT,
        vCAST_RANGE_ITERATION,
        vCAST_SLOT_ITERATION,
        vCAST_TESTCASE};
/*
---------------------------------------------
-- Copyright 2020 Vector Informatik, GmbH. --
---------------------------------------------
*/
/* -------------------------------------------------------------------------
   VC_PLATFORM controls the stuff that is included in the test harness
   there are currently two values supported: HOST and TARGET and the
   default is TARGET -> which is the same legacy harness we have always
   built.  Set -DVC_PLATFORM=HOST to omit the target stuff
----------------------------------------------------------------------------*/
/* Platform  */
/* -------------------------------------------------------------------------*/
/***********************************************
 *      VectorCAST Test Harness Component      *
 *     Copyright 2021 Vector Informatik, GmbH.    *
 *              20.sp6 (02/02/21)              *
 ***********************************************/
/*
---------------------------------------------
-- Copyright 2020 Vector Informatik, GmbH. --
---------------------------------------------
*/
/*************************************************************************
File : S0000004.c
Description : This file contains the declarations of functions in the 
   B0000004.c file.
***************************************************************************/
extern "C" {
void vCAST_INITIALIZE_PARAMETERS(void);
void vCAST_USER_CODE_INITIALIZE(int vcast_slot_index);
void vCAST_USER_CODE_CAPTURE (void);
void vCAST_USER_CODE_CAPTURE_GLOBALS (void);
void vCAST_ONE_SHOT_INIT(void);
void vCAST_ONE_SHOT_TERM(void);
void vCAST_GLOBAL_STUB_PROCESSING(void);
void vCAST_GLOBAL_BEGINNING_OF_STUB_PROCESSING(void);
typedef enum {
   VCAST_UCT_VALUE,
   VCAST_UCT_EXPECTED,
   VCAST_UCT_EXPECTED_GLOBALS
} VCAST_USER_CODE_TYPE;
void vCAST_USER_CODE( VCAST_USER_CODE_TYPE uct, int vcast_slot_index );
extern vCAST_boolean vcast_initializing;
}
/***********************************************
 *      VectorCAST Test Harness Component      *
 *     Copyright 2021 Vector Informatik, GmbH.    *
 *              20.sp6 (02/02/21)              *
 ***********************************************/
/*
---------------------------------------------
-- Copyright 2020 Vector Informatik, GmbH. --
---------------------------------------------
*/
#include "c:/vcast/mingw/lib/gcc/mingw32/6.3.0/include/c++/stdlib.h"
#include "c:/vcast/mingw/include/setjmp.h"
#include "c:/vcast/mingw/include/stdio.h"
#include "c:/vcast/mingw/include/string.h"
extern "C" {
/* Wrappers for malloc and realloc are provided in B2.c */
void * VCAST_malloc (unsigned int vcast_size);
long long VCAST_atoi (const char *vcast_str );
unsigned long long VCAST_strtoul(const char *vcast_nptr, char **vcast_endptr, int vcast_base);
int VCAST_signed_strlen (const signed char *vcast_str );
void VCAST_signed_strcpy ( signed char *VC_S, const signed char *VC_T );
}
extern "C" {
 extern jmp_buf VCAST_env;
}
/* This define use to define the temporary strings that we use
   when we are breaking down the harness commands like: "0.0.3.4%0\n"
   We use 8 because we do not expect a unit, subprogram, parameter, or field
   to be larger than 999999\n\0
*/
typedef long int vCAST_BIG_INT;
enum vCAST_COMMAND_TYPE { vCAST_SET_VAL,
                             vCAST_PRINT,
                             vCAST_FIRST_VAL,
                             vCAST_MID_VAL,
                             vCAST_LAST_VAL,
                             vCAST_POS_INF_VAL,
                             vCAST_NEG_INF_VAL,
                             vCAST_NAN_VAL,
                             vCAST_MIN_MINUS_1_VAL,
                             vCAST_MAX_PLUS_1_VAL,
                             vCAST_ZERO_VAL,
                             vCAST_KEEP_VAL,
                             vCAST_ALLOCATE,
                             vCAST_STUB_FUNCTION,
                             vCAST_FUNCTION };
struct vCAST_HIST_ENTRY {
  int VC_U;
  int VC_S;
};
struct vCAST_ORDER_ENTRY {
  int slotIterations; /* Slot Iteration Count */
  char testFilename[13]; /* C-*.DAT filename */
  char testName[1000]; /* Test Name */
  char slotDescriptor[1000];
  char printEventData[1000];
};
enum vcTypeOfRangeExpression {
   VCAST_NULL_TYPE = 0,
   VCAST_RANGE_TYPE,
   VCAST_LIST_TYPE
};
/* If the max range is not set by the user at all
   we default to 20 */
/* if the user explicitly sets the max range to be 0,
   it means they don't want range processing at all */
struct vcRangeDataType
{
  char *vCAST_COMMAND; /* command */
  enum vcTypeOfRangeExpression rangeType; /* Determines range, list or null */
  /* For Range */
  vCAST_long_double vCAST_MIN; /* Min value */
  vCAST_long_double vCAST_MAX; /* Max value */
  vCAST_long_double vCAST_INC; /* Increment value */
  /* For List */
  char *vCAST_list; /* The actual list values */
  /* Is integer */
  int isInteger; /* 1 if min/mid/max is integer, 0 otherwise */
  int vCAST_COMBO_GROUPING; /* Number of times to repeat a command for combination testing before resetting */
  int vCAST_NUM_VALS;
};
/* vCAST function prototypes */
extern "C" {
vCAST_double vCAST_power (short vcast_bits);
vCAST_long_double VCAST_itod ( char vcastStringParam[] );
void vCAST_SET_TESTCASE_CONFIGURATION_OPTIONS( int VCAST_option,int VCAST_value, int VCAST_set_default);
void vCAST_SET_TESTCASE_OPTIONS ( char vcast_options[] );
void vCAST_RUN_DATA_IF (const char *VCAST_PARAM, vCAST_boolean POST_CONSTRUCTOR_USER_CODE);
void vCAST_slice (char vcast_target[], const char vcast_source[], int vcast_first, int vcast_last);
void vCAST_EXTRACT_DATA_FROM_COMMAND_LINE (char *vcast_buf, char VCAST_PARAM[], int VC_POSITION);
void vCAST_STR_TO_LONG_DOUBLE(char vcastStringParam[], vCAST_long_double * vcastFloatParam);
void vCAST_DOUBLE_TO_STR (vCAST_long_double VC_F, char VC_S[], int VC_AS_INT);
void vCAST_RESET_LIST_VALUES(void);
void vCAST_ITERATION_COUNTER_RESET(void);
void vCAST_RESET_ITERATION_COUNTERS(enum vCAST_testcase_options_type );
int vCAST_GET_ITERATION_COUNTER_VALUE(int, int);
void vCAST_INCREMENT_ITERATION_COUNTER(int, int);
void vCAST_EXECUTE_RANGE_COMMANDS (int);
int vCAST_ITERATION_COUNTER_SWITCH(int);
/* if range processing is disabled, no need to do this stuff!*/
void vCAST_GET_RANGE_VALUES(char *vcast_S, struct vcRangeDataType *vcast_range_data);
void vCAST_MODIFY_SBF_TABLE(int sbf_unit, int vcast_sub, vCAST_boolean stubbed);
void vCAST_INITIALIZE_SBF_TABLE(void);
vCAST_boolean vCAST_is_sbf(long long vcast_unit, long long vcast_sub);
typedef unsigned char vcast_sbf_object_type;
void VCAST_TI_SBF_OBJECT(vcast_sbf_object_type* vcast_param);
void vCAST_RESET_RANGE_VALUES (void);
void vCAST_INITIALIZE_RANGE_VALUES (void);
void vcGetCommandDetails (const char* vcCommand, int* vcStartOfValue, int* vcNumberOfValues);
void vcResetRangeDataArray(void);
void vCAST_STORE_GLOBAL_ASCII_DATA (void);
void vCAST_CREATE_EVENT_FILE (void);
void vCAST_CREATE_HIST_FILE (void);
void vCAST_OPEN_HIST_FILE (void);
void vCAST_CREATE_INST_FILE (void);
void vCAST_openHarnessFiles (void);
void vCAST_closeHarnessFiles (void);
long VCAST_convert_encoded_field(const char *vcast_str);
/* Code coverage-related functions */
void vCAST_CREATE_INST_FILE (void);
void VCAST_WRITE_TO_INST_FILE (const char VC_S[]);
/* 

 * This is an auto generated file, DO NOT EDIT.

 * 

 * This file contains the instrumentation configuration and

 * coverage buffers that will be used during the execution

 * of the instrumented executable.

 * 

 * Occasionally this file needs to be edited, for example,

 * to put a storage array,

 *   char vcast_unit_stmt_bytes_1[5] = { 0 };

 * into a specific location in memory

 *   char *var = (char*)0x40000000;

 * 

 * This file is written each time the tool configuration is updated

 * or a source file instrumented. To automate editing this file,

 * navagite in the GUI to

 * Tools -> Options -> Misc -> Post-process vcast_c_options.h command

 */
/***************************************************

** VectorCAST Test Harness Component **

** Copyright 2021 Vector Informatik, GmbH. **

****************************************************/
/* An explanation for the number of bytes required for VectorCAST/Cover.

 * 

 * This represents the maximum amount of RAM that will be required

 * to record coverage data when 100% of your application is executed.

 * It is likely that only a percentage of this storage will be 

 * required during a single program execution.

 * 

 * Please note, when using the static memory option, all of this data 

 * must be reserved in the instrumented executable through global arrays.

 * When you are not using the static memory option, this data is not 

 * reserved in the instrumented executable, and it is allocated on 

 * demand through the use of the malloc system call.

 * 

 * When instrumenting for MCDC, the size of the variables 

 * mcdc_statement_pool and avlnode_pool are controlled with the option 

 * "Maximum MC/DC expressions". The default is set to 1000, 

 * so that a large test case can execute with out fear of 

 * over flowing these buffers. The number chosen (e.g. 1000) will 

 * provide storage for that many unique MC/DC expressions.

 * 

 * For a 16 bit executable configuration:

 *   Total (no MC/DC pool storage):......................................bytes:  0 *

 * 

 * For a 32 bit executable configuration:

 *   Total (no MC/DC pool storage):......................................bytes:  0 *

 * 

 * For a 64 bit executable configuration:

 *   Total (no MC/DC pool storage):......................................bytes:  0 *

 */
void vCAST_CLOSE_INST_FILE (void);
/* Coverage data */
void vCAST_CLOSE_INST_FILE (void);
void vCAST_CLOSE_EVENT_FILE (void);
void vCAST_CLOSE_HIST_FILE (void);
void vCAST_WRITE_END_FILE(void);
void vCAST_OPEN_E0_FILE (void);
void vcastSetHarnessOptionsFromFile(void);
void vcastSetTestCaseOptionsToDefault(void);
void vCAST_OPEN_TESTORDR_FILE (void);
void VCAST_READ_TESTORDER_LINE ( char[] );
void vCAST_STORE_ASCII_DATA ( int, int, const char* );
vCAST_boolean vCAST_READ_NEXT_ORDER (void);
vCAST_boolean vCAST_SHOULD_DISPLAY_GLOBALS ( int, const char*);
/* These helper functions are called from S3 during test execution */
void vcastStartOfSlot (void);
void vcastStartOfSlotIteration (void);
void vcastStartOfRangeIteration (void);
vCAST_boolean vcastEndOfIteration (int slotIteration, int rangeIteration);
void vcastGetKeyTestValues (void);
extern int vcast_user_file;
extern int VCAST_EXP_FILE;
extern int vCAST_UNIT;
extern int vCAST_SUBPROGRAM;
extern int vCAST_CURRENT_SLOT;
extern int vCAST_HIST_INDEX;
extern int vCAST_HIST_LIMIT;
extern int vCAST_ENV_HIST_LIMIT;
extern int vcRangeIterationsForThisTest;
extern int vCAST_RANGE_COUNTER;
extern int vcSlotIteration;
extern int vcRangeIteration;
extern vCAST_boolean vCAST_DO_DATA_IF;
extern vCAST_boolean vCAST_HAS_RANGE;
extern vCAST_boolean vCAST_SKIP_ITER;
extern int vcRangeDataIndex;
extern struct vcRangeDataType vcRangeCommands[];
extern struct vCAST_ORDER_ENTRY vCAST_ORDER_OBJECT;
extern vCAST_long_double vCAST_PARTITIONS;
extern int vCAST_INST_FILE;
/* file identificastion number for the ASCIIRES.DAT file */
extern int vCAST_ASCIIRES_FILE;
/* file identification number for the THISTORY.DAT file */
extern int vCAST_THISTORY_FILE;
extern int vCAST_ORDER_FILE;
extern int vCAST_E0_FILE;
/* file identification number for the TEMP_DIF.DAT file */
extern int vCAST_OUTPUT_FILE;
extern int vCAST_COUNT;
extern int vCAST_CURRENT_COUNT;
extern vCAST_array_boolean vCAST_TESTCASE_OPTIONS[15];
extern vCAST_boolean vcast_is_in_union;
extern vCAST_boolean vCAST_INST_FILE_OPEN;
/* true if the ASCIIRES.DAT file is open */
extern vCAST_boolean vCAST_ASCIIRES_FILE_OPEN;
/* true if the THISTORY.DAT file is open */
extern vCAST_boolean vCAST_THISTORY_FILE_OPEN;
/* default harness options (from HARNOPTS.DAT) */
extern vCAST_boolean VCAST_DEFAULT_FULL_STRINGS;
extern vCAST_boolean VCAST_DEFAULT_HEX_NOTATION;
extern vCAST_boolean VCAST_DEFAULT_DO_COMBINATION;
extern unsigned short VCAST_GLOBALS_DISPLAY; /* when to capture global data */
extern vCAST_boolean VCAST_GLOBAL_FIRST_EVENT;
extern vCAST_boolean vCAST_HEX_NOTATION; /* use hex notation or not */
extern vCAST_boolean vCAST_DO_COMBINATION_TESTING;/* generate combination or not */
void vCAST_signal(int sig);
void VCAST_driver_termination(int vcast_status, int eventCode);
int vcast_get_hc_id (char *vcast_command);
void vcast_get_unit_id_str (char *vcast_command, char *vcast_unit);
int vcast_get_unit_id (char *vcast_command);
void vcast_get_subprogram_id_str (char *vcast_command, char *vcast_subprogram);
int vcast_get_subprogram_id (char *vcast_command);
void vcast_get_parameter_id_str (char *vcast_command, char *vcast_subprogram);
int vcast_get_parameter_id (char *vcast_command);
int vcast_get_percent_pos (const char *vcast_command);
void vCAST_END(void);
void VCAST_SLOT_SEPARATOR ( vCAST_boolean VC_EndOfSlot);
void vcastInitializeS2Data (void);
void vcastInitializeB2Data (void);
void vCAST_RE_OPEN_HIST_FILE(void);
} /* extern "C" */
/* "limits.h" and "float.h" has limits on base types
   If we don't use it, or some types do
   not have limits, define them here */
#include "c:/vcast/mingw/include/limits.h"
#include "c:/vcast/mingw/lib/gcc/mingw32/6.3.0/include/float.h"
extern "C" {
/* FUNCTION PROTOTYPES */
void VCAST_get_indices(char *str_val, int *array_size);
void vCAST_signal(int sig);
void vcast_not_supported (void);
void vcast_get_range_value ( int *vCAST_FIRST_VAL,
                             int *vCAST_LAST_VAL);
int vcast_get_param (void);
int VCAST_FIND_INDEX (void);
/*------------------------------------------------------------------*/
vCAST_double vCAST_power (short vcast_bits);
void VCAST_TI_BITFIELD ( long long *vc_VAL, int Bits, vCAST_boolean is_signed );
void VCAST_TI_STRING (
      char **vcast_param,
      int from_bounded_array,
      int size_of_bounded_array );
int vcast_add_to_hex(int previousNumber, char latestDigit);
char vcast_get_non_numerical_escape(char character);
int vcast_convert_size(char * input);
char * VCAST_convert(char * input);
/* ASCII value of the first char that can be displayed */
/* ASCII value of the last char that can be displayed */
/**************************************************************************
Function: isUnprintable
Parameters: character - character to check
Description: This function returns true if the character it is given is
a nongraphical one. 
 *************************************************************************/
vCAST_boolean vcast_proc_handles_command(int vc_m);
void VCAST_SET_GLOBAL_SIZE(unsigned int *vcast_size);
unsigned int *VCAST_GET_GLOBAL_SIZE(void);
/* EXTERNED VARIABLES */
extern int vCAST_FILE;
extern char vCAST_PARAMETER[1000];
extern char vCAST_PARAMETER_KEY[1000];
extern long long vCAST_VALUE_INT;
extern unsigned long long vCAST_VALUE_UNSIGNED;
extern vCAST_long_double vCAST_VALUE;
extern int vCAST_PARAM_LENGTH;
extern int vCAST_INDEX;
extern int vCAST_DATA_FIELD;
extern int *VCAST_index_size;
extern int VCAST_index_count;
extern enum vCAST_COMMAND_TYPE vCAST_COMMAND;
extern vCAST_boolean vCAST_VALUE_NUL;
extern vCAST_boolean vCAST_can_print_constructor;
struct VCAST_CSU_Data_Item
{
  void *vcast_item;
  char *vcast_command;
  struct VCAST_CSU_Data_Item *vcast_next;
};
struct VCAST_CSU_Data;
void VCAST_Add_CSU_Data (struct VCAST_CSU_Data **vcast_data,
                         struct VCAST_CSU_Data_Item *vcast_data_item);
struct VCAST_CSU_Data_Item *VCAST_Get_CSU_Data (
                         struct VCAST_CSU_Data **vcast_data,
                         char *vcast_command);
void vcastInitializeB1Data(void);
}
void VCAST_DRIVER_8( int VC_SUBPROGRAM );
void VCAST_DRIVER_9( int VC_SUBPROGRAM );void VCAST_SBF_9( int VC_SUBPROGRAM );
/*vcast_header_expansion_end*/
#include "vcast_undef_9.h"
/* Include the file which contains function prototypes
for stub processing and value/expected user code */
/*vcast_header_expansion_start:vcast_uc_prototypes.h*/
void vCAST_VALUE_USER_CODE_8(int vcast_slot_index );
void vCAST_EXPECTED_USER_CODE_8(int vcast_slot_index );
void vCAST_EGLOBALS_USER_CODE_8(int vcast_slot_index );
void vCAST_STUB_PROCESSING_8(
        int UnitIndex,
        int SubprogramIndex );
void vCAST_BEGIN_STUB_PROC_8(
        int UnitIndex,
        int SubprogramIndex );
void vCAST_COMMON_STUB_PROC_8(
            int unitIndex,
            int subprogramIndex,
            int robjectIndex,
            int readEobjectData );
void vCAST_VALUE_USER_CODE_9(int vcast_slot_index );
void vCAST_EXPECTED_USER_CODE_9(int vcast_slot_index );
void vCAST_EGLOBALS_USER_CODE_9(int vcast_slot_index );
void vCAST_STUB_PROCESSING_9(
        int UnitIndex,
        int SubprogramIndex );
void vCAST_BEGIN_STUB_PROC_9(
        int UnitIndex,
        int SubprogramIndex );
void vCAST_COMMON_STUB_PROC_9(
            int unitIndex,
            int subprogramIndex,
            int robjectIndex,
            int readEobjectData );
void vCAST_VALUE_USER_CODE_9(int vcast_slot_index );
void vCAST_EXPECTED_USER_CODE_9(int vcast_slot_index );
void vCAST_EGLOBALS_USER_CODE_9(int vcast_slot_index );
void vCAST_STUB_PROCESSING_9(
        int UnitIndex,
        int SubprogramIndex );
void vCAST_BEGIN_STUB_PROC_9(
        int UnitIndex,
        int SubprogramIndex );
void vCAST_COMMON_STUB_PROC_9(
            int unitIndex,
            int subprogramIndex,
            int robjectIndex,
            int readEobjectData );
/*vcast_header_expansion_end*/
/*vcast_header_expansion_start:vcast_class_instances.h*/
/*vcast_header_expansion_end*/
class Stack< float> *C_1245370136_9;
class Stack< int> *C_1245371128_9;
struct Stack< float> ::ItemContainer *C_1245373112_9;
struct Stack< int> ::ItemContainer *C_1268516952_9;
extern class Stack< float> *C_1245370136_9;
;
extern struct Stack< float> ::ItemContainer *C_1245373112_9;
;
extern class Stack< int> *C_1245371128_9;
;
extern struct Stack< int> ::ItemContainer *C_1268516952_9;
;
/*vcast_header_expansion_start:vcast_stubs_9.c*/
/* Begin defined extern variables */
/* End defined extern variables */
/* Begin defined static member variables */
/* End defined static member variables */
/* BEGIN PROTOTYPE STUBS */
/* END PROTOTYPE STUBS */
/*vcast_header_expansion_end*/
/* begin declarations of inlined friends */
/* end declarations of inlined friends */
void VCAST_DRIVER_9( int VC_SUBPROGRAM ) {
  try {
    vCAST_MODIFY_SBF_TABLE(9, VC_SUBPROGRAM, vCAST_false);
    switch( VC_SUBPROGRAM ) {
      case 0:
        vCAST_SET_HISTORY_FLAGS ( 9, 0);
        vCAST_USER_CODE_TIMER_START();
        break;
      case 15: {
        /* Stack< float> ::ItemContainer::ItemContainer(float p) */
        vCAST_SET_HISTORY_FLAGS ( 9, 15 );
        vCAST_USER_CODE_TIMER_START();
        C_1245373112_9 = ::new
        struct Stack< float> ::ItemContainer (
          ( P_9_15_1 ) ) ;
        break; }
      case 16: {
        /* Stack< int> ::ItemContainer::ItemContainer(int p) */
        vCAST_SET_HISTORY_FLAGS ( 9, 16 );
        vCAST_USER_CODE_TIMER_START();
        C_1268516952_9 = ::new
        struct Stack< int> ::ItemContainer (
          ( P_9_16_1 ) ) ;
        break; }
      case 1: {
        /* Stack< float> ::Stack(unsigned maxSize) */
        vCAST_SET_HISTORY_FLAGS ( 9, 1 );
        vCAST_USER_CODE_TIMER_START();
        C_1245370136_9 = ::new
        class Stack< float> (
          ( P_9_1_1 ) ) ;
        break; }
      case 8: {
        /* Stack< int> ::Stack(unsigned maxSize) */
        vCAST_SET_HISTORY_FLAGS ( 9, 8 );
        vCAST_USER_CODE_TIMER_START();
        C_1245371128_9 = ::new
        class Stack< int> (
          ( P_9_8_1 ) ) ;
        break; }
      case 2: {
        /* bool Stack< float> ::empty() */
        if (C_1245370136_9 == (0)){
          vCAST_APPEND_HISTORY_FLAG('N');
        }
        vCAST_SET_HISTORY_FLAGS ( 9, 2 );
        vCAST_USER_CODE_TIMER_START();
        R_9_2 =
        ( C_1245370136_9->empty( ) );
        break; }
      case 9: {
        /* bool Stack< int> ::empty() */
        if (C_1245371128_9 == (0)){
          vCAST_APPEND_HISTORY_FLAG('N');
        }
        vCAST_SET_HISTORY_FLAGS ( 9, 9 );
        vCAST_USER_CODE_TIMER_START();
        R_9_9 =
        ( C_1245371128_9->empty( ) );
        break; }
      case 3: {
        /* Stack< float> ::operator bool() */
        if (C_1245370136_9 == (0)){
          vCAST_APPEND_HISTORY_FLAG('N');
        }
        vCAST_SET_HISTORY_FLAGS ( 9, 3 );
        vCAST_USER_CODE_TIMER_START();
        R_9_3 =
        ( C_1245370136_9->operator bool( ) );
        break; }
      case 10: {
        /* Stack< int> ::operator bool() */
        if (C_1245371128_9 == (0)){
          vCAST_APPEND_HISTORY_FLAG('N');
        }
        vCAST_SET_HISTORY_FLAGS ( 9, 10 );
        vCAST_USER_CODE_TIMER_START();
        R_9_10 =
        ( C_1245371128_9->operator bool( ) );
        break; }
      case 4: {
        /* void Stack< float> ::push(float item) */
        try {
          if (C_1245370136_9 == (0)){
            vCAST_APPEND_HISTORY_FLAG('N');
          }
          vCAST_SET_HISTORY_FLAGS ( 9, 4 );
          vCAST_USER_CODE_TIMER_START();
          ( C_1245370136_9->push(
            ( P_9_4_1 ) ) );
        } /* try */
        catch( StackErrorsT &vcast_exception ) {
          vCAST_USER_CODE_TIMER_STOP();
          E_9_4_0 = vcast_exception;
          vCAST_SET_HISTORY( 1000, 1 );
        }
        break; }
      case 11: {
        /* void Stack< int> ::push(int item) */
        try {
          if (C_1245371128_9 == (0)){
            vCAST_APPEND_HISTORY_FLAG('N');
          }
          vCAST_SET_HISTORY_FLAGS ( 9, 11 );
          vCAST_USER_CODE_TIMER_START();
          ( C_1245371128_9->push(
            ( P_9_11_1 ) ) );
        } /* try */
        catch( StackErrorsT &vcast_exception ) {
          vCAST_USER_CODE_TIMER_STOP();
          E_9_11_0 = vcast_exception;
          vCAST_SET_HISTORY( 1000, 4 );
        }
        break; }
      case 5: {
        /* float Stack< float> ::pop() */
        try {
          if (C_1245370136_9 == (0)){
            vCAST_APPEND_HISTORY_FLAG('N');
          }
          vCAST_SET_HISTORY_FLAGS ( 9, 5 );
          vCAST_USER_CODE_TIMER_START();
          R_9_5 =
          ( C_1245370136_9->pop( ) );
        } /* try */
        catch( StackErrorsT &vcast_exception ) {
          vCAST_USER_CODE_TIMER_STOP();
          E_9_5_0 = vcast_exception;
          vCAST_SET_HISTORY( 1000, 2 );
        }
        break; }
      case 12: {
        /* int Stack< int> ::pop() */
        try {
          if (C_1245371128_9 == (0)){
            vCAST_APPEND_HISTORY_FLAG('N');
          }
          vCAST_SET_HISTORY_FLAGS ( 9, 12 );
          vCAST_USER_CODE_TIMER_START();
          R_9_12 =
          ( C_1245371128_9->pop( ) );
        } /* try */
        catch( StackErrorsT &vcast_exception ) {
          vCAST_USER_CODE_TIMER_STOP();
          E_9_12_0 = vcast_exception;
          vCAST_SET_HISTORY( 1000, 5 );
        }
        break; }
      case 6: {
        /* unsigned Stack< float> ::count() */
        if (C_1245370136_9 == (0)){
          vCAST_APPEND_HISTORY_FLAG('N');
        }
        vCAST_SET_HISTORY_FLAGS ( 9, 6 );
        vCAST_USER_CODE_TIMER_START();
        R_9_6 =
        ( C_1245370136_9->count( ) );
        break; }
      case 13: {
        /* unsigned Stack< int> ::count() */
        if (C_1245371128_9 == (0)){
          vCAST_APPEND_HISTORY_FLAG('N');
        }
        vCAST_SET_HISTORY_FLAGS ( 9, 13 );
        vCAST_USER_CODE_TIMER_START();
        R_9_13 =
        ( C_1245371128_9->count( ) );
        break; }
      case 7: {
        /* void Stack< float> ::grow(unsigned newMax) */
        try {
          if (C_1245370136_9 == (0)){
            vCAST_APPEND_HISTORY_FLAG('N');
          }
          vCAST_SET_HISTORY_FLAGS ( 9, 7 );
          vCAST_USER_CODE_TIMER_START();
          ( C_1245370136_9->grow(
            ( P_9_7_1 ) ) );
        } /* try */
        catch( StackErrorsT &vcast_exception ) {
          vCAST_USER_CODE_TIMER_STOP();
          E_9_7_0 = vcast_exception;
          vCAST_SET_HISTORY( 1000, 3 );
        }
        break; }
      case 14: {
        /* void Stack< int> ::grow(unsigned newMax) */
        try {
          if (C_1245371128_9 == (0)){
            vCAST_APPEND_HISTORY_FLAG('N');
          }
          vCAST_SET_HISTORY_FLAGS ( 9, 14 );
          vCAST_USER_CODE_TIMER_START();
          ( C_1245371128_9->grow(
            ( P_9_14_1 ) ) );
        } /* try */
        catch( StackErrorsT &vcast_exception ) {
          vCAST_USER_CODE_TIMER_STOP();
          E_9_14_0 = vcast_exception;
          vCAST_SET_HISTORY( 1000, 6 );
        }
        break; }
      default:
        vectorcast_print_string("ERROR: Internal Tool Error\n");
        break;
    } /* switch */
    vCAST_USER_CODE_TIMER_STOP();
  } catch( ... ) {
    vCAST_USER_CODE_TIMER_STOP();
    vCAST_SET_HISTORY( 1000, 999 );
  }
}
void VCAST_SBF_9( int VC_SUBPROGRAM ) {
  switch( VC_SUBPROGRAM ) {
    case 15: {
      Stack< float> ::ItemContainer::SBF___ct__Q2_16Stack__tm__4_Z1Z13ItemContainerFZ1Z_121526501::_SBF_enabled = 0;
      break; }
    case 16: {
      Stack< int> ::ItemContainer::SBF___ct__Q2_16Stack__tm__4_Z1Z13ItemContainerFZ1Z_121526501::_SBF_enabled = 0;
      break; }
    case 1: {
      Stack< float> ::SBF___ct__16Stack__tm__4_Z1ZFUi_1601437447::_SBF_enabled = 0;
      break; }
    case 8: {
      Stack< int> ::SBF___ct__16Stack__tm__4_Z1ZFUi_1601437447::_SBF_enabled = 0;
      break; }
    case 2: {
      Stack< float> ::SBF_empty__16Stack__tm__4_Z1ZFv_b_2666998317::_SBF_enabled = 0;
      break; }
    case 9: {
      Stack< int> ::SBF_empty__16Stack__tm__4_Z1ZFv_b_2666998317::_SBF_enabled = 0;
      break; }
    case 3: {
      Stack< float> ::SBF___opb__16Stack__tm__4_Z1ZFv_695050629::_SBF_enabled = 0;
      break; }
    case 10: {
      Stack< int> ::SBF___opb__16Stack__tm__4_Z1ZFv_695050629::_SBF_enabled = 0;
      break; }
    case 4: {
      Stack< float> ::SBF_push__16Stack__tm__4_Z1ZFZ1Z_v_3177782385::_SBF_enabled = 0;
      break; }
    case 11: {
      Stack< int> ::SBF_push__16Stack__tm__4_Z1ZFZ1Z_v_3177782385::_SBF_enabled = 0;
      break; }
    case 5: {
      Stack< float> ::SBF_pop__16Stack__tm__4_Z1ZFv_Z1Z_2876666714::_SBF_enabled = 0;
      break; }
    case 12: {
      Stack< int> ::SBF_pop__16Stack__tm__4_Z1ZFv_Z1Z_2876666714::_SBF_enabled = 0;
      break; }
    case 6: {
      Stack< float> ::SBF_count__16Stack__tm__4_Z1ZFv_Ui_2502702118::_SBF_enabled = 0;
      break; }
    case 13: {
      Stack< int> ::SBF_count__16Stack__tm__4_Z1ZFv_Ui_2502702118::_SBF_enabled = 0;
      break; }
    case 7: {
      Stack< float> ::SBF_grow__16Stack__tm__4_Z1ZFUi_v_1856310542::_SBF_enabled = 0;
      break; }
    case 14: {
      Stack< int> ::SBF_grow__16Stack__tm__4_Z1ZFUi_v_1856310542::_SBF_enabled = 0;
      break; }
    default:
      break;
  } /* switch */
}
/*vcast_header_expansion_start:vcast_ti_decls_9.h*/
void VCAST_TI_9_12 ( struct Stack< int> ::ItemContainer **vcast_param ) ;
void VCAST_TI_9_13 ( class Stack< int> **vcast_param ) ;
void VCAST_TI_9_8 ( struct Stack< float> ::ItemContainer **vcast_param ) ;
void VCAST_TI_9_9 ( class Stack< float> **vcast_param ) ;
extern "C" {
void VCAST_TI_8_2 ( int *vcast_param ) ;
void VCAST_TI_8_3 ( float *vcast_param ) ;
void VCAST_TI_9_4 ( unsigned *vcast_param ) ;
void VCAST_TI_9_5 ( bool *vcast_param ) ;
void VCAST_TI_9_7 ( enum StackErrorsT *vcast_param ) ;
}
/*vcast_header_expansion_end*/
void VCAST_RUN_DATA_IF_9( int VCAST_SUB_INDEX, int VCAST_PARAM_INDEX ) {
  switch ( VCAST_SUB_INDEX ) {
    case 0: /* for global objects */
      switch( VCAST_PARAM_INDEX ) {
        case 1: /* for global object C_1245370136_9 */
          VCAST_TI_9_9 ( &(C_1245370136_9));
          break;
        case 2: /* for global object C_1245371128_9 */
          VCAST_TI_9_13 ( &(C_1245371128_9));
          break;
        case 3: /* for global object C_1245373112_9 */
          VCAST_TI_9_8 ( &(C_1245373112_9));
          break;
        case 4: /* for global object C_1268516952_9 */
          VCAST_TI_9_12 ( &(C_1268516952_9));
          break;
        default:
          vCAST_TOOL_ERROR = vCAST_true;
          break;
      } /* switch( VCAST_PARAM_INDEX ) */
      break; /* case 0 (global objects) */
    case 15: /* function Stack< float> ::ItemContainer::ItemContainer */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_8_3 ( &(P_9_15_1));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &Stack< float> ::ItemContainer::SBF___ct__Q2_16Stack__tm__4_Z1Z13ItemContainerFZ1Z_121526501::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< float> ::ItemContainer::ItemContainer */
    case 16: /* function Stack< int> ::ItemContainer::ItemContainer */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_8_2 ( &(P_9_16_1));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &Stack< int> ::ItemContainer::SBF___ct__Q2_16Stack__tm__4_Z1Z13ItemContainerFZ1Z_121526501::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< int> ::ItemContainer::ItemContainer */
    case 1: /* function Stack< float> ::Stack */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_4 ( &(P_9_1_1));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &Stack< float> ::SBF___ct__16Stack__tm__4_Z1ZFUi_1601437447::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< float> ::Stack */
    case 8: /* function Stack< int> ::Stack */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_4 ( &(P_9_8_1));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &Stack< int> ::SBF___ct__16Stack__tm__4_Z1ZFUi_1601437447::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< int> ::Stack */
    case 2: /* function Stack< float> ::empty */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_5 ( &(R_9_2));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &Stack< float> ::SBF_empty__16Stack__tm__4_Z1ZFv_b_2666998317::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< float> ::empty */
    case 9: /* function Stack< int> ::empty */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_5 ( &(R_9_9));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &Stack< int> ::SBF_empty__16Stack__tm__4_Z1ZFv_b_2666998317::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< int> ::empty */
    case 3: /* function Stack< float> ::operator bool */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_5 ( &(R_9_3));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &Stack< float> ::SBF___opb__16Stack__tm__4_Z1ZFv_695050629::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< float> ::operator bool */
    case 10: /* function Stack< int> ::operator bool */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_5 ( &(R_9_10));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &Stack< int> ::SBF___opb__16Stack__tm__4_Z1ZFv_695050629::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< int> ::operator bool */
    case 4: /* function Stack< float> ::push */
      switch ( VCAST_PARAM_INDEX ) {
        case 0:
          switch( vcast_get_param() ) {
            case 0:
              VCAST_TI_9_7 ( &(E_9_4_0));
              break;
          }
          break;
        case 1:
          VCAST_TI_8_3 ( &(P_9_4_1));
          break;
        case 3:
          VCAST_TI_SBF_OBJECT( &Stack< float> ::SBF_push__16Stack__tm__4_Z1ZFZ1Z_v_3177782385::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< float> ::push */
    case 11: /* function Stack< int> ::push */
      switch ( VCAST_PARAM_INDEX ) {
        case 0:
          switch( vcast_get_param() ) {
            case 0:
              VCAST_TI_9_7 ( &(E_9_11_0));
              break;
          }
          break;
        case 1:
          VCAST_TI_8_2 ( &(P_9_11_1));
          break;
        case 3:
          VCAST_TI_SBF_OBJECT( &Stack< int> ::SBF_push__16Stack__tm__4_Z1ZFZ1Z_v_3177782385::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< int> ::push */
    case 5: /* function Stack< float> ::pop */
      switch ( VCAST_PARAM_INDEX ) {
        case 0:
          switch( vcast_get_param() ) {
            case 0:
              VCAST_TI_9_7 ( &(E_9_5_0));
              break;
          }
          break;
        case 1:
          VCAST_TI_8_3 ( &(R_9_5));
          break;
        case 3:
          VCAST_TI_SBF_OBJECT( &Stack< float> ::SBF_pop__16Stack__tm__4_Z1ZFv_Z1Z_2876666714::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< float> ::pop */
    case 12: /* function Stack< int> ::pop */
      switch ( VCAST_PARAM_INDEX ) {
        case 0:
          switch( vcast_get_param() ) {
            case 0:
              VCAST_TI_9_7 ( &(E_9_12_0));
              break;
          }
          break;
        case 1:
          VCAST_TI_8_2 ( &(R_9_12));
          break;
        case 3:
          VCAST_TI_SBF_OBJECT( &Stack< int> ::SBF_pop__16Stack__tm__4_Z1ZFv_Z1Z_2876666714::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< int> ::pop */
    case 6: /* function Stack< float> ::count */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_4 ( &(R_9_6));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &Stack< float> ::SBF_count__16Stack__tm__4_Z1ZFv_Ui_2502702118::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< float> ::count */
    case 13: /* function Stack< int> ::count */
      switch ( VCAST_PARAM_INDEX ) {
        case 1:
          VCAST_TI_9_4 ( &(R_9_13));
          break;
        case 2:
          VCAST_TI_SBF_OBJECT( &Stack< int> ::SBF_count__16Stack__tm__4_Z1ZFv_Ui_2502702118::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< int> ::count */
    case 7: /* function Stack< float> ::grow */
      switch ( VCAST_PARAM_INDEX ) {
        case 0:
          switch( vcast_get_param() ) {
            case 0:
              VCAST_TI_9_7 ( &(E_9_7_0));
              break;
          }
          break;
        case 1:
          VCAST_TI_9_4 ( &(P_9_7_1));
          break;
        case 3:
          VCAST_TI_SBF_OBJECT( &Stack< float> ::SBF_grow__16Stack__tm__4_Z1ZFUi_v_1856310542::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< float> ::grow */
    case 14: /* function Stack< int> ::grow */
      switch ( VCAST_PARAM_INDEX ) {
        case 0:
          switch( vcast_get_param() ) {
            case 0:
              VCAST_TI_9_7 ( &(E_9_14_0));
              break;
          }
          break;
        case 1:
          VCAST_TI_9_4 ( &(P_9_14_1));
          break;
        case 3:
          VCAST_TI_SBF_OBJECT( &Stack< int> ::SBF_grow__16Stack__tm__4_Z1ZFUi_v_1856310542::_SBF_enabled );
          break;
      } /* switch ( VCAST_PARAM_INDEX ) */
      break; /* function Stack< int> ::grow */
    default:
      vCAST_TOOL_ERROR = vCAST_true;
      break;
  } /* switch ( VCAST_SUB_INDEX ) */
}
struct VCAST_CSU_Data *vcast_csu_data_9 = (struct VCAST_CSU_Data *)0;
/* A pointer */
void VCAST_TI_9_9 ( class Stack< float> **vcast_param )
{
  {
    if (vcast_param == 0)
      return;
    switch ( vcast_get_param () ) { /* Choose class ( inheritance ) */
      case 0: {
        if (vCAST_COMMAND == vCAST_PRINT) {
          if (*vcast_param == 0 )
            vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
          else
            vCAST_TOOL_ERROR = vCAST_true;
        } else if ( vCAST_COMMAND == vCAST_SET_VAL && vcast_param && vCAST_VALUE == 0)
          *vcast_param = 0;
        else if ( vCAST_COMMAND != vCAST_ALLOCATE)
          vCAST_TOOL_ERROR = vCAST_true;
        break;
      } /* end case 0 */
      case 1: { /* Choose class Stack< float>  */
        class Stack< float> * vcast_class_pointer = (static_cast< class Stack< float> * >(*vcast_param));
        switch ( vcast_get_param () ) { /* 'Choose constructor' or 'set class variable' */
          case 0: /* Choose constructor */ {
            switch ( vcast_get_param () ) { /* Choose constructor for class Stack< float>   */
              /* Stack< float> ::Stack */
              case 1: {
                static struct VCAST_CSU_Data_Item *vcast_item1 = 0;
                switch ( vcast_get_param() ) {
                  case 1: {
                    if ((vCAST_COMMAND == vCAST_PRINT) &&(vCAST_can_print_constructor == vCAST_false)) {
                      /* Do Nothing */
                    } else {
                      /* If the value exists, it was already allocated. Look it up. */
                      vCAST_boolean vcast_found = vCAST_true;
                      vcast_item1 = VCAST_Get_CSU_Data ( &vcast_csu_data_9, vCAST_PARAMETER_KEY);
                      if (vcast_item1 == 0) {
                        vcast_found = vCAST_false;
                        vcast_item1 = (struct VCAST_CSU_Data_Item *)VCAST_malloc (sizeof (struct VCAST_CSU_Data_Item));
                        vcast_item1->vcast_item = (void*)VCAST_malloc (sizeof ((*((unsigned *)(vcast_item1->vcast_item)))));
                        memset(vcast_item1->vcast_item, 0x0, sizeof ((*((unsigned *)(vcast_item1->vcast_item)))));
                        vcast_item1->vcast_next = (struct VCAST_CSU_Data_Item *)0;
                        vcast_item1->vcast_command = (char*)VCAST_malloc (sizeof(char)*(strlen (vCAST_PARAMETER_KEY)+1));
                        strcpy (vcast_item1->vcast_command, vCAST_PARAMETER_KEY);
                      }
                      if ((vCAST_COMMAND == vCAST_SET_VAL) || (vCAST_COMMAND == vCAST_ALLOCATE)) {
                        if (!vcast_found)
                          VCAST_Add_CSU_Data (&vcast_csu_data_9, vcast_item1);
                      }
                      VCAST_TI_9_4 ( &((*((unsigned *)(vcast_item1->vcast_item)))));
                    }
                    break;
                  } /* end case */
                  case 999: {
                    if (vCAST_COMMAND == vCAST_PRINT) {
                      vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##CONSTRUCTOR##\n");
                    } else if ( vCAST_COMMAND == vCAST_SET_VAL || vCAST_COMMAND == vCAST_FIRST_VAL ||vCAST_COMMAND == vCAST_MID_VAL || vCAST_COMMAND == vCAST_LAST_VAL ) {
                      vCAST_boolean was_allocated_1 = vCAST_false;
                      if (vcast_item1 == 0) {
                        vcast_item1 = (struct VCAST_CSU_Data_Item *)VCAST_malloc (sizeof (struct VCAST_CSU_Data_Item));
                        vcast_item1->vcast_item = (void*)VCAST_malloc (sizeof (vcast_item1));
                        vcast_item1->vcast_command = 0;
                      }
                      vcast_is_in_driver = vCAST_false;
                      vcast_class_pointer = ::new
                      class Stack< float> (
                        ( (*((unsigned *)(vcast_item1->vcast_item))) ) ) ;
                      *vcast_param = vcast_class_pointer;
                      vcast_is_in_driver = vCAST_true;
                      if (was_allocated_1) {
                        free (vcast_item1->vcast_item);
                        free (vcast_item1);
                      }
                    } /* end if */
                    break;
                  } /* end case 999 */
                  default:
                    vCAST_TOOL_ERROR = vCAST_true;
                } /* end switch */
                break;
              } /* end case */
              default:
                vCAST_TOOL_ERROR = vCAST_true;
            } /* end switch */
            break;
          } /* end case */
          /* Setting member variable ( ((class Stack< float>  *)(vcast_class_pointer)) ) ->mStack */
          case 1: {
            if ( ((!vcast_is_in_driver) && ((vCAST_COMMAND == vCAST_FIRST_VAL) || (vCAST_COMMAND == vCAST_LAST_VAL))) )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_9_8 ( &(( ((class Stack< float> *)(vcast_class_pointer)) ) ->mStack));
              } /* end else */
            } /* end else */
            break; /* end case 1*/
          } /* end case */
          /* Setting member variable ( ((class Stack< float>  *)(vcast_class_pointer)) ) ->mStackCount */
          case 2: {
            if ( ((!vcast_is_in_driver) && ((vCAST_COMMAND == vCAST_FIRST_VAL) || (vCAST_COMMAND == vCAST_LAST_VAL))) )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_9_4 ( &(( ((class Stack< float> *)(vcast_class_pointer)) ) ->mStackCount));
              } /* end else */
            } /* end else */
            break; /* end case 2*/
          } /* end case */
          /* Setting member variable ( ((class Stack< float>  *)(vcast_class_pointer)) ) ->mMaxSize */
          case 3: {
            if ( ((!vcast_is_in_driver) && ((vCAST_COMMAND == vCAST_FIRST_VAL) || (vCAST_COMMAND == vCAST_LAST_VAL))) )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_9_4 ( &(( ((class Stack< float> *)(vcast_class_pointer)) ) ->mMaxSize));
              } /* end else */
            } /* end else */
            break; /* end case 3*/
          } /* end case */
          case 4: {
            if ( ((!vcast_is_in_driver) && ((vCAST_COMMAND == vCAST_FIRST_VAL) || (vCAST_COMMAND == vCAST_LAST_VAL))) )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else if ( vCAST_COMMAND == vCAST_PRINT )
              if ( vcast_class_pointer == 0 )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"<<exists>>\n");
            break; /* end case 4*/
          } /* end case */
          default:
            vCAST_TOOL_ERROR = vCAST_true;
        } /* end switch */
        break;
      } /* end case */
    } /* end switch */
  }
} /* end VCAST_TI_9_9 */
/* A pointer */
void VCAST_TI_9_13 ( class Stack< int> **vcast_param )
{
  {
    if (vcast_param == 0)
      return;
    switch ( vcast_get_param () ) { /* Choose class ( inheritance ) */
      case 0: {
        if (vCAST_COMMAND == vCAST_PRINT) {
          if (*vcast_param == 0 )
            vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
          else
            vCAST_TOOL_ERROR = vCAST_true;
        } else if ( vCAST_COMMAND == vCAST_SET_VAL && vcast_param && vCAST_VALUE == 0)
          *vcast_param = 0;
        else if ( vCAST_COMMAND != vCAST_ALLOCATE)
          vCAST_TOOL_ERROR = vCAST_true;
        break;
      } /* end case 0 */
      case 1: { /* Choose class Stack< int>  */
        class Stack< int> * vcast_class_pointer = (static_cast< class Stack< int> * >(*vcast_param));
        switch ( vcast_get_param () ) { /* 'Choose constructor' or 'set class variable' */
          case 0: /* Choose constructor */ {
            switch ( vcast_get_param () ) { /* Choose constructor for class Stack< int>   */
              /* Stack< int> ::Stack */
              case 1: {
                static struct VCAST_CSU_Data_Item *vcast_item1 = 0;
                switch ( vcast_get_param() ) {
                  case 1: {
                    if ((vCAST_COMMAND == vCAST_PRINT) &&(vCAST_can_print_constructor == vCAST_false)) {
                      /* Do Nothing */
                    } else {
                      /* If the value exists, it was already allocated. Look it up. */
                      vCAST_boolean vcast_found = vCAST_true;
                      vcast_item1 = VCAST_Get_CSU_Data ( &vcast_csu_data_9, vCAST_PARAMETER_KEY);
                      if (vcast_item1 == 0) {
                        vcast_found = vCAST_false;
                        vcast_item1 = (struct VCAST_CSU_Data_Item *)VCAST_malloc (sizeof (struct VCAST_CSU_Data_Item));
                        vcast_item1->vcast_item = (void*)VCAST_malloc (sizeof ((*((unsigned *)(vcast_item1->vcast_item)))));
                        memset(vcast_item1->vcast_item, 0x0, sizeof ((*((unsigned *)(vcast_item1->vcast_item)))));
                        vcast_item1->vcast_next = (struct VCAST_CSU_Data_Item *)0;
                        vcast_item1->vcast_command = (char*)VCAST_malloc (sizeof(char)*(strlen (vCAST_PARAMETER_KEY)+1));
                        strcpy (vcast_item1->vcast_command, vCAST_PARAMETER_KEY);
                      }
                      if ((vCAST_COMMAND == vCAST_SET_VAL) || (vCAST_COMMAND == vCAST_ALLOCATE)) {
                        if (!vcast_found)
                          VCAST_Add_CSU_Data (&vcast_csu_data_9, vcast_item1);
                      }
                      VCAST_TI_9_4 ( &((*((unsigned *)(vcast_item1->vcast_item)))));
                    }
                    break;
                  } /* end case */
                  case 999: {
                    if (vCAST_COMMAND == vCAST_PRINT) {
                      vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##CONSTRUCTOR##\n");
                    } else if ( vCAST_COMMAND == vCAST_SET_VAL || vCAST_COMMAND == vCAST_FIRST_VAL ||vCAST_COMMAND == vCAST_MID_VAL || vCAST_COMMAND == vCAST_LAST_VAL ) {
                      vCAST_boolean was_allocated_1 = vCAST_false;
                      if (vcast_item1 == 0) {
                        vcast_item1 = (struct VCAST_CSU_Data_Item *)VCAST_malloc (sizeof (struct VCAST_CSU_Data_Item));
                        vcast_item1->vcast_item = (void*)VCAST_malloc (sizeof (vcast_item1));
                        vcast_item1->vcast_command = 0;
                      }
                      vcast_is_in_driver = vCAST_false;
                      vcast_class_pointer = ::new
                      class Stack< int> (
                        ( (*((unsigned *)(vcast_item1->vcast_item))) ) ) ;
                      *vcast_param = vcast_class_pointer;
                      vcast_is_in_driver = vCAST_true;
                      if (was_allocated_1) {
                        free (vcast_item1->vcast_item);
                        free (vcast_item1);
                      }
                    } /* end if */
                    break;
                  } /* end case 999 */
                  default:
                    vCAST_TOOL_ERROR = vCAST_true;
                } /* end switch */
                break;
              } /* end case */
              default:
                vCAST_TOOL_ERROR = vCAST_true;
            } /* end switch */
            break;
          } /* end case */
          /* Setting member variable ( ((class Stack< int>  *)(vcast_class_pointer)) ) ->mStack */
          case 1: {
            if ( ((!vcast_is_in_driver) && ((vCAST_COMMAND == vCAST_FIRST_VAL) || (vCAST_COMMAND == vCAST_LAST_VAL))) )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_9_12 ( &(( ((class Stack< int> *)(vcast_class_pointer)) ) ->mStack));
              } /* end else */
            } /* end else */
            break; /* end case 1*/
          } /* end case */
          /* Setting member variable ( ((class Stack< int>  *)(vcast_class_pointer)) ) ->mStackCount */
          case 2: {
            if ( ((!vcast_is_in_driver) && ((vCAST_COMMAND == vCAST_FIRST_VAL) || (vCAST_COMMAND == vCAST_LAST_VAL))) )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_9_4 ( &(( ((class Stack< int> *)(vcast_class_pointer)) ) ->mStackCount));
              } /* end else */
            } /* end else */
            break; /* end case 2*/
          } /* end case */
          /* Setting member variable ( ((class Stack< int>  *)(vcast_class_pointer)) ) ->mMaxSize */
          case 3: {
            if ( ((!vcast_is_in_driver) && ((vCAST_COMMAND == vCAST_FIRST_VAL) || (vCAST_COMMAND == vCAST_LAST_VAL))) )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_9_4 ( &(( ((class Stack< int> *)(vcast_class_pointer)) ) ->mMaxSize));
              } /* end else */
            } /* end else */
            break; /* end case 3*/
          } /* end case */
          case 4: {
            if ( ((!vcast_is_in_driver) && ((vCAST_COMMAND == vCAST_FIRST_VAL) || (vCAST_COMMAND == vCAST_LAST_VAL))) )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else if ( vCAST_COMMAND == vCAST_PRINT )
              if ( vcast_class_pointer == 0 )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"<<exists>>\n");
            break; /* end case 4*/
          } /* end case */
          default:
            vCAST_TOOL_ERROR = vCAST_true;
        } /* end switch */
        break;
      } /* end case */
    } /* end switch */
  }
} /* end VCAST_TI_9_13 */
/* A pointer */
void VCAST_TI_9_8 ( struct Stack< float> ::ItemContainer **vcast_param )
{
  {
    if (vcast_param == 0)
      return;
    switch ( vcast_get_param () ) { /* Choose class ( inheritance ) */
      case 0: {
        if (vCAST_COMMAND == vCAST_PRINT) {
          if (*vcast_param == 0 )
            vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
          else
            vCAST_TOOL_ERROR = vCAST_true;
        } else if ( vCAST_COMMAND == vCAST_SET_VAL && vcast_param && vCAST_VALUE == 0)
          *vcast_param = 0;
        else if ( vCAST_COMMAND != vCAST_ALLOCATE)
          vCAST_TOOL_ERROR = vCAST_true;
        break;
      } /* end case 0 */
      case 1: { /* Choose struct Stack< float> ::ItemContainer */
        struct Stack< float> ::ItemContainer * vcast_class_pointer = (static_cast< struct Stack< float> ::ItemContainer * >(*vcast_param));
        switch ( vcast_get_param () ) { /* 'Choose constructor' or 'set class variable' */
          case 0: /* Choose constructor */ {
            switch ( vcast_get_param () ) { /* Choose constructor for struct Stack< float> ::ItemContainer  */
              /* Stack< float> ::ItemContainer::ItemContainer */
              case 1: {
                static struct VCAST_CSU_Data_Item *vcast_item1 = 0;
                switch ( vcast_get_param() ) {
                  case 1: {
                    if ((vCAST_COMMAND == vCAST_PRINT) &&(vCAST_can_print_constructor == vCAST_false)) {
                      /* Do Nothing */
                    } else {
                      /* If the value exists, it was already allocated. Look it up. */
                      vCAST_boolean vcast_found = vCAST_true;
                      vcast_item1 = VCAST_Get_CSU_Data ( &vcast_csu_data_9, vCAST_PARAMETER_KEY);
                      if (vcast_item1 == 0) {
                        vcast_found = vCAST_false;
                        vcast_item1 = (struct VCAST_CSU_Data_Item *)VCAST_malloc (sizeof (struct VCAST_CSU_Data_Item));
                        vcast_item1->vcast_item = (void*)VCAST_malloc (sizeof ((*((float *)(vcast_item1->vcast_item)))));
                        memset(vcast_item1->vcast_item, 0x0, sizeof ((*((float *)(vcast_item1->vcast_item)))));
                        vcast_item1->vcast_next = (struct VCAST_CSU_Data_Item *)0;
                        vcast_item1->vcast_command = (char*)VCAST_malloc (sizeof(char)*(strlen (vCAST_PARAMETER_KEY)+1));
                        strcpy (vcast_item1->vcast_command, vCAST_PARAMETER_KEY);
                      }
                      if ((vCAST_COMMAND == vCAST_SET_VAL) || (vCAST_COMMAND == vCAST_ALLOCATE)) {
                        if (!vcast_found)
                          VCAST_Add_CSU_Data (&vcast_csu_data_9, vcast_item1);
                      }
                      VCAST_TI_8_3 ( &((*((float *)(vcast_item1->vcast_item)))));
                    }
                    break;
                  } /* end case */
                  case 999: {
                    if (vCAST_COMMAND == vCAST_PRINT) {
                      vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##CONSTRUCTOR##\n");
                    } else if ( vCAST_COMMAND == vCAST_SET_VAL || vCAST_COMMAND == vCAST_FIRST_VAL ||vCAST_COMMAND == vCAST_MID_VAL || vCAST_COMMAND == vCAST_LAST_VAL ) {
                      vCAST_boolean was_allocated_1 = vCAST_false;
                      if (vcast_item1 == 0) {
                        vcast_item1 = (struct VCAST_CSU_Data_Item *)VCAST_malloc (sizeof (struct VCAST_CSU_Data_Item));
                        vcast_item1->vcast_item = (void*)VCAST_malloc (sizeof (vcast_item1));
                        vcast_item1->vcast_command = 0;
                      }
                      vcast_is_in_driver = vCAST_false;
                      vcast_class_pointer = ::new
                      struct Stack< float> ::ItemContainer (
                        ( (*((float *)(vcast_item1->vcast_item))) ) ) ;
                      *vcast_param = vcast_class_pointer;
                      vcast_is_in_driver = vCAST_true;
                      if (was_allocated_1) {
                        free (vcast_item1->vcast_item);
                        free (vcast_item1);
                      }
                    } /* end if */
                    break;
                  } /* end case 999 */
                  default:
                    vCAST_TOOL_ERROR = vCAST_true;
                } /* end switch */
                break;
              } /* end case */
              default:
                vCAST_TOOL_ERROR = vCAST_true;
            } /* end switch */
            break;
          } /* end case */
          /* Setting member variable ( ((struct Stack< float> ::ItemContainer *)(vcast_class_pointer)) ) ->item */
          case 1: {
            if ( ((!vcast_is_in_driver) && ((vCAST_COMMAND == vCAST_FIRST_VAL) || (vCAST_COMMAND == vCAST_LAST_VAL))) )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_8_3 ( &(( ((struct Stack< float> ::ItemContainer *)(vcast_class_pointer)) ) ->item));
              } /* end else */
            } /* end else */
            break; /* end case 1*/
          } /* end case */
          /* Setting member variable ( ((struct Stack< float> ::ItemContainer *)(vcast_class_pointer)) ) ->next */
          case 2: {
            if ( ((!vcast_is_in_driver) && ((vCAST_COMMAND == vCAST_FIRST_VAL) || (vCAST_COMMAND == vCAST_LAST_VAL))) )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_9_8 ( &(( ((struct Stack< float> ::ItemContainer *)(vcast_class_pointer)) ) ->next));
              } /* end else */
            } /* end else */
            break; /* end case 2*/
          } /* end case */
          case 3: {
            if ( ((!vcast_is_in_driver) && ((vCAST_COMMAND == vCAST_FIRST_VAL) || (vCAST_COMMAND == vCAST_LAST_VAL))) )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else if ( vCAST_COMMAND == vCAST_PRINT )
              if ( vcast_class_pointer == 0 )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"<<exists>>\n");
            break; /* end case 3*/
          } /* end case */
          default:
            vCAST_TOOL_ERROR = vCAST_true;
        } /* end switch */
        break;
      } /* end case */
    } /* end switch */
  }
} /* end VCAST_TI_9_8 */
/* A pointer */
void VCAST_TI_9_12 ( struct Stack< int> ::ItemContainer **vcast_param )
{
  {
    if (vcast_param == 0)
      return;
    switch ( vcast_get_param () ) { /* Choose class ( inheritance ) */
      case 0: {
        if (vCAST_COMMAND == vCAST_PRINT) {
          if (*vcast_param == 0 )
            vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
          else
            vCAST_TOOL_ERROR = vCAST_true;
        } else if ( vCAST_COMMAND == vCAST_SET_VAL && vcast_param && vCAST_VALUE == 0)
          *vcast_param = 0;
        else if ( vCAST_COMMAND != vCAST_ALLOCATE)
          vCAST_TOOL_ERROR = vCAST_true;
        break;
      } /* end case 0 */
      case 1: { /* Choose struct Stack< int> ::ItemContainer */
        struct Stack< int> ::ItemContainer * vcast_class_pointer = (static_cast< struct Stack< int> ::ItemContainer * >(*vcast_param));
        switch ( vcast_get_param () ) { /* 'Choose constructor' or 'set class variable' */
          case 0: /* Choose constructor */ {
            switch ( vcast_get_param () ) { /* Choose constructor for struct Stack< int> ::ItemContainer  */
              /* Stack< int> ::ItemContainer::ItemContainer */
              case 1: {
                static struct VCAST_CSU_Data_Item *vcast_item1 = 0;
                switch ( vcast_get_param() ) {
                  case 1: {
                    if ((vCAST_COMMAND == vCAST_PRINT) &&(vCAST_can_print_constructor == vCAST_false)) {
                      /* Do Nothing */
                    } else {
                      /* If the value exists, it was already allocated. Look it up. */
                      vCAST_boolean vcast_found = vCAST_true;
                      vcast_item1 = VCAST_Get_CSU_Data ( &vcast_csu_data_9, vCAST_PARAMETER_KEY);
                      if (vcast_item1 == 0) {
                        vcast_found = vCAST_false;
                        vcast_item1 = (struct VCAST_CSU_Data_Item *)VCAST_malloc (sizeof (struct VCAST_CSU_Data_Item));
                        vcast_item1->vcast_item = (void*)VCAST_malloc (sizeof ((*((int *)(vcast_item1->vcast_item)))));
                        memset(vcast_item1->vcast_item, 0x0, sizeof ((*((int *)(vcast_item1->vcast_item)))));
                        vcast_item1->vcast_next = (struct VCAST_CSU_Data_Item *)0;
                        vcast_item1->vcast_command = (char*)VCAST_malloc (sizeof(char)*(strlen (vCAST_PARAMETER_KEY)+1));
                        strcpy (vcast_item1->vcast_command, vCAST_PARAMETER_KEY);
                      }
                      if ((vCAST_COMMAND == vCAST_SET_VAL) || (vCAST_COMMAND == vCAST_ALLOCATE)) {
                        if (!vcast_found)
                          VCAST_Add_CSU_Data (&vcast_csu_data_9, vcast_item1);
                      }
                      VCAST_TI_8_2 ( &((*((int *)(vcast_item1->vcast_item)))));
                    }
                    break;
                  } /* end case */
                  case 999: {
                    if (vCAST_COMMAND == vCAST_PRINT) {
                      vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##CONSTRUCTOR##\n");
                    } else if ( vCAST_COMMAND == vCAST_SET_VAL || vCAST_COMMAND == vCAST_FIRST_VAL ||vCAST_COMMAND == vCAST_MID_VAL || vCAST_COMMAND == vCAST_LAST_VAL ) {
                      vCAST_boolean was_allocated_1 = vCAST_false;
                      if (vcast_item1 == 0) {
                        vcast_item1 = (struct VCAST_CSU_Data_Item *)VCAST_malloc (sizeof (struct VCAST_CSU_Data_Item));
                        vcast_item1->vcast_item = (void*)VCAST_malloc (sizeof (vcast_item1));
                        vcast_item1->vcast_command = 0;
                      }
                      vcast_is_in_driver = vCAST_false;
                      vcast_class_pointer = ::new
                      struct Stack< int> ::ItemContainer (
                        ( (*((int *)(vcast_item1->vcast_item))) ) ) ;
                      *vcast_param = vcast_class_pointer;
                      vcast_is_in_driver = vCAST_true;
                      if (was_allocated_1) {
                        free (vcast_item1->vcast_item);
                        free (vcast_item1);
                      }
                    } /* end if */
                    break;
                  } /* end case 999 */
                  default:
                    vCAST_TOOL_ERROR = vCAST_true;
                } /* end switch */
                break;
              } /* end case */
              default:
                vCAST_TOOL_ERROR = vCAST_true;
            } /* end switch */
            break;
          } /* end case */
          /* Setting member variable ( ((struct Stack< int> ::ItemContainer *)(vcast_class_pointer)) ) ->item */
          case 1: {
            if ( ((!vcast_is_in_driver) && ((vCAST_COMMAND == vCAST_FIRST_VAL) || (vCAST_COMMAND == vCAST_LAST_VAL))) )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_8_2 ( &(( ((struct Stack< int> ::ItemContainer *)(vcast_class_pointer)) ) ->item));
              } /* end else */
            } /* end else */
            break; /* end case 1*/
          } /* end case */
          /* Setting member variable ( ((struct Stack< int> ::ItemContainer *)(vcast_class_pointer)) ) ->next */
          case 2: {
            if ( ((!vcast_is_in_driver) && ((vCAST_COMMAND == vCAST_FIRST_VAL) || (vCAST_COMMAND == vCAST_LAST_VAL))) )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else {
              if ( ( vCAST_COMMAND == vCAST_PRINT ) && ( vcast_class_pointer == 0 ) )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else {
                VCAST_TI_9_12 ( &(( ((struct Stack< int> ::ItemContainer *)(vcast_class_pointer)) ) ->next));
              } /* end else */
            } /* end else */
            break; /* end case 2*/
          } /* end case */
          case 3: {
            if ( ((!vcast_is_in_driver) && ((vCAST_COMMAND == vCAST_FIRST_VAL) || (vCAST_COMMAND == vCAST_LAST_VAL))) )
              vectorcast_fprint_string(vCAST_OUTPUT_FILE, "##ERROR##\n");
            else if ( vCAST_COMMAND == vCAST_PRINT )
              if ( vcast_class_pointer == 0 )
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
              else
                vectorcast_fprint_string (vCAST_OUTPUT_FILE,"<<exists>>\n");
            break; /* end case 3*/
          } /* end case */
          default:
            vCAST_TOOL_ERROR = vCAST_true;
        } /* end switch */
        break;
      } /* end case */
    } /* end switch */
  }
} /* end VCAST_TI_9_12 */
/* An integer */
void VCAST_TI_9_4 ( unsigned *vcast_param )
{
  switch (vCAST_COMMAND) {
    case vCAST_PRINT :
      if ( vcast_param == 0)
        vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
      else {
        vectorcast_fprint_unsigned_integer(vCAST_OUTPUT_FILE, *vcast_param);
        vectorcast_fprint_string(vCAST_OUTPUT_FILE, "\n");
      }
      break;
    case vCAST_KEEP_VAL:
      break; /* KEEP doesn't do anything */
  case vCAST_SET_VAL :
    *vcast_param = ( unsigned ) vCAST_VALUE_UNSIGNED;
    break;
  case vCAST_FIRST_VAL :
    *vcast_param = 0;
    break;
  case vCAST_MID_VAL :
    *vcast_param = (0 / 2) + (
                                    0xFFFFFFFF 
                                             / 2);
    break;
  case vCAST_LAST_VAL :
    *vcast_param = 
                  0xFFFFFFFF
                          ;
    break;
  case vCAST_MIN_MINUS_1_VAL :
    *vcast_param = 0;
    *vcast_param = *vcast_param - 1;
    break;
  case vCAST_MAX_PLUS_1_VAL :
    *vcast_param = 
                  0xFFFFFFFF
                          ;
    *vcast_param = *vcast_param + 1;
    break;
  case vCAST_ZERO_VAL :
    *vcast_param = 0;
    break;
  default:
    break;
} /* end switch */
} /* end VCAST_TI_9_4 */
/* An integer */
void VCAST_TI_9_5 ( bool *vcast_param )
{
  switch (vCAST_COMMAND) {
    case vCAST_PRINT :
      if ( vcast_param == 0)
        vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
      else {
        if (*vcast_param)
          vectorcast_fprint_string(vCAST_OUTPUT_FILE, "true\n");
        else
          vectorcast_fprint_string(vCAST_OUTPUT_FILE, "false\n");
      }
      break;
    case vCAST_KEEP_VAL:
      break; /* KEEP doesn't do anything */
  case vCAST_SET_VAL :
    *vcast_param = ( bool ) vCAST_VALUE_INT;
    break;
  case vCAST_FIRST_VAL :
    *vcast_param = 0;
    break;
  case vCAST_MID_VAL :
    *vcast_param = 0;
    break;
  case vCAST_LAST_VAL :
    *vcast_param = 1;
    break;
  case vCAST_MIN_MINUS_1_VAL :
    *vcast_param = 0;
    *vcast_param = *vcast_param - 1;
    break;
  case vCAST_MAX_PLUS_1_VAL :
    *vcast_param = 1;
    *vcast_param = *vcast_param + 1;
    break;
  case vCAST_ZERO_VAL :
    *vcast_param = 0;
    break;
  default:
    break;
} /* end switch */
} /* end VCAST_TI_9_5 */
/* An enumeration */
void VCAST_TI_9_7 ( enum StackErrorsT *vcast_param )
{
  switch ( vCAST_COMMAND ) {
    case vCAST_PRINT: {
      if ( vcast_param == 0 )
        vectorcast_fprint_string (vCAST_OUTPUT_FILE,"null\n");
      else {
        vectorcast_fprint_long_long(vCAST_OUTPUT_FILE, (long long)*vcast_param);
        vectorcast_fprint_string(vCAST_OUTPUT_FILE, "\n");
      } /* end else */
      } /* end vCAST_PRINT block */
      break; /* end case vCAST_PRINT */
    case vCAST_KEEP_VAL:
      break; /* KEEP doesn't do anything */
  case vCAST_SET_VAL:
    *vcast_param = (enum StackErrorsT ) vCAST_VALUE_INT;
    break;
  case vCAST_FIRST_VAL:
    *vcast_param = E_OVERFLOW;
    break; /* end case vCAST_FIRST_VAL */
  case vCAST_LAST_VAL:
    *vcast_param = E_UNDERFLOW;
    break; /* end case vCAST_LAST_VAL */
  default:
    vCAST_TOOL_ERROR = vCAST_true;
    break; /* end case default */
} /* end switch */
} /* end VCAST_TI_9_7 */
void VCAST_TI_RANGE_DATA_9 ( void ) {
  /* Range Data for TI (scalar) VCAST_TI_8_2 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, "NEW_SCALAR\n" );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900002\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,
                                              (-2147483647 -1) 
                                                      );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,(
                                               (-2147483647 -1) 
                                                       / 2) + (
                                                               2147483647 
                                                                       / 2) );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,
                                              2147483647 
                                                      );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  /* Range Data for TI (scalar) VCAST_TI_9_4 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, "NEW_SCALAR\n" );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900004\n" );
  vectorcast_fprint_unsigned_integer (vCAST_OUTPUT_FILE,0 );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_unsigned_integer (vCAST_OUTPUT_FILE,(0 / 2) + (
                                                                         0xFFFFFFFF 
                                                                                  / 2) );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_unsigned_integer (vCAST_OUTPUT_FILE,
                                                       0xFFFFFFFF 
                                                                );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  /* Range Data for TI (scalar) VCAST_TI_9_5 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, "NEW_SCALAR\n" );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900005\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,0 );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,0 );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_integer (vCAST_OUTPUT_FILE,1 );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  /* Range Data for TI (scalar) VCAST_TI_8_3 */
  vectorcast_fprint_string (vCAST_OUTPUT_FILE, "NEW_SCALAR\n" );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"900011\n" );
  vectorcast_fprint_long_float (vCAST_OUTPUT_FILE,-(3.40282346638528859812e+38F) );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_long_float (vCAST_OUTPUT_FILE,0 );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
  vectorcast_fprint_long_float (vCAST_OUTPUT_FILE,3.40282346638528859812e+38F );
  vectorcast_fprint_string (vCAST_OUTPUT_FILE,"\n" );
}
/* Include the file which contains function implementations
for stub processing and value/expected user code */
/*vcast_header_expansion_start:stack_uc.cpp*/
void vCAST_VALUE_USER_CODE_9(int vcast_slot_index ) {
  {
  /* INSERT VALUE_USER_CODE_9 */
  }
}
void vCAST_EXPECTED_USER_CODE_9(int vcast_slot_index ) {
  {
  /* INSERT EXPECTED_USER_CODE_9 */
  }
}
void vCAST_EGLOBALS_USER_CODE_9(int vcast_slot_index ) {
  {
  /* INSERT EXPECTED_GLOBALS_USER_CODE_9 */
  }
}
void vCAST_STUB_PROCESSING_9(
        int UnitIndex,
        int SubprogramIndex ) {
  vCAST_GLOBAL_STUB_PROCESSING();
  {
  /* INSERT STUB_VAL_USER_CODE_9 */
  }
}
void vCAST_BEGIN_STUB_PROC_9(
        int UnitIndex,
        int SubprogramIndex ) {
  vCAST_GLOBAL_BEGINNING_OF_STUB_PROCESSING();
  {
  /* INSERT STUB_EXP_USER_CODE_9 */
  }
}
void VCAST_USER_CODE_UNIT_9( VCAST_USER_CODE_TYPE uct, int vcast_slot_index ) {
  switch( uct ) {
    case VCAST_UCT_VALUE:
      vCAST_VALUE_USER_CODE_9(vcast_slot_index);
      break;
    case VCAST_UCT_EXPECTED:
      vCAST_EXPECTED_USER_CODE_9(vcast_slot_index);
      break;
    case VCAST_UCT_EXPECTED_GLOBALS:
      vCAST_EGLOBALS_USER_CODE_9(vcast_slot_index);
      break;
  } /* switch( uct ) */
}
/*vcast_header_expansion_end*/
void vCAST_COMMON_STUB_PROC_9(
            int unitIndex,
            int subprogramIndex,
            int robjectIndex,
            int readEobjectData )
{
   vCAST_BEGIN_STUB_PROC_9(unitIndex, subprogramIndex);
   if ( robjectIndex )
      vCAST_READ_COMMAND_DATA_FOR_ONE_PARAM( unitIndex, subprogramIndex, robjectIndex );
   if ( readEobjectData )
      vCAST_READ_COMMAND_DATA_FOR_ONE_PARAM( unitIndex, subprogramIndex, 0 );
   vCAST_SET_HISTORY( unitIndex, subprogramIndex );
   vCAST_READ_COMMAND_DATA( vCAST_CURRENT_SLOT, unitIndex, subprogramIndex, vCAST_true, vCAST_false );
   vCAST_READ_COMMAND_DATA_FOR_USER_GLOBALS();
   vCAST_STUB_PROCESSING_9(unitIndex, subprogramIndex);
}
/*vcast_separate_expansion_end*/
