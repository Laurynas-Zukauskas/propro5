#include<stdio.h>

int Prime(int input);

int main(){
    int Array[1000];
    int input=1, length=0, find;
    printf("Si programa is vartotojo ivestos teigiamu skaiciu sekos isrenka pirminius skaicius.\n");
    printf("Iveskite teigiamu skaiciu seka, kurios pabaiga zymi neteigiamas skaicius:\n");
    scanf("%d", &input);
    while(input > 0){
        find = 0;
        for(int i = 0; i < length; ++i){
            if(input == Array[i]){
                find = 1;
                break;
            }
        }
        if(find == 0 && Prime(input) && input > 1){
            Array[length] = input;
            ++length;
        }
        scanf("%d", &input);
    }
    printf("Ivesti pirminiai skaiciai:\n");
    for(int i = 0; i < length; ++i){
        printf("%d ", Array[i]);
    }
    return 0;
}
int Prime(int input){
    for(int i = 2; i <= sqrt(input); ++i){
        if(input % i == 0) return 0;
    }
    return 1;
}
