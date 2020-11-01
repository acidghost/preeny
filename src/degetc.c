#include <stdio.h>
#include "logging.h"

int getc(FILE *stream) {
    preeny_info("getc blocked\n");
    return '\0';
}
