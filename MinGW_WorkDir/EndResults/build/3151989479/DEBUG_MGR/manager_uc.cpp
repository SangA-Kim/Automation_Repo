
/********************/
void vCAST_VALUE_USER_CODE_9 (
         int vcast_slot_index ) {
/* BEGIN VALUE_USER_CODE_9 */
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
/* BEGIN C-000002.DAT */
if ( ( vCAST_UNIT == 9 ) &&
     ( vCAST_SUBPROGRAM == 3 ) &&
     ( VCAST_test_name_cmp ( "SpinForever" ) == 0 ) ) {
      if ( (UnitIndex == 10) && 
           (SubprogramIndex == 2) ) {
if (P_10_2_1 == 3)
{
  unsigned xyzzz = 10;
  while (xyzzz-- >= 0);
}


      } /* specific stub */
} /* SpinForever */
/* END C-000002.DAT */

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
