#include <stdio.h>

// ANSI escape codes for colors
#define RED     "\x1b[31m"
#define ORANGE  "\x1b[38;5;208m"
#define YELLOW  "\x1b[33m"
#define GREEN   "\x1b[32m"
#define BLUE    "\x1b[34m"
#define INDIGO  "\x1b[38;5;54m"
#define VIOLET  "\x1b[35m"
#define RESET   "\x1b[0m"

int main() {
    printf(RED "00000000\n" RESET);
    printf(ORANGE "00000000\n" RESET);
    printf(YELLOW "00000000\n" RESET);
    printf(GREEN "00000000\n" RESET);
    printf(BLUE "00000000\n" RESET);
    printf(INDIGO "00000000\n" RESET);
    printf(VIOLET "00000000\n" RESET);
    
    return 0;
}