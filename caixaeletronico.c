#include <stdio.h>

int main() {
    // Variáveis iniciais do sistema
    float saldo = 1000.00;
    float emprestimo_devedor = 0.00;
    int opcao = 0;
    float valor = 0.00;

    // Laço de repetição para o menu continuar aparecendo
    while (opcao != 7) {
        printf("\n--- CAIXA ELETRONICO SIMPLIFICADO ---\n");
        printf("1 - Verificar saldo\n");
        printf("2 - Depositar valor\n");
        printf("3 - Sacar valor\n");
        printf("4 - Pedir emprestimo\n");
        printf("5 - Pagar emprestimo\n");
        printf("6 - Consultar emprestimo\n");
        printf("7 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Estrutura de decisão para cada opção do menu
        switch (opcao) {
            case 1:
                printf("\nSeu saldo atual e: R$ %.2f\n", saldo);
                break;

	// deus tenha piedade de mim 
        }
    }

    return 0;
}