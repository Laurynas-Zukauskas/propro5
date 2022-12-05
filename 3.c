#include<stdio.h>

int main(){
    int n, s;
    int Array[1000];
    printf("Si programa apibrezia naturaliuju skaiciu masyva ir randa jame nariu poras, kuriu sandauga lygi vartotojo nurodytam skaiciui.\n");
    printf("Iveskite ieskomos sandaugos reiksme:\n");
    scanf("%d", &s);
    printf("Iveskite masyvo talpa:\n");
    scanf("%d", &n);
    if(n < 1){
        printf("masyve negali buti neigiamas skaicius nariu.");
        return 0;
    }
    printf("Iveskite masyvo nariu reiksmes:\n");
    for(int i = 0; i < n; ++i){
        scanf("%d", &Array[i]);
    }
    printf("Masyvo nariu poros, kuriu sandauga lygi %d:\n", s);
    for(int i = 0; i < n - 1; ++i){
        for(int j = i + 1; j < n; ++j){
            if((Array[i] * Array[j]) == s){
                printf("%d %d\n", Array[i], Array[j]);
            }
        }
    }
    return 0;
}
