#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int a, b, c;
    int Array[1000];
    srand(time(NULL));
    printf("Si programa apibrezia sveikuju skaiciu masyva, kurio nariai yra atsitiktiniai skaiciai, priklausantys vartotojo apibreztam intervalui.\n");
    printf("Iveskite intervalo ribas:\n");
    scanf("%d%d", &a, &b);
    if(a >= b){
        printf("Antra masyvo riba turi buti didesne uz pirma.");
        return 0;
    }
    printf("Iveskite masyvo talpa:\n");
    scanf("%d", &c);
    if(c < 1){
        printf("masyve negali buti neigiamas skaicius nariu.");
        return 0;
    }
    for(int i = 0; i < c; ++i){
        Array[i] = rand() % (b - a + 1) + a;
        printf("%d ", Array[i]);
    }
    return 0;
}
