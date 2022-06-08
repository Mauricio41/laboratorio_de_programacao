#include <stdio.h>
/* The questions must be asked from the first to the last, in ascending order, from bottom to top. */
int questoes(){
    int quest, key;

    printf("Escolha uma questão:\n");
    scanf("%d", &quest);
    do{
      switch (quest){
    case 0:
        printf("Saindo...\n");
        key = 1;
        break;
    case 1:
        questao1();
        key = 0;
        break;
    /* add news questions to the bottom.
    Structure:
    case [number]:
        [question_number]();
        key = 0;
        break; */
    default:
        printf("Questao invalida!");
        break;
    }  
    } while (key == 1);
    

    return 0;
}
int main(){

    questoes();

    return 0;
}