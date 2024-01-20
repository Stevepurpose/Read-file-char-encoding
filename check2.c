#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("path/to/file", "rb");

    if (fp != NULL) {
        char buffer[4];
        while (fgets(buffer, sizeof(buffer), fp) != NULL) {
            for (int i = 0; buffer[i] != '\0'; i++) {
                printf("%02X ", (unsigned char)buffer[i]); // Use %04X for 4-digit hexadecimal with leading zeros
            }
        }
        fclose(fp);
    } else {
        printf("Error opening file\n");
    }
    return 0;
}

