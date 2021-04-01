#line 3 "vcast_preprocess.17572.10.c"                                                                                                                            
# 1 "vcast_preprocess.17572.8.c" 1

typedef int VECTORCAST_MARKER__UNIT_PREFIX_START;

typedef int VECTORCAST_MARKER__UNIT_PREFIX_END;
# 1 "C:/VCAST/Environments/Git_Test/SourceFiles/line.c" 1

struct coordT {
   float X;
   float Y;
   };

/* functions to determine missing value in 'y = mx + b' */

/* y = mx + b */
float findY ( float x, float m, float b ) {
   return m * x + b;
}

float findX ( float y, float m, float b ) {
   return ( y - b ) / m;
}

float findM ( struct coordT coord, float b ) {
   return ( coord.Y - b ) / coord.X;
}

float findB ( struct coordT coord, float m ) {
   return coord.Y - m * coord.X;
}
# 6 "vcast_preprocess.17572.8.c" 2

typedef int VECTORCAST_MARKER__UNIT_APPENDIX_START;

typedef int VECTORCAST_MARKER__UNIT_APPENDIX_END;
# 4 "vcast_preprocess.17572.10.c" 2

                                               
