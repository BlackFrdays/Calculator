#include <stdio.h>

int main() {
    double sayi1, sayi2, sonuc;
    char islem;

    printf("Birinci sayiyi gir: ");
    scanf("%lf", &sayi1);

    printf("Islem gir (+ - * /): ");
    scanf(" %c", &islem);

    printf("Ikinci sayiyi gir: ");
    scanf("%lf", &sayi2);

    switch (islem) {
        case '+':
            sonuc = sayi1 + sayi2;
            printf("Sonuc: %.2lf\n", sonuc);
            break;
        case '-':
            sonuc = sayi1 - sayi2;
            printf("Sonuc: %.2lf\n", sonuc);
            break;
        case '*':
            sonuc = sayi1 * sayi2;
            printf("Sonuc: %.2lf\n", sonuc);
            break;
        case '/':
            if (sayi2 != 0) {
                sonuc = sayi1 / sayi2;
                printf("Sonuc: %.2lf\n", sonuc);
            } else {
                printf("Hata: Sifira bolme yapilamaz.\n");
            }
            break;
        default:
            printf("Gecersiz islem.\n");
    }

    return 0;
}