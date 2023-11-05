#include <stdio.h>
#include <string.h>
int main(void) {
  char str1[100];
  char str2[200];
  char *pch;
  int len, p;
  puts("문자열 입력");
  scanf("%[^\n]s", str1); 
  len = strlen(str1); // 입력받은 문자열의 길이를 구합니다.
  pch = str1 + len - 1; // NULL문자 바로 앞의 값으로 초기화합니다.
  p = 0; // str2 배열 인덱스 초기화
  while (len > 0) {
    str2[p] = *pch; // 한 문자씩 str2에 복사
    pch--; // 포인터를 이전 문자로 이동
    p++; // 다음 위치로 이동
    len--; // 문자열 길이 감소
  }
  str2[p] = '\0'; // str2에 NULL 문자를 추가하여 문자열 종료를 표시합니다.
  printf("출력 :%s, %s\n",str1, str2); // 거꾸로 된 문자열 출력
  return 0;
}
