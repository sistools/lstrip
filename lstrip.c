
/* *********************************************************
 * includes
 */

#include "lstrip.h"

#include <ctype.h>
#include <stdlib.h>
#include <string.h>


/* *********************************************************
 * API functions
 */

int
sistool_lstrip(
    FILE*       in
,   FILE*       out
,   int         flags
)
{
    int ch;
    int at_start    =   1;

    ((void)&flags);

    for (; EOF != (ch = fgetc(in)); )
    {
        if ('\n' == ch)
        {
            //at_start = 1;
        }
        else
        {
            if (at_start && isspace(ch))
            {
                continue;
            }
        }

        fputc(ch, out);

        if ('\n' == ch)
        {
            at_start = 1;
        }
        else
        {
            at_start = 0;
        }
    }

    return EXIT_SUCCESS;
}


/* ///////////////////// end of file //////////////////// */

