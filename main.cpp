#include <stdio.h>
#include<stdlib.h>
main(){
	int i, n;
	int V1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int V2[10]; //Declaração e inicialização do V2

	printf("O vetor V1 contem os valores: \n");
	for(i=0; i<10; i++)
		printf(" %d ", V1[i]);
    //Lê e armazena valor digitado pelo usuário no V2
    printf("\n\n Digite valores para o vetor 2\n", i);
    for(i=0; i<10; i++){
       printf("V2[%d]= ", i);
    	scanf("%d", &n);
    	V2[i] = n;
    }
    printf("O vetor V2 contem os valores: \n");
    for(i=0; i<10; i++)
    	printf(" %d ", V2[i]);

    printf("\n Soma das posicoes dos vetores: \n");
    for(i=0; i<10; i++)
       printf(" %d ", V1[i]+V2[i]);

  system("pause");
}
