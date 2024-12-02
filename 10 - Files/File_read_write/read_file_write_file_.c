#include <stdio.h>
int main() {
    FILE *inFile, *outFile;
    char ch;

    inFile = fopen("in.txt", "r");
    outFile = fopen("out.txt", "w");

    while((ch = fgetc(inFile))!= EOF) {
        fputc(ch, outFile);
        putchar(ch);
    }
    fclose(inFile);
    fclose(outFile);
    return 0;
}
