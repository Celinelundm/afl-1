#include <stdio.h>
#include "hamming.h"

int hamming_distance(char dna1[], char dna2[]) {
    int diff = 0;
    for (int i = 0; dna1[i] != '\0' && dna2[i] != '\0'; i++) {
        if (dna1[i] != dna2[i]) {
            diff++;
        }
    }
    return diff;
}


