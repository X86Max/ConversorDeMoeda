#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

float dolar, real, cambio;
int main(){
	setlocale(LC_ALL, "Portuguese"); 
	printf("Ol� usu�rio! Obrigado por utilizar este conversor! Mais tenha paci�ncia, ele ainda est� em desenvolvimento.\n");
	Sleep(3000);
	printf("Para o funcionamento correto do programa, � necess�rio que voc� insira o pre�o do d�lar no momento.\n");
	Sleep(3000);
	printf("\nInsira aqui: ");
	scanf("%f", &dolar);
	system("cls");
	printf("Ok, o valor do d�lar inserido �: %.2f\n", dolar);
	printf("Agora, vamos converter!\n\n");
	printf("Insira o valor do real: ");
	scanf("%f", &real);
	printf("\nO valor convertido �: %.2f", cambio = dolar * real);
	printf("\n\nObrigado por utilizar o conversor! Te vejo em breve :)\n\n\n");
	Sleep(3000);
	return 0;
}