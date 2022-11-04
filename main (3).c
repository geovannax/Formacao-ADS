#include <stdio.h>
#include <locale.h>
#define STR_S 100

int main()
{
        setlocale(LC_ALL,"portuguese");
        
        char nome[STR_S];
        char rua[STR_S];
        char bairro [STR_S];
        char cidade [STR_S];
        char estado [STR_S];
        char pais [STR_S];
        char numeroTel [STR_S];
        char numeroCasa [STR_S];
        
        printf ("\n\nForneça seus dados");
        
        printf("\n\nNome Completo: ");
        fgets(nome, STR_S, stdin);
        
        printf("\nRua: ");
        fgets(rua, STR_S, stdin);
        
        printf("\nNúmero da residência: ");
        fgets(numeroCasa, STR_S, stdin);
        
        printf("\nBairro: ");
        fgets(bairro, STR_S, stdin);
        
        printf("\nCidade: ");
        fgets(cidade, STR_S, stdin);
        
        printf("\nEstado: ");
        fgets(estado, STR_S, stdin);
        
        
        printf("\nTelefone de Contato: ");
        fgets(numeroTel, STR_S, stdin);
        
        
        
        
        
        
        
        
        
        
        
        
        printf("\n\n---------------------------- DADOS PESSOAIS ----------------------------");
        
        printf("\nNome Completo: %s", nome);
        printf("\nEndereço: \n Rua %s N°%s Bairro: %s Cidade: %s Uf: %s \n", rua, numeroCasa, bairro, cidade, estado);
        printf("Contato: %s",numeroTel);
        
        printf("\n\n------------------------------------------------------------------------");
        
    return 0;
}









