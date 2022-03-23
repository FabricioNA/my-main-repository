#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    float Vel, Kg, GC, Th,  Tm, GT, VK, GTd, GTT;
    printf ("Qual seu peso atualmente? \n");
    scanf ("%f", &Kg);
    printf ("Qual foi sua velocidade média em Km/h? \n");
    scanf ("%f", &Vel);
    printf ("Qual foi o tempo em horas de sua corrida? \n");
    scanf ("%f", &Th);
    GC = Vel * Kg * (0.0175);
    Tm = Th * 60;
    GT = GC * Tm;
    GTd = 30 * Kg;
    GTT = GT + GTd;
    printf ("Seu gasto calórico total em sua corrida foi: %.2f \n", GT);
    printf ("Então seu déficit calórico total sem comer foi: %.2f \n", GTT);    

}
 // GASTO CALÓRICO EM CALORIAS/ MIN = VELOCIDADE(KM/H) X PESO (Kg) x 0,0175
 // um adulto gordo necessita de 30 cal x kg (ex: adulto de 100 kg – 30×100=3000 cal/dia).

