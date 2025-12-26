#include <stdio.h>

int main(void) {
    FILE *fp = fopen("million_select_sql4.md", "w+");
    if (fp == NULL) {
        printf("open file failed\n");
        return -1;
    }
    fprintf(fp, "insert into score (score) values\n");
    for (int i = 35001; i < 105000; i++) {
        fprintf(fp, "(%d),\n", i);
    }
    fprintf(fp, "(105000);\n");
    fclose(fp);
    return 0;
}