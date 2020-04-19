#include <stdio.h>
union key{
    int k;
    char ch[2];
}u;
int main(){
    u.k=258;
    printf("%x %x\n",u.ch[0],u.ch[1]);
    u.k=1212;
    printf("0x%02hhX %02hhx",u.ch[0],u.ch[1]);

    return 0;
}