#include <stdio.h>
 
void calcularNotaFinal(int N, float notas[], float *notaFinal) {
    // Ordenar o vetor de notas
    for(int i = 0; i < N-1; i++) {
        for(int j = 0; j < N-i-1; j++) {
            if(notas[j] > notas[j+1]) {
                float temp = notas[j];
                notas[j] = notas[j+1];
                notas[j+1] = temp;
            }
        }
    }
    
    // Excluir a maior e a menor e somar as restantes
    *notaFinal = 0.0;
    for(int i = 1; i < N-1; i++) {
        *notaFinal += notas[i];
    }
}
 
int main() {
    int N;
    float notas[100];
    float notaFinalCandidato = 0.0;
    int contadorTestes = 0;
 
    while(1) {
        // Ler o número de notas
        scanf("%d", &N);
 
        // Condição de término
        if (N == 0) break;
 
        // Verificar se N é maior que 2
        if (N <= 2) {
            printf("O número de notas deve ser maior que 2.\n");
            continue;
        }
 
        // Ler as notas
        for(int i = 0; i < N; i++) {
            scanf("%f", &notas[i]);
        }
 
        float notaFinalTeste;
        calcularNotaFinal(N, notas, &notaFinalTeste);
 
        // Somar a nota final do teste à nota final do candidato
        notaFinalCandidato += notaFinalTeste;
 
        // Exibir a nota do teste
        contadorTestes++;
        printf("Nota do teste %d = %.2f\n", contadorTestes, notaFinalTeste);
    }
 
    // Exibir a nota final do candidato
    printf("Nota final do candidato = %.2f\n", notaFinalCandidato);
 
    return 0;
}