#include <stdio.h>

int main()
{
    int quantidade;
	float nota, somaNotas = 0.0f, mediaTurma;
	
	do{
	printf("Digite a quantidade de alunos: ");
	scanf("%d", quantidade);
	
	if (quantidade<=0);
	printf("Quantidade invalida de alunos.\n")
	}
	    
	}while (quantidade,<=0);

    for(int i= 1; i<quantidade;i++){
        do{
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);
        if(nota<0 || nota>10);
        printf("Nota inválida! Digite novamente: ");
        } 
        }while(nota <0 || nota >10);
        
    somaNotas += nota;
    
    mediaTurma = somaNotas / quantidade;
    
    printf("A média da turma é: %.2f\n.", mediaTurma);
	
	return 0;
}