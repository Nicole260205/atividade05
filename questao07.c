#include<stdio.h>

main(){

    //Faça um algoritmo que calcule a media ponderada das notas de 3 provas. A primeira e  a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou  superior a 7.0 pontos. 

    float prova1, prova2, prova3;

    printf("Nota da primeira prova:");
    scanf("%f", &prova1);

    printf("Nota da segunda prova:");
    scanf("%f", &prova2);

    printf("Nota da terceira prova:");
    scanf("%f", &prova3);

    if((prova1 * 1 + prova2 * 1 + prova3 *2) / (1 + 1 + 2) >= 7){
        printf("Aluno aprovado");
    }else{
        printf("Aluno reprovado");
    }


}