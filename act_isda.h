#ifndef ACT_ISDA_H
#define ACT_ISDA_H

#include "isaleapyear/isaleapyear.h"
#include "julianday/julianday.h"
#include <stdlib.h> //exit
#include <stdio.h>

double act_isda(int y1, int m1, int d1, 
                int y2, int m2, int d2);

#endif /* ACT_ISDA_H */
