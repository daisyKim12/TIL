#include <stdio.h>
#include <string.h>

int strlonger1(char *s, char *t){
    return strlen(s) - strlen(t) > 0;
}
int strlonger2(char *s, char *t){
    return strlen(s) > strlen(t);
}

int main(void) {
    char * str1 = "hello";
    char * str2 = "michael.kim.suk.jin";

    printf("%d\n", strlonger1(str1, str2));
    printf("%d\n", strlonger2(str1, str2));

    return 0;
}