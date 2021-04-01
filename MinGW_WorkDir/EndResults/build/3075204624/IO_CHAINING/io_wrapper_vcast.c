#include "c:/vcast/mingw/include/stdlib.h"
#include "c:/vcast/mingw/include/stdio.h"
#include "c:/vcast/mingw/include/string.h"
/*vcast_header_expansion_start:C:/VCAST/Environments/Git_Test/SourceFiles/io_wrapper.h*/
enum bool {False, True};
typedef enum bool t_bool;
typedef unsigned int t_file_handle;
struct FILE_TYPE {
   t_file_handle fileHandle;
   t_bool isOpen;
   };
enum FileModeT { F_READ, F_WRITE, F_APPEND };
struct FILE_TYPE *OpenFile ( char filename[],
                             enum FileModeT mode );
t_bool CloseFile ( struct FILE_TYPE *fp );
t_bool ReadLine ( struct FILE_TYPE *fp,
               char line[] );
t_bool WriteString ( struct FILE_TYPE *fp,
                  char line[] );
t_bool WriteInteger ( struct FILE_TYPE *fp,
                   int value );
t_bool WriteFloat ( struct FILE_TYPE *fp,
                 float value );
/*vcast_header_expansion_end*/
int close_ret = 99;
t_bool CloseFile ( struct FILE_TYPE *fp )
{/*vcast_internal_start*/
extern struct FILE_TYPE *P_9_1_1;
extern enum bool R_9_1;
extern unsigned char SBF_9_1;
if(SBF_9_1) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_706831348
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_706831348
  if ( vcast_is_in_driver ) {
    P_9_1_1 = fp;
    vCAST_COMMON_STUB_PROC_9( 9, 1, 2, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_706831348
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_706831348
  vCAST_USER_CODE_TIMER_START();
  return R_9_1;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
  if ( fp->isOpen )
  {
     close_ret = fclose ( (FILE *)fp->fileHandle );
     if (close_ret == 0)
         return True;
     else
         return False;
  }
  return False;
/*vcast_internal_start*/}/*vcast_internal_end*/
}
struct FILE_TYPE *OpenFile ( char filename[],
                             enum FileModeT mode )
{/*vcast_internal_start*/
extern vCAST_boolean P_9_2_1_set;
extern char *P_9_2_1;
extern enum FileModeT P_9_2_2;
extern struct FILE_TYPE *R_9_2;
extern unsigned char SBF_9_2;
if(SBF_9_2) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_170249972
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_170249972
  if ( vcast_is_in_driver ) {
    P_9_2_1 = filename;
    P_9_2_2 = mode;
    vCAST_COMMON_STUB_PROC_9( 9, 2, 3, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_170249972
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_170249972
  vCAST_USER_CODE_TIMER_START();
  return R_9_2;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
   struct FILE_TYPE *retVal;
   retVal = (struct FILE_TYPE *)malloc(sizeof(struct FILE_TYPE));
   if (!retVal)
   {
       printf("\nNo memory available!\n");
    return(retVal);
   }
   retVal->isOpen = False;
   switch ( mode )
   {
   case F_READ:
      retVal->fileHandle = (unsigned int)fopen ( filename, "r" );
      break;
   case F_WRITE:
      retVal->fileHandle = (unsigned int)fopen ( filename, "w" );
      break;
   case F_APPEND:
      retVal->fileHandle = (unsigned int)fopen ( filename, "a" );
      break;
   }
   if (retVal->fileHandle == 0)
   {
      retVal->isOpen = False;
   }
   else
   {
      retVal->isOpen = True;
   }
   return retVal;
/*vcast_internal_start*/}/*vcast_internal_end*/
}
t_bool ReadLine ( struct FILE_TYPE *fp,
               char line[] )
{/*vcast_internal_start*/
extern struct FILE_TYPE *P_9_3_1;
extern vCAST_boolean P_9_3_2_set;
extern char *P_9_3_2;
extern enum bool R_9_3;
extern unsigned char SBF_9_3;
if(SBF_9_3) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_1423409462
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_1423409462
  if ( vcast_is_in_driver ) {
    P_9_3_1 = fp;
    P_9_3_2 = line;
    vCAST_COMMON_STUB_PROC_9( 9, 3, 3, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_1423409462
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_1423409462
  vCAST_USER_CODE_TIMER_START();
  return R_9_3;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
  char *ret_ptr;
  if ( fp->isOpen )
  {
    ret_ptr = fgets ( line, 100, (FILE *)fp->fileHandle );
    if (ret_ptr == 0)
      return False;
    else
      return True;
  }
  return False;
/*vcast_internal_start*/}/*vcast_internal_end*/
}
t_bool WriteString ( struct FILE_TYPE *fp,
                  char line[])
{/*vcast_internal_start*/
extern struct FILE_TYPE *P_9_4_1;
extern vCAST_boolean P_9_4_2_set;
extern char *P_9_4_2;
extern enum bool R_9_4;
extern unsigned char SBF_9_4;
if(SBF_9_4) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_3778736389
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_3778736389
  if ( vcast_is_in_driver ) {
    P_9_4_1 = fp;
    P_9_4_2 = line;
    vCAST_COMMON_STUB_PROC_9( 9, 4, 3, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_3778736389
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_3778736389
  vCAST_USER_CODE_TIMER_START();
  return R_9_4;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
  int rc;
  if ( fp->isOpen )
  {
    rc = fprintf ( (FILE *)fp->fileHandle, "%s", line );
    if (rc == strlen(line))
      return True;
    else
      return False;
  }
  return False;
/*vcast_internal_start*/}/*vcast_internal_end*/
}
t_bool WriteInteger ( struct FILE_TYPE *fp,
                   int value )
{/*vcast_internal_start*/
extern struct FILE_TYPE *P_9_5_1;
extern int P_9_5_2;
extern enum bool R_9_5;
extern unsigned char SBF_9_5;
if(SBF_9_5) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_2232467595
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_2232467595
  if ( vcast_is_in_driver ) {
    P_9_5_1 = fp;
    P_9_5_2 = value;
    vCAST_COMMON_STUB_PROC_9( 9, 5, 3, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_2232467595
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_2232467595
  vCAST_USER_CODE_TIMER_START();
  return R_9_5;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
  if ( fp->isOpen )
  {
     fprintf ( (FILE *)fp->fileHandle, "%d", value );
     return True;
  }
  return False;
/*vcast_internal_start*/}/*vcast_internal_end*/
}
t_bool WriteFloat ( struct FILE_TYPE *fp,
                 float value )
{/*vcast_internal_start*/
extern struct FILE_TYPE *P_9_6_1;
extern float P_9_6_2;
extern enum bool R_9_6;
extern unsigned char SBF_9_6;
if(SBF_9_6) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_669731289
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_669731289
  if ( vcast_is_in_driver ) {
    P_9_6_1 = fp;
    P_9_6_2 = value;
    vCAST_COMMON_STUB_PROC_9( 9, 6, 3, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_669731289
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_669731289
  vCAST_USER_CODE_TIMER_START();
  return R_9_6;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
  if ( fp->isOpen )
  {
     fprintf ( (FILE *)fp->fileHandle, "%f", value );
     return True;
  }
  return False;
/*vcast_internal_start*/}/*vcast_internal_end*/
}
/*vcast_internal_start*/
struct FILE_TYPE *P_9_1_1;
enum bool R_9_1;
unsigned char SBF_9_1 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
vCAST_boolean P_9_2_1_set = vCAST_false
;
char *P_9_2_1;
enum FileModeT P_9_2_2;
struct FILE_TYPE *R_9_2;
unsigned char SBF_9_2 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
struct FILE_TYPE *P_9_3_1;
vCAST_boolean P_9_3_2_set = vCAST_false
;
char *P_9_3_2;
enum bool R_9_3;
unsigned char SBF_9_3 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
struct FILE_TYPE *P_9_4_1;
vCAST_boolean P_9_4_2_set = vCAST_false
;
char *P_9_4_2;
enum bool R_9_4;
unsigned char SBF_9_4 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
struct FILE_TYPE *P_9_5_1;
int P_9_5_2;
enum bool R_9_5;
unsigned char SBF_9_5 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
struct FILE_TYPE *P_9_6_1;
float P_9_6_2;
enum bool R_9_6;
unsigned char SBF_9_6 = 0;
/*vcast_internal_end*/
