#include <stdio.h>
/* The questions must be asked from the first to the last, in ascending order, from bottom to top. */
int questao2(){
    int vet[] = {12,20,30,42,50,60,72,80,90,10}, i, number;
    
    printf("Digite o numero que quer buscar: ");
    scanf("%d", &number);
    for(i=0; i<10; i++){
        if(vet[i] == number){
            printf("O numero %d esta na posicao %d\n", number, i);
        }else{
            printf("numero nao encontrado\n\n");
        }
    }       
   return 0;

}
int questao1(){
    int vet[10], i;
    for(i=0; i<10; i++){
        printf("Digite o valor da posicao %dª: ", i+1);
        scanf("%d", &vet[i]);
    }
    for (int j = 9; j >= 0; j--){
        printf("%d ", vet[j]);
    }

    return 0;
}
int questoes(){
    int quest, key;

    printf("Escolha uma questão:\n");
    printf("0 - Sair\n");
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
    case 2:
        questao2();
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
    } while (key == 0);
    

    return 0;
}
int main(){

    questoes();

    return 0;
}
