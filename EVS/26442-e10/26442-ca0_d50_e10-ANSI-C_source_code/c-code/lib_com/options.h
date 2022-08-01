
/*====================================================================================
    EVS Codec 3GPP TS26.442 Nov 07, 2017. Version 12.10.0 / 13.5.0 / 14.1.0
  ====================================================================================*/

#ifndef OPTIONS_H
#define OPTIONS_H

#include "stl.h"

/* ################### Start compiler switches ######################## */
/*                                                                         */
#ifdef _MSC_VER
#pragma warning(disable:4310)     /* cast truncates constant value this affects mainly constants tables*/
#endif

#define SUPPORT_JBM_TRACEFILE     /* support for JBM tracefile, which is needed for 3GPP objective/subjective testing, but not relevant for real-world implementations */

/*                                                                        */
/* ##################### End compiler switches ######################## */

#endif /* OPTIONS_H */
