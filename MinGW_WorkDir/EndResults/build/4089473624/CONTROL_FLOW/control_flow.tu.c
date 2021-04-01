#line 3 "vcast_preprocess.2968.10.c"                                                                                                                           
# 1 "vcast_preprocess.2968.8.c" 1

typedef int VECTORCAST_MARKER__UNIT_PREFIX_START;

typedef int VECTORCAST_MARKER__UNIT_PREFIX_END;
# 1 "C:/VCAST/Environments/Git_Test/SourceFiles/control_flow.c" 1






enum e_shape {
  CYLINDER,
  CONE,
  BOX,
};



extern int validShape ( enum e_shape shape, float x, float y, float z );

float widthX =0;
float lengthY =0;
float heightZ =0;


void setDimensions (float x, float y, float z) {

    widthX = x;
    lengthY = y;
    heightZ = z;
}


float computeBaseArea ( enum e_shape shape ) {
    float area, radius;

    if (!validShape( shape, widthX, lengthY, heightZ ))
    {
        area = 0;
    }
    else
    {
        switch (shape) {
          case BOX: area = widthX * lengthY; break;
          case CONE: radius = widthX/2; area = 3.14159265 *(radius * radius); break;
          case CYLINDER: radius = widthX/2; area = 3.14159265 *(radius * radius); break;
        }
    }

    return area;
}


float computeVolume ( enum e_shape shape ) {
    float volume, radius;

    if (!validShape( shape, widthX, lengthY, heightZ ))
    {
        volume = 0;
    }
    else
    {
        switch (shape) {
          case BOX: volume = widthX * lengthY * heightZ; break;
          case CONE: radius = widthX/2; volume = (1/3)*heightZ * (3.14159265 *(radius * radius)); break;
          case CYLINDER: radius = widthX/2; volume = heightZ * (3.14159265 *(radius * radius)); break;
        }
       volume = widthX * lengthY * heightZ;
    }
    return volume;
}


int Status;


void partitionExample (
     unsigned char numberOfIterations) {

    if (numberOfIterations < 20)
        Status = 1;
    else if (numberOfIterations < 40)
        Status = 2;
    else if (numberOfIterations < 60)
        Status = 3;
    else if (numberOfIterations < 80)
        Status = 4;
    else if (numberOfIterations < 100)
        Status = 5;

}


void someExternalFunctionA ();
void someExternalFunctionB();
void someExternalFunctionC();
void someExternalFunctionD();
void someExternalFunctionE();

void controlFlowExample () {

      someExternalFunctionA();
      someExternalFunctionB();
      someExternalFunctionC();
      someExternalFunctionD();
      someExternalFunctionE();
    }
# 6 "vcast_preprocess.2968.8.c" 2

typedef int VECTORCAST_MARKER__UNIT_APPENDIX_START;

typedef int VECTORCAST_MARKER__UNIT_APPENDIX_END;
# 4 "vcast_preprocess.2968.10.c" 2

                                               
