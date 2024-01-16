#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        printf("Usage: ccat [FILE]\n");
        exit(1);
    }
    for (int i = 1; i < argc; i++ ) {
        FILE *fp = fopen(argv[i], "r");
        if (fp == NULL) {
            printf("cannot open file %s \n", argv[i]);
            exit(1);
        }
        char buffer[256];
        while (fgets(buffer, 265, fp) != NULL) {
            printf("%s", buffer);
        }
        printf("\n");
        fclose(fp);
    }
}



