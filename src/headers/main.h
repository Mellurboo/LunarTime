#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "timedef.h"

#define TAG_TIMEZONE    "-tz"
#define TAG_STARTTIME   "-st"
#define TAG_STARTDATE   "-sd"

#define ERROR_ALLOC_TIMEZONE    "failed to allocate timezone buffer, allocation error\n"
#define ERROR_ALLOC_STARTTIME   "failed to allocate starttime buffer, allocation error\n"
#define ERROR_ALLOC_STARTDATE   "failed to allocate startdate buffer, allocation error\n"

char* timezone_buffer;
char* startdate_buffer;
int starttime_buffer;

lunartime_t time;

