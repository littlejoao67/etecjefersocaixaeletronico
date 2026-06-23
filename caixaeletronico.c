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

	case 2:
                printf("\nDigite o valor para deposito: R$ ");
                scanf("%f", &valor);
                if (valor > 0) {
                    saldo = saldo + valor;
                    printf("Deposito realizado com sucesso!\n");
                } else {
                    printf("Valor invalido!\n");
                }
                break;

            case 3:
                printf("\nDigite o valor para saque: R$ ");
                scanf("%f", &valor);
                if (valor > 0 && valor <= saldo) {
                    saldo = saldo - valor;
                    printf("Saque realizado com sucesso!\n");
                } else {
                    printf("Saldo insuficiente ou valor invalido!\n");
                }
                break;

            case 4:
                printf("\nDigite o valor do emprestimo que deseja: R$ ");
                scanf("%f", &valor);
                if (valor > 0) {
                    saldo = saldo + valor;
                    emprestimo_devedor = emprestimo_devedor + valor;
                    printf("Emprestimo aprovado e adicionado ao seu saldo!\n");
                } else {
                    printf("Valor invalido!\n");
                }
                break;

		//deus eh maravilhoso cara
        }
    }

    return 0;
}