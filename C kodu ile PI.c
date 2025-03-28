﻿#include <stdio.h>
#include <math.h>

double pi_hesapla(int tekrar) {
    double pi = 0.0;
    int isaret = 1;

    for (int x = 0; x < tekrar; x++) {
        pi += isaret * (1.0 / (2 * x + 1));
        isaret *= -1;
    }

    return 4 * pi;
}

int main() {
    int hangi;
    
    printf("Hangi kodu kullanalim? ");
    scanf("%d", &hangi);

    if (hangi == 1) {
    const char *pi = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644288109756659334461284756482337867831652712019091456485669234603486104543266482133936072602491412737245870066063155881748815209209628292540917153643678925903600113305305488204665213841469519415116094330572703657595919530921861173819326117931051185480744623799627495673518857527248912279381830119491298336733624406566430860213949463952247371907021798609437027705392171762931767523846748184676694051320005681271452635608277857713427577896091736371787214684409012249534301465495853710507922796892589235420199561121290219608640344181598136297747713099605187072113499999983729780499510597317328160963185950244594553469083026425223082533446850352619311881710100031378387528865875332083814206171776691473035982534904287554687311595628638823537875937519577818577805321712268066130019278766111959092164201989";

    int hane;
    printf("Pi sayisinin gormek istediginiz hane sayisini girin (1-571): ");
    scanf("%d", &hane);

    if (hane < 1 || hane > 571) {
        printf("Sadece 1 ila 571 arasi basamak gosterilebilir.\n");
        return 404;
    }

    printf("Pi'nin %d hanesi: %.*s\n", hane, hane + 2, pi);
    return 1;
}

    if (hangi == 2) {
        double islem = 22.0 / 7;
        int hane;

        printf("Bolumun (22/7) gormek istediginiz kadarini girin (.142857 devreder.)\n ");
        scanf("%d", &hane);

        if (hane == 1) {
            printf("1 hane yanlis sonuc verir.");
        }

        printf("%.*f", hane, islem);
        return 1;
    }

    if (hangi == 3) {
        int tekrar;
        
        printf("Tekrar etmek istediginiz kadarini girin: ");
        scanf("%d", &tekrar);

        if (tekrar <= 0) {
            printf("Tekrar sayisi negatif ve 0 olamaz!");
            return 404;
        }
        
        double pi = pi_hesapla(tekrar);
        printf("%d tekrarlamadan sonra Pi'nin degeri: %.15f", tekrar, pi);
    }
    return 0;
}