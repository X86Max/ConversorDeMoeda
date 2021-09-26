#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

float dolar, real, cambio;
int main(){
	setlocale(LC_ALL, "Portuguese"); 
	printf("Olá usuário! Obrigado por utilizar este conversor! Mais tenha paciência, ele ainda está em desenvolvimento.\n");
	Sleep(3000);
	printf("Para o funcionamento correto do programa, é necessário que você insira o preço do dólar no momento.\n");
	Sleep(3000);
	printf("\nInsira aqui: ");
	scanf("%f", &dolar);
	system("cls");
	printf("Ok, o valor do dólar inserido é: %.2f\n", dolar);
	printf("Agora, vamos converter!\n\n");
	printf("Insira o valor do real: ");
	scanf("%f", &real);
	printf("\nO valor convertido é: %.2f", cambio = dolar * real);
	printf("\n\nObrigado por utilizar o conversor! Te vejo em breve :)\n\n\n");
	Sleep(3000);
	return 0;
}
