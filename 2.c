#include <stdio.h>
// void pjgstr();
int main(){
    char nama[5];
    char nam[5];
    int len=0;

    printf("Masukan nama : ");
    // scanf("%s", nama);
    gets(nama);
    // printf("inputan : %d ", nama);

    // len=strlen(nama);

    for(int i=1;nama[i] != '\0';i++)
    
    len++;

    printf("%d", len);


    // pjgstr(nama);
    // printf("Masukan nama 2: ");
    // gets(nam);
    // puts(nam);
    return 0;
}
// void pjgstr(char nama){
//     int nama = char nama;
//     return (nama);
// }