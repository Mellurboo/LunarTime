#include "headers/minex.h"

char* timezone_buffer;
char* startdate_buffer;
int* starttime_buffer;

lunartime_t time;

/// @brief Linker Entry Point!
/// @param argc argument counter
/// @param argv argument vector
/// @return !
int main(int argc, char* argv[]){
    for (int i = 0; i < argc; i++){
        if (strcmp(argv[i], TAG_TIMEZONE) == 0){
            timezone_buffer = argv[i+1];
            if (timezone_buffer != argv[i+1]) printf(ERROR_ALLOC_TIMEZONE);
            printf("tag %s found, timezone is set to %s\n", TAG_TIMEZONE, timezone_buffer);
        }
        
        if (strcmp(argv[i], TAG_STARTTIME) == 0){
            starttime_buffer = atoi(argv[i+1]);
            if (starttime_buffer != argv[i+1]) printf(ERROR_ALLOC_STARTTIME);
            printf("tag %s found, start time is set to %s\n", TAG_STARTTIME, starttime_buffer);
        }

        if(strcmp(argv[i], TAG_STARTDATE) == 0){
            startdate_buffer = argv[i+1];
            if (startdate_buffer != argv[i+1]) printf(ERROR_ALLOC_STARTDATE);
            printf("tag %s found, start date is set to %s\n", TAG_STARTDATE, startdate_buffer);
        }
    }

    printf("Lunar Time Server has stopped, Goodnight\nMyles Wilson 2025(c). A product of the United Kingdom.");
}