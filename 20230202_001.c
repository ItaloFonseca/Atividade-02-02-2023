/*Na turma existem 5 equipes, cada equipe está integrada por 4 alunos definidos pelo nome e sobrenome do aluno.  Crie um programa que permita armazenar os integrantes das equipes e incorpore a funcionalidade que dado um nome retorne em a equipe do aluno.*/

#include <stdio.h>
#include <string.h>
#define EQ 5
#define AL 4
#define MAX 100

int main() {
	int i, j;
	char dados[EQ][AL][MAX], nome[MAX];

	for (i=0; i<EQ; i++) {
		for (j=0; j<AL; j++) {
			printf("Digite o nome do aluno %d da equipe %d: ", j+1, i+1);
			scanf("%s", dados[i][j]);
		}
	}

	printf("Digite o nome do aluno: ");
	scanf("%s", nome);

	for (i=0; i<EQ; i++) {
		for (j=0; j<AL; j++) {
			if (!strcmp(nome, dados[i][j])){
				printf("Equipe: %d\n", i+1 );
				return 0;
			}
		}
	}

	printf("Não encontrado.\n");

	return 0;
}
