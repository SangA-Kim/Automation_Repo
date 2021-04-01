#line 3 "vcast_preprocess.15784.10.c"                                                                                                                            
# 1 "vcast_preprocess.15784.8.c" 1

typedef int VECTORCAST_MARKER__UNIT_PREFIX_START;

typedef int VECTORCAST_MARKER__UNIT_PREFIX_END;
# 1 "C:/VCAST/Training/SourceFiles/SearchPaths/vcast_time.c" 1
# 1 "C:\\VCAST\\TRAINING\\SOURCEFILES\\SEARCHPATHS\\include/vcast_time.h" 1



typedef struct time {
    int mins ;
    int secs ;
} time_T ;


int invalid_time(time_T time_val);
# 2 "C:/VCAST/Training/SourceFiles/SearchPaths/vcast_time.c" 2

time_T time_add_seconds ( time_T start, int seconds )
{
    time_T ret ;
    int newseconds;

    if (invalid_time(start))
    {
        ret.secs=0;
        ret.mins=0;
        return ret;
    }

    newseconds = start.secs + seconds ;
    ret.mins = start.mins ;
    if ( newseconds >= 60 )
    {
        ret.mins++ ;
        newseconds -= 60 ;
    }
    ret.secs = newseconds ;

    return ret ;
}
# 6 "vcast_preprocess.15784.8.c" 2

typedef int VECTORCAST_MARKER__UNIT_APPENDIX_START;

typedef int VECTORCAST_MARKER__UNIT_APPENDIX_END;
# 4 "vcast_preprocess.15784.10.c" 2

                                               
