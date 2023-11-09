#include <stdio.h>

int main(){
    char nama[5];
    char nam[5];

    printf("Masukan nama : ");
    scanf("%s", nama);
    printf("inputan : %s ", nama);

    printf("Masukan nama 2: ");
    gets(nam);
    puts(nam);
}