#include <stdio.h>

int main() {

     char arr[] = "hello";
     char *p = "hello";

     arr[0] = 'H'; // arr은 배열이므로 수정 가능
     printf("%s\n", arr);

     // p[0] = 'H'; // p는 문자열 리터럴 (=read only memory)을 가리키므로 수정 불가능, 런타임 에러 발생
     //printf("%s\n", p);

     return 0;
}
