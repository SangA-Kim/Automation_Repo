
/********************/
void vCAST_VALUE_USER_CODE_9 (
         int vcast_slot_index ) {
/* BEGIN VALUE_USER_CODE_9 */
/* BEGIN C-000002.DAT */
if ( ( vCAST_UNIT == 9 ) &&
     ( vCAST_SUBPROGRAM == 1 ) &&
     ( VCAST_test_name_cmp ( "CLOSE" ) == 0 ) ) {
if (vcast_initializing) {
/* begin testcase user code*/
/* end   testcase user code */
/* begin constructor user code */
/* end   constructor user code */
} else /* not initializing */ {
/* begin parameter user code */
{
P_9_1_1 = ( R_9_2 );
}

/* end   parameter user code */
} /* initializing */
} /* CLOSE */
/* END C-000002.DAT */

/* BEGIN C-000004.DAT */
if ( ( vCAST_UNIT == 9 ) &&
     ( vCAST_SUBPROGRAM == 2 ) &&
     ( VCAST_test_name_cmp ( "OPEN_WRITE" ) == 0 ) ) {
if (vcast_initializing) {
/* begin testcase user code*/
{
system("del TestOutput.txt");

}

/* end   testcase user code */
/* begin constructor user code */
/* end   constructor user code */
} else /* not initializing */ {
/* begin parameter user code */
/* end   parameter user code */
} /* initializing */
} /* OPEN_WRITE */
/* END C-000004.DAT */

/* BEGIN C-000005.DAT */
if ( ( vCAST_UNIT == 9 ) &&
     ( vCAST_SUBPROGRAM == 3 ) &&
     ( VCAST_test_name_cmp ( "READ_DATA" ) == 0 ) ) {
if (vcast_initializing) {
/* begin testcase user code*/
/* end   testcase user code */
/* begin constructor user code */
/* end   constructor user code */
} else /* not initializing */ {
/* begin parameter user code */
{
P_9_3_1 = ( R_9_2 );
}

/* end   parameter user code */
} /* initializing */
} /* READ_DATA */
/* END C-000005.DAT */

/* BEGIN C-000006.DAT */
if ( ( vCAST_UNIT == 9 ) &&
     ( vCAST_SUBPROGRAM == 4 ) &&
     ( VCAST_test_name_cmp ( "WRITE_DATA" ) == 0 ) ) {
if (vcast_initializing) {
/* begin testcase user code*/
/* end   testcase user code */
/* begin constructor user code */
/* end   constructor user code */
} else /* not initializing */ {
/* begin parameter user code */
{
P_9_4_1 = ( R_9_2 );
}

/* end   parameter user code */
} /* initializing */
} /* WRITE_DATA */
/* END C-000006.DAT */

/* DONE VALUE_USER_CODE_9 */
}

/********************/
void vCAST_EXPECTED_USER_CODE_9 (
         int vcast_slot_index ) {
/* BEGIN EXPECTED_USER_CODE_9 */
/* DONE EXPECTED_USER_CODE_9 */
}

/********************/
void vCAST_EGLOBALS_USER_CODE_9 (
         int vcast_slot_index ) {
/* BEGIN EXPECTED_GLOBALS_USER_CODE_9 */
/* DONE EXPECTED_GLOBALS_USER_CODE_9 */
}

/********************/
void vCAST_STUB_PROCESSING_9 (
         int UnitIndex,
         int SubprogramIndex ) {
    vCAST_GLOBAL_STUB_PROCESSING();
/* BEGIN STUB_VAL_USER_CODE_9 */
/* DONE STUB_VAL_USER_CODE_9 */
}

/********************/
void vCAST_BEGIN_STUB_PROC_9 (
         int UnitIndex,
         int SubprogramIndex ) {
    vCAST_GLOBAL_BEGINNING_OF_STUB_PROCESSING();
/* BEGIN STUB_EXP_USER_CODE_9 */
/* DONE STUB_EXP_USER_CODE_9 */
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
