#line 3 "vcast_preprocess.18464.10.c"                                                                                                                            
# 1 "vcast_preprocess.18464.8.c" 1

typedef int VECTORCAST_MARKER__UNIT_PREFIX_START;

typedef int VECTORCAST_MARKER__UNIT_PREFIX_END;
# 1 "C:/VCAST/Environments/Git_Test/SourceFiles/mcdc_example.c" 1

/*

 *  This function determines if a company is open for business depending on the day/time.

 *  It returns a simple true/false value based on the input day/time.

 *  Time is in military time (i.e. 1700 equals 5pm)

 */
enum e_day_of_week {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY} ;

typedef enum e_day_of_week t_day_of_week;

int open_for_business(int time, t_day_of_week day)
{

  if ((time > 800) && (time < 1700) && (day != SUNDAY))
  {
    return(1);
  }
  else
  {
    return(0);
  }

}


int Conditional_Example (int a, int b, int c) {

   if (a && (b || c))
      return 1;
   else
      return 0;

}

//
//  The following functions may be of additional interest, wrt MC/DC, but are ifdef'd out for now
//
# 6 "vcast_preprocess.18464.8.c" 2

typedef int VECTORCAST_MARKER__UNIT_APPENDIX_START;

typedef int VECTORCAST_MARKER__UNIT_APPENDIX_END;
# 4 "vcast_preprocess.18464.10.c" 2

                                               
