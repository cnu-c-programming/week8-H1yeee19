#include <stdio.h>

char *my_strcat(char *dst, const char *src) {
    char *p1 = dst;
    while (*p1) { p1++;}    // dst의 끝을 찾음
    while (*src) { *p1++ = *src++; }    // src의 문자를 dst의 끝에 복사
    *p1 = '\0'; // dst의 끝에 널 문자 추가
    return dst;
}

int main() {
    char str1[20] = "Hello";
    char str2[] = "World";

    printf("%s\n", str1);
    my_strcat(str1, str2);
    printf("%s\n", str1);

    return 0;
}
