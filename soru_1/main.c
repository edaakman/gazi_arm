#include <stdio.h>

int sayi1;
int sayi2;
char islem;
int main(void)
{

   printf("İlk sayıyı giriniz \n");
   scanf("%d", &sayi1);


   printf("İkinci sayıyı giriniz \n");
   scanf("%d", &sayi2);


    printf("İşlemi giriniz \n" );
    scanf("%s", &islem);

    int sonuc;

    switch (islem) {

    case'+'||'t'||'T':
        sonuc=sayi1+sayi2;
        break;
    case'-':
        sonuc=sayi1-sayi2;
        break;
    case'*':
        sonuc=sayi1*sayi2;
        break;
    case'/':
        sonuc=sayi1/sayi2;
        break;

    };

printf("Sonuç= %d, 1=%d 2=%d i=%c\n", sonuc, sayi1, sayi2, islem);


}

