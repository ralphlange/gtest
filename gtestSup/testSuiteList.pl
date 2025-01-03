#!/usr/bin/env perl
#*************************************************************************\
#* Copyright (c) 2025 ITER Organization.
#* This module is distributed subject to a Software License Agreement found
#* in file LICENSE that is included with this distribution.
#*************************************************************************/
#
#  Author: Ralph Lange <ralph.lange@gmx.de>
#
#	testSuiteList.pl
#
#	called from RULES_GTEST
#
#	Usage: <test-exe-name> --gtest_list_tests | perl testSuiteList.pl
#              returns the names of reported test suites (lines ending in dot)
#
# Put in a minimal script as the appearance of '$' characters
# inside a 'perl -e' expression cannot be written inside a Makefile
# in a way that is portable between Windows (bash, command.com) and Linux

while (my $line = <STDIN>)  {
    if ($line =~ m/^[^[:space:]]*.$/) {
        $line =~ s/.$//;
        print $line;
    }
}
