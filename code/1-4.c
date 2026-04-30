#include <stdio.h>

int my_strcmp(const char *a, const char *b) {
    while (*a && *b) {      // a와 b가 모두 널 문자가 아닐 때
        if (*a != *b) {     // a와 b의 현재 문자가 다르면, 그 차이를 반환
            return *a - *b;
        }
        a++;
        b++;
    }
    return *a - *b;
}

int main() {    
    
    printf("%d\n", my_strcmp("abc", "abcd"));
    printf("%d\n", my_strcmp("abc", "abc"));
    printf("%d\n", my_strcmp("b", "a"));
        
    return 0;
}
