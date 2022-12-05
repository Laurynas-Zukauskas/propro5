#include<stdio.h>
#include<stdlib.h>

int main(){
    int Array[10] = {0};
    int x, y;
    char String[12];
    printf("Si programa:\na)apibrezia sveikuju skaiciu masyva is 10 nariu, priskiria visiems nariams reiksme 0\nb) atspausdina visas masyvo reiksmes\n");
    printf("c) pirmam, ketvirtam ir desimtam nariams priskiria reiksmes 1, 2 ir 3\nd) istrina is masyvo trecia elementa\ne) iterpia nauja nari 4, i septintaja pozicija\n");
    printf("f) atspausdina visas masyvo reiksmes\ng) i vartotojo nurodyta masyvo nari iveda vartotojo ivesta reiksme\n");
    printf("h) istrina is masyvo vartotojo nurodyta nari\ni) i vartotojo nurodyta masyvo vieta iterpia nauja vartotojo nurodyta nari\n");
    printf("j) atspausdina visas masyvo reiksmes\n");
    for(int i = 0; i < 10; ++i){
        printf("%d ", Array[i]);
    }
    printf("\n");
    Array[0] = 1;
    Array[3] = 2;
    Array[9] = 3;
    for(int i = 2; i < 9; ++i){
        Array[i] = Array[i+1];
    }
    for(int i = 9; i > 6; --i){
        Array[i] = Array[i-1];
    }
    Array[6] = 4;
    for(int i = 0; i < 10; ++i){
        printf("%d ", Array[i]);
    }
    printf("\n Iveskite masyvo nario indeksa ir reiksme, kuria norite i si nari irasyti:\n");
    scanf("%d%s", &x, &String);
    if(x < 0 || x > 9){
        printf("Masyvo indeksas turi buti intervale [0;9]");
        return 0;
    }
    if(atoll(String) > 2147483647 || atoll(String) < -2147483648){
        printf("Ivedamas narys turi buti intervale [-2147483648;2147483647]");
        return 0;
    }
    y = atoi(String);
    Array[x] = y;
    printf("\n Iveskite masyvo nario indeksa, kuri norite istrinti:\n");
    scanf("%d", &x);
    if(x < 0 || x > 9){
        printf("Masyvo indeksas turi buti intervale [0;9]");
        return 0;
    }
    for(int i = x; i < 9; ++i){
        Array[i] = Array[i+1];
    }
    printf("\n Iveskite masyvo nario indeksa ir reiksme, kuria norite i si nari iterpti:\n");
    scanf("%d%s", &x, &String);
    if(x < 0 || x > 9){
        printf("Masyvo indeksas turi buti intervale [0;9]");
        return 0;
    }
    if(atoll(String) > 2147483647 || atoll(String) < -2147483648){
        printf("Ivedamas narys turi buti intervale [-2147483648;2147483647]");
        return 0;
    }
    y = atoi(String);
    for(int i = 9; i > x; --i){
        Array[i] = Array[i-1];
    }
    Array[x] = y;
    for(int i = 0; i < 10; ++i){
        printf("%d ", Array[i]);
    }
    return 0;
}
