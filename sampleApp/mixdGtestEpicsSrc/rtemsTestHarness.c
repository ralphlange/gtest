/*************************************************************************\
* Copyright (c) 2012 UChicago Argonne LLC, as Operator of Argonne
*     National Laboratory.
* SPDX-License-Identifier: EPICS
* EPICS BASE is distributed subject to a Software License Agreement found
* in file LICENSE that is included with this distribution.
\*************************************************************************/

extern void epicsRunSampleTests(void);

int main(int argc, char **argv)
{
    epicsRunSampleTests();  /* calls epicsExit(0) */
    return 0;
}
