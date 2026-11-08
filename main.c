#include <stdio.h>
int main(void)
{
    int input;
    long sum = 0;
    scanf("%d", &input);
    if(input < 0) {
        printf("NG");
        return 0;
    }
    // 1からinputまでの総和
    for(int cnt = 1; cnt <= input; cnt++) {
        if((cnt % 3 != 0) && (cnt % 5 != 0))    // 3の倍数と5の倍数は加算しない
            sum += cnt;
    }
    printf("%ld", sum);
    return 0;
}

/*
#include <stdio.h>
int main(void)
{
    int a;
    long s=0;
    scanf("%d",&a);
    if(a < 0){
        printf("NG");
        return 0;
    }
    for(int i=1;;i++) {
        if(i > a)break;
        if(i % 3 == 0 || i % 5 == 0) continue;
        s += i;
    }
    printf("%ld",s);
    return 0;
}
*/