/*
    Sayma sayılarında 10’luk sayı sisteminde yalnızca 4 tane factorion sayı var. 
    İyi ama factorion sayı ne demek? Basamaklarının faktöriyelleri toplamı kendisine 
    eşit olan sayıya factorion deniyor. 
    Örneğin abc tamsayısı eğer bir factorion ise
    abc = a! + b! + c!
    eşitliğinin doğru olması gerekiyor. 

    İlk iki factorion sayının 1 ve 2 olduğu açık. Diğer iki factorion sayıyı da bir 
    C programı yazarak siz bulun. Bir ipucu olarak her iki sayının da 100.000‘den küçük 
    olduğunu söyleyelim.
*/

#include <stdio.h>
#define SIZE 100000

int get_fact(int);
int get_digit_fact(int);

int main() {
    for(int i = 1; i < SIZE; ++i) 
        if(i == get_digit_fact(i)) // Sayı ve sayının basamaklarının
            printf("%d\n", i);     // faktöriyelleri toplamının eşitliğini sınar.
       
}
int get_fact( int val)  // Bu fonksiyon bir sayının faktöriyelini hesaplar.
{   
    return val < 2 ? 1 : get_fact(val - 1) * val;
}
int get_digit_fact(int val)  // Bu fonksiyon bir sayının basamaklarının
{                            // faktöriyelleri toplamını hesaplar.
    int digit = 0;
    int sum = 0;
    while(val != 0) {
        digit = val % 10;
        sum += get_fact(digit);
        val /= 10;
    }
    return sum;
}
