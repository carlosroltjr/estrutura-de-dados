#include <stdlib.h>
#include <stdio.h>

typedef struct Aluno_ Aluno;

Aluno* criarAluno(int matricula);
void definirNotas(Aluno* aluno, float nota1, float nota2, float nota3);
void definirNota(Aluno* aluno, float nota, int sequencia);
float obterMedia(Aluno* aluno);
void obterNotas(Aluno* aluno, float* nota1, float* nota2, float* nota3, float* madia);
void liberar(Aluno* aluno);
