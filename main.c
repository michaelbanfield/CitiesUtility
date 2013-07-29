/* 
 * File:   main.c
 * Author: michaelb
 *
 * Created on 29 July 2013, 8:01 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int cities = 0, bound = 0, i = 0;
    FILE* mapFile;
    
    if (argc == 4) {
        cities = atoi(argv[1]);
        bound = atoi(argv[2]);
        mapFile = fopen(argv[3], "w");
    } else {
        fprintf(stderr, "Wrong number of arguments\n");
        return 2;
    }
    srand(time(NULL));
    
    for (i = 0; i < cities; i++) {
        fprintf(mapFile, "%d %d\n", rand() % bound, rand() % bound);
    }
    

    return (EXIT_SUCCESS);
}
