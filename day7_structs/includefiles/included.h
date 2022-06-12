#define NUMBER 100
#ifndef SMALL
int my_global_int = NUMBER ;
#else
int my_global_int = NUMBER /10 ;
#endif

