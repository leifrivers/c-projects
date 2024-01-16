#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc == 0 || argc == 1) {
        printf("Usage: cgrep [search_term][FILE]\n");
        exit(1);
    }
    for (int i = 2; i < argc; i++ ) {
        FILE *fp = fopen(argv[i], "r");
        if (fp == NULL) {
            printf("cannot open file %s \n", argv[i]);
            exit(1);
        }
        char buffer[256];
        while (fgets(buffer, 265, fp) != NULL) {
            if (strstr(buffer, argv[1]) != NULL) {
                printf("%s", buffer);
            }
        }
        fclose(fp);
}
}

