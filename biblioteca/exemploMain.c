#include "exemplo.h"

int main() {
    Aluno *aluno;

    aluno = criarAluno(2009543);
    definirNotas(aluno, 9.4, 8.6, 7);

    float nota1, nota2, nota3, media;

    obterNotas(aluno, &nota1, &nota2, &nota3, &media);
    liberar(aluno);

    printf("nota1 (peso 2) = %.2f\n", nota1);
    printf("nota2 (peso 2) = %.2f\n", nota2);
    printf("nota3 (peso 6) = %.2f\n", nota3);
    printf("media = %.2f\n", media);
}
