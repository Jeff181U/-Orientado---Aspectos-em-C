#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char tipo_conta[20];
    float saldo;
} 

ContaBancaria;

// Função para verificar o saldo de uma conta
void verificarSaldo(ContaBancaria *conta, float valor) {
    if (conta->saldo >= valor) {
        printf("\nSaque de %.2f realizado com sucesso na conta %s.\n", valor, conta->tipo_conta);
        conta->saldo -= valor;
    } else {
        printf("\nSaldo insuficiente na conta %s para realizar o saque de %.2f.\n", conta->tipo_conta, valor);
    }
}


int main() {
    float valorSaque = 0.0;
    
    ContaBancaria corrente = {"Corrente", 1.0};
    ContaBancaria salario = {"Salario", 22.0};
    ContaBancaria poupanca = {"Poupanca", 122.0};
    ContaBancaria investimento = {"Investimento", 12345.0};


   printf("Qual o valor que você gostaria de sacar:");
   scanf("%f", &valorSaque);

 
    verificarSaldo(&corrente, valorSaque);
    verificarSaldo(&salario, valorSaque);
    verificarSaldo(&poupanca, valorSaque);
    verificarSaldo(&investimento, valorSaque);

    return 0;
}
