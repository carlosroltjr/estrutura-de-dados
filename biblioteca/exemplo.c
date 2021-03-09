#include "exemplo.h"

struct Aluno_ {
    int matricula;
    float notas[3];
};

Aluno* criarAluno(int matricula) {
    struct Aluno_* a = (struct Aluno_*) malloc(sizeof(struct Aluno_));

    if (a != NULL) {
        a->matricula = matricula;
        a->notas[0] = 0;
        a->notas[1] = 0;
        a->notas[2] = 0;
    }

    return a;
}

void definirNotas(Aluno* aluno, float nota1, float nota2, float nota3) {
    aluno->notas[0] = nota1 * 0.2;
    aluno->notas[1] = nota2 * 0.2;
    aluno->notas[2] = nota3 * 0.6;
}

void definirNota(Aluno* aluno, float nota, int sequencia) {
    if (sequencia < 1 || sequencia > 3) {
        printf("Erro: a sequência deve ser entre 1 e 3.\n");
    } else {
        aluno->notas[sequencia-1] = nota;
    }
}

float obterMedia(Aluno* aluno) {
    float media;

    media = (aluno->notas[0] + aluno->notas[1] + aluno->notas[2]);

    return media;
}

void obterNotas(Aluno* aluno, float* nota1, float* nota2, float* nota3, float* media) {
    *nota1 = aluno->notas[0];
    *nota2 = aluno->notas[1];
    *nota3 = aluno->notas[2];
    *media = obterMedia(aluno);
}

void liberar(Aluno* aluno) {
    free(aluno);
}
