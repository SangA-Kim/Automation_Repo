#include "c:/vcast/mingw/include/stdlib.h"
#include "c:/vcast/mingw/include/string.h"
/*vcast_header_expansion_start:C:/VCAST/Environments/Git_Test/SourceFiles/datalink_types.h*/
extern int log_msg(void *msg, int msg_len);
extern int calc_crc(void *msg, int msg_len);
extern void reset_transmitter(void);
enum e_msg_sts
{
  BAD_PTR = -1,
  BAD_MSG = -2,
  TX_GOOD = 0,
  TX_BAD,
  RX_GOOD,
  RX_BAD,
};
typedef enum e_msg_sts t_msg_sts;
struct s_msg_hdr
{
    unsigned char len;
    unsigned char num;
    unsigned char crc;
};
typedef struct s_msg_hdr t_msg_hdr;
struct s_msg_packet
{
    t_msg_hdr hdr;
    unsigned char data[100];
};
typedef struct s_msg_packet t_msg_packet;
/*vcast_header_expansion_end*/
/*vcast_header_expansion_start:C:/VCAST/Environments/Git_Test/SourceFiles/datalink_hdwr_tx.h*/
extern inline void hw_send_rts(void);
extern inline int hw_check_cts(void);
extern inline void hw_tx_byte(unsigned char ch );
inline void hw_send_rts(void)
{/*vcast_internal_start*/
#define VCAST_STUBBED_INLINE_3686245375
#include "vcast_stubbed_inlines.cpp"
#undef VCAST_STUBBED_INLINE_3686245375
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
        *((unsigned char *)0x8000000) |= 1;
/*vcast_internal_start*/}/*vcast_internal_end*/
}
inline int hw_check_cts(void)
{/*vcast_internal_start*/
#define VCAST_STUBBED_INLINE_1321332304
#include "vcast_stubbed_inlines.cpp"
#undef VCAST_STUBBED_INLINE_1321332304
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
     return(*((unsigned char *)0x8000000) & 1);
/*vcast_internal_start*/}/*vcast_internal_end*/
}
inline void hw_tx_byte(unsigned char ch )
{/*vcast_internal_start*/
#define VCAST_STUBBED_INLINE_3236889976
#include "vcast_stubbed_inlines.cpp"
#undef VCAST_STUBBED_INLINE_3236889976
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
    *((unsigned char *)0x8000004) = ch;
/*vcast_internal_start*/}/*vcast_internal_end*/
}
/*vcast_header_expansion_end*/
t_msg_sts data_tx_V1( unsigned char *msg, unsigned char msg_len )
{/*vcast_internal_start*/
extern unsigned char *P_9_4_1;
extern unsigned char P_9_4_2;
extern enum e_msg_sts R_9_4;
extern unsigned char SBF_9_4;
if(SBF_9_4) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_4036716187
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_4036716187
  if ( vcast_is_in_driver ) {
    P_9_4_1 = msg;
    P_9_4_2 = msg_len;
    vCAST_COMMON_STUB_PROC_9( 9, 4, 3, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_4036716187
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_4036716187
  vCAST_USER_CODE_TIMER_START();
  return R_9_4;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
    int timeout_ctr=0;
    int i=0;
    if (!msg)
    {
        return(BAD_PTR);
    }
    if ((msg_len < 1) || (msg_len > 100))
    {
        return(BAD_MSG);
    }
/*

#define HW_STS_REG  ((unsigned char *)0x8000000)

#define HW_DATA_REG ((unsigned char *)0x8000004)

*/
    while (i < msg_len)
    {
        *((unsigned char *)0x8000000) = 1;
        if (*((unsigned char *)0x8000000) & 1)
        {
            timeout_ctr = 0;
            ((unsigned char *)0x8000004)[i++] = *msg++;
        }
        else
        {
            if (++timeout_ctr > 10)
            {
                reset_transmitter();
                log_msg(msg, msg_len);
                return(TX_BAD);
            }
        }
    }
    return(TX_GOOD);
/*vcast_internal_start*/}/*vcast_internal_end*/
}
t_msg_sts data_tx_V2( unsigned char *data_ptr, unsigned char data_len )
{/*vcast_internal_start*/
extern unsigned char *P_9_5_1;
extern unsigned char P_9_5_2;
extern enum e_msg_sts R_9_5;
extern unsigned char SBF_9_5;
if(SBF_9_5) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_1771190049
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_1771190049
  if ( vcast_is_in_driver ) {
    P_9_5_1 = data_ptr;
    P_9_5_2 = data_len;
    vCAST_COMMON_STUB_PROC_9( 9, 5, 3, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_1771190049
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_1771190049
  vCAST_USER_CODE_TIMER_START();
  return R_9_5;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
    int timeout_ctr=0;
    int i=0;
    if (!data_ptr)
    {
        return(BAD_PTR);
    }
    while (i < data_len)
    {
        hw_send_rts();
        if (hw_check_cts())
        {
            timeout_ctr = 0;
            hw_tx_byte(*data_ptr++);
            i++;
        }
        else
        {
            if (++timeout_ctr > 10)
            {
                reset_transmitter();
                log_msg(data_ptr, data_len);
                return(TX_BAD);
            }
        }
    }
    return(TX_GOOD);
/*vcast_internal_start*/}/*vcast_internal_end*/
}
static int log_flag=1;
t_msg_sts pkt_transmit( unsigned char *msg, unsigned char msg_len, unsigned char msg_num )
{/*vcast_internal_start*/
extern unsigned char *P_9_6_1;
extern unsigned char P_9_6_2;
extern unsigned char P_9_6_3;
extern enum e_msg_sts R_9_6;
extern unsigned char SBF_9_6;
if(SBF_9_6) {
  vCAST_USER_CODE_TIMER_STOP();
#define BEGINNING_OF_STUB_USER_CODE_9_313951443
#include "vcast_configure_stub.c"
#undef BEGINNING_OF_STUB_USER_CODE_9_313951443
  if ( vcast_is_in_driver ) {
    P_9_6_1 = msg;
    P_9_6_2 = msg_len;
    P_9_6_3 = msg_num;
    vCAST_COMMON_STUB_PROC_9( 9, 6, 4, 0 );
  } /* vcast_is_in_driver */
#define END_OF_STUB_USER_CODE_9_313951443
#include "vcast_configure_stub.c"
#undef END_OF_STUB_USER_CODE_9_313951443
  vCAST_USER_CODE_TIMER_START();
  return R_9_6;
}
/*vcast_internal_end*/
/*vcast_internal_start*/{/*vcast_internal_end*/
    t_msg_packet pkt;
    int rc;
    char log_buf[200];
    if (!msg)
    {
        return(BAD_PTR);
    }
    if ((msg_len < 1) || (msg_len > 100))
    {
        return(BAD_MSG);
    }
    pkt.hdr.len = msg_len + sizeof(pkt.hdr);
    pkt.hdr.num = msg_num;
    pkt.hdr.crc = calc_crc(msg, msg_len);
    memcpy(pkt.data, msg, msg_len);
    rc = data_tx_V2( (unsigned char *)&pkt, sizeof(t_msg_hdr) + msg_len );
    if (log_flag)
    {
        strncpy(log_buf, "Message Transmitted: ", sizeof(log_buf));
        strncat(log_buf, msg, sizeof(log_buf));
        log_msg( log_buf, sizeof(log_buf) );
    }
    return(rc);
/*vcast_internal_start*/}/*vcast_internal_end*/
}
/*vcast_internal_start*/
unsigned char SBF_9_1 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
int R_9_2;
unsigned char SBF_9_2 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
unsigned char P_9_3_1;
unsigned char SBF_9_3 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
unsigned char *P_9_4_1;
unsigned char P_9_4_2;
enum e_msg_sts R_9_4;
unsigned char SBF_9_4 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
unsigned char *P_9_5_1;
unsigned char P_9_5_2;
enum e_msg_sts R_9_5;
unsigned char SBF_9_5 = 0;
/*vcast_internal_end*/
/*vcast_internal_start*/
unsigned char *P_9_6_1;
unsigned char P_9_6_2;
unsigned char P_9_6_3;
enum e_msg_sts R_9_6;
unsigned char SBF_9_6 = 0;
/*vcast_internal_end*/
