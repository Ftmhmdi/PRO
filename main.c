#include <stdio.h>
int fact(int x){int res;
    if (x==0){res=1;}
    else{res=x*fact(x-1);}
    return res;
}
int main() {int x;
    printf("Hello, World!\n");
    scanf("%d",&x);
    printf("%d",fact(x));

    return 0;
}
