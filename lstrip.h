

#ifndef SIS_INCL_H_LSTRIP
#define SIS_INCL_H_LSTRIP

#define SISTOOL_LSTRIP_VER_MAJOR        0
#define SISTOOL_LSTRIP_VER_MINOR        1
#define SISTOOL_LSTRIP_VER_PATCH        0


/* *********************************************************
 * includes
 */

#include <stdio.h>


/* *********************************************************
 * API functions
 */

#ifdef __cplusplus
extern "C"
#endif /* __cplusplus */
int
sistool_lstrip(
    FILE*       in
,   FILE*       out
,   int         flags
);

#endif /* !SIS_INCL_H_LSTRIP */


/* ///////////////////// end of file //////////////////// */

