#include <stdio.h>

static int all_files; // static을 붙여 다른 파일(sub.c)에서 접근 불가하게 제한
extern void sub(void);

int main(void)
{
    sub();
    printf("%d\n", all_files);
    return 0;
}