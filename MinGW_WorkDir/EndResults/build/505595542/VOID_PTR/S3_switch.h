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
#ifndef S3_SWITCH_H
#define S3_SWITCH_H   

void vcast_S3_switch( int, int );

#ifdef VCAST_SBF_UNITS_AVAILABLE
void vcast_initialize_sbf_flag( int, int );
#endif /* VCAST_SBF_UNITS_AVAILABLE */

#endif /* S3_SWITCH_H */
