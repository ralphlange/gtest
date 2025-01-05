/*************************************************************************\
* Copyright (c) 2012 UChicago Argonne LLC, as Operator of Argonne
*     National Laboratory.
* SPDX-License-Identifier: EPICS
* EPICS BASE is distributed subject to a Software License Agreement found
* in file LICENSE that is included with this distribution.
\*************************************************************************/

#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <tap.h>

extern "C" void epicsRunSampleTests(void);

int main(int argc, char **argv)
{
    bool addTapListener = true;

    epicsRunSampleTests();  /* calls epicsExit(0) */

    testing::InitGoogleMock(&argc, argv);

    if (addTapListener) {
        testing::TestEventListeners& listeners = testing::UnitTest::GetInstance()->listeners();
        listeners.Append(new tap::TapListener());
    }
    return RUN_ALL_TESTS();
}
