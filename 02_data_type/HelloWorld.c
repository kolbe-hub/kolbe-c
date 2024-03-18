
/** <stdio.h> 和 "stdio.h"的区别在于，使用<>用于去标准库查找，使用""则代表优先从当前目录查找，找不到再从标准库找 **/
#include <stdio.h>

int main()
{
    int a = 1;
    int* b = &a;
    printf("%d", b);
}