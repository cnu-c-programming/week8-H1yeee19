#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // 버블 정렬 알고리즘
    // argv[0]은 프로그램의 실행 경로/ 이름이므로 정렬에서 제외하고 인덱스 1부터 실행
    for (int i = 1; i < argc - 1; i++) {
        for (int j = 1; j < argc - i; j++) {
            // strcmp 함수는 두 문자열을 비교하여 사전적으로 어느 것이 더 큰지 판단
            if (strcmp(argv[j], argv[j + 1]) > 0) {
                // 문자열 비교 결과가 양수이면 argv[j]가 argv[j + 1]보다 사전적으로 뒤에 위치
                // 포인터를 교환하여 문자열의 위치를 바꿔줌.
                char *temp = argv[j];
                argv[j] = argv[j + 1];
                argv[j + 1] = temp;
            }
        }
    }

    // 정렬된 문자열을 출력
    for (int i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    return 0;
}
