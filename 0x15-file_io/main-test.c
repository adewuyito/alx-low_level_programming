#include <stdio.h>

int main (void){

    // FILE *fopen(const char * filePath, const char * mode);

    FILE *fp;
    fp = fopen ("File.txt", "w");
    // File processing


    fprintf(fp, "%s", "hello world");


    fclose(fp);
}