#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
	setlocale(LC_ALL,"portuguese");
	int i,bronze,prata,soma,ouro1,ouro2,ouro3,ouro4,ouro5;
	
	for(i=0;i<=2;i++){
	printf("1 - Brasil\n");
	printf("2 - EUA\n");
	printf("3 - Russia\n");
	printf("4 - Japão\n");
	printf("5 - Alemenha\n\n");
	
	printf("Digite a quantidade de medalha de cada país: \n");
	printf("1 - Brasil\n");
	printf("Ouro:");
	scanf("%d",&ouro1);
	printf("Prata:");
	scanf("%d",&prata);
	printf("Bronze:");
	scanf("%d",&bronze);
	soma=(ouro1+prata+bronze);
	printf("total de medalhas: %d\n\n",soma);
	
	printf("2 - EUA\n");
	printf("Ouro:");
	scanf("%d",&ouro2);
	printf("Prata:");
	scanf("%d",&prata);
	printf("Bronze:");
	scanf("%d",&bronze);
	soma=(ouro2+prata+bronze);
	printf("total de medalhas: %d\n\n",soma);
	
	printf("3 - Russia\n");
	printf("Ouro:");
	scanf("%d",&ouro3);
	printf("Prata:");
	scanf("%d",&prata);
	printf("Bronze:");
	scanf("%d",&bronze);
	soma=(ouro3+prata+bronze);
	printf("total de medalhas: %d\n\n",soma);
	
	printf("4 - Japão\n");
	printf("Ouro:");
	scanf("%d",&ouro4);
	printf("Prata:");
	scanf("%d",&prata);
	printf("Bronze:");
	scanf("%d",&bronze);
	soma=(ouro4+prata+bronze);
	printf("total de medalhas: %d\n\n",soma);
	
	printf("5 - Alemanha\n");
	printf("Ouro:");
	scanf("%d",&ouro5);
	printf("Prata:");
	scanf("%d",&prata);
	printf("Bronze:");
	scanf("%d",&bronze);
	soma=(ouro5+prata+bronze);
	printf("soma de medalhas: %d\n\n",soma);
	
	if(ouro1>ouro2 && ouro1>ouro3 && ouro1>ouro4 && ouro1>ouro5){
		printf("primeiro lugar: Brasil\n");
		 if(ouro2>ouro3 && ouro2>ouro4 && ouro2>ouro5){
			printf("Segundo lugar: eua\n");
			printf("\nBrasil:%d \nEUA:%d \nRussia:%d \nJapão:%d \nAlemenha:%d",ouro1,ouro2,ouro3,ouro4,ouro5);
			
			else if(ouro3>ouro4 && ouro3>ouro5);{
			printf("Terceiro Lugar: Russia");
			}
			else if(ouro4>ouro3 && ouro4>ouro5){
				printf("Terceiro Lugar: Japão");
			}
			else if(ouro5>ouro4 && ouro5>ouro3){
			printf("Terceiro Lugar: Alemanha");}
			}
	}
				else if(ouro3>ouro2 && ouro3>ouro4 && ouro3>ouro5){
				printf("Segundo lugar: russia\n");
				printf("\nBrasil:%d \nEUA:%d \nRussia:%d \nJapão:%d \nAlemenha:%d",ouro1,ouro2,ouro3,ouro4,ouro5);
				} 
					else if(ouro4>ouro2 && ouro4>ouro3 &&ouro4>ouro5){
					printf("Segundo lugar: japao\n");
					printf("\nBrasil:%d \nEUA:%d \nRussia:%d \nJapão:%d \nAlemenha:%d",ouro1,ouro2,ouro3,ouro4,ouro5);
					} 
						else if(ouro5>ouro2 && ouro5>ouro3 &&ouro5>ouro4){
						printf("Segundo lugar: alemanha\n");
						printf("\nBrasil:%d \nEUA:%d \nRussia:%d \nJapão:%d \nAlemenha:%d",ouro1,ouro2,ouro3,ouro4,ouro5);
						}
	}
			else if(ouro2>ouro1 && ouro2>ouro3 && ouro2>ouro4 && ouro2>ouro5){		
		printf("primeiro lugar: EUA\n");
		 if(ouro1>ouro3 && ouro1>ouro4 && ouro1>ouro5){
			printf("Segundo lugar: Brasil\n");
			printf("\nBrasil:%d \nEUA:%d \nRussia:%d \nJapão:%d \nAlemenha:%d",ouro1,ouro2,ouro3,ouro4,ouro5);
		} 
				else if(ouro3>ouro1 && ouro3>ouro4 && ouro3>ouro5){
				printf("Segundo lugar: russia\n");
				printf("\nBrasil:%d \nEUA:%d \nRussia:%d \nJapão:%d \nAlemenha:%d",ouro1,ouro2,ouro3,ouro4,ouro5);
				} 
					else if(ouro4>ouro1 && ouro4>ouro3 &&ouro4>ouro5){
					printf("Segundo lugar: japao\n");
					printf("\nBrasil:%d \nEUA:%d \nRussia:%d \nJapão:%d \nAlemenha:%d",ouro1,ouro2,ouro3,ouro4,ouro5);
					} 
						else if(ouro5>ouro1 && ouro5>ouro3 &&ouro5>ouro4){
						printf("Segundo lugar: alemanha\n");
						printf("\nBrasil:%d \nEUA:%d \nRussia:%d \nJapão:%d \nAlemenha:%d",ouro1,ouro2,ouro3,ouro4,ouro5);}
	  					}
				else if(ouro3>ouro1 && ouro3>ouro2 && ouro3>ouro4 && ouro3>ouro5){			
				printf("primeiro lugar: Russia\n");
		 if(ouro2>ouro1 && ouro2>ouro4 && ouro2>ouro5){
			printf("Segundo lugar eua\n");
			printf("\nBrasil:%d \nEUA:%d \nRussia:%d \nJapão:%d \nAlemenha:%d",ouro1,ouro2,ouro3,ouro4,ouro5);
		} 
				else if(ouro1>ouro2 && ouro1>ouro4 && ouro1>ouro5){
				printf("Segundo lugar: Brasil\n");
				printf("\nBrasil:%d \nEUA:%d \nRussia:%d \nJapão:%d \nAlemenha:%d",ouro1,ouro2,ouro3,ouro4,ouro5);
				} 
					else if(ouro4>ouro2 && ouro4>ouro1 &&ouro4>ouro5){
					printf("Segundo lugar: japao\n");
					printf("\nBrasil:%d \nEUA:%d \nRussia:%d \nJapão:%d \nAlemenha:%d",ouro1,ouro2,ouro3,ouro4,ouro5);
					} 
						else if(ouro5>ouro2 && ouro5>ouro1 &&ouro5>ouro4){
						printf("Segundo lugar: alemanha\n");
						printf("\nBrasil:%d \nEUA:%d \nRussia:%d \nJapão:%d \nAlemenha:%d",ouro1,ouro2,ouro3,ouro4,ouro5);}
						}
					else if(ouro4>ouro2 && ouro4>ouro3 && ouro4>ouro5){
					printf("primeiro lugar: Japão\n");
		 if(ouro2<ouro1 && ouro2>ouro3 && ouro2>ouro1 && ouro2>ouro5){
			printf("Segundo lugar: eua\n");
			printf("\nBrasil:%d \nEUA:%d \nRussia:%d \nJapão:%d \nAlemenha:%d",ouro1,ouro2,ouro3,ouro4,ouro5);
		} 
				else if(ouro3>ouro2 && ouro3>ouro1 && ouro3>ouro5){
				printf("Segundo lugar: russia\n");
				printf("\nBrasil:%d \nEUA:%d \nRussia:%d \nJapão:%d \nAlemenha:%d",ouro1,ouro2,ouro3,ouro4,ouro5);
				} 
					else if(ouro1>ouro2 && ouro1>ouro3 &&ouro1>ouro5){
					printf("Segundo lugar: Brasil\n");
					printf("\nBrasil:%d \nEUA:%d \nRussia:%d \nJapão:%d \nAlemenha:%d",ouro1,ouro2,ouro3,ouro4,ouro5);
					} 
						else if(ouro5>ouro2 && ouro5>ouro3 &&ouro5>ouro1){
						printf("Segundo lugar: alemanha\n");
						printf("\nBrasil:%d \nEUA:%d \nRussia:%d \nJapão:%d \nAlemenha:%d",ouro1,ouro2,ouro3,ouro4,ouro5);}
						}
						else if(ouro5>ouro1 && ouro5>ouro2 && ouro5>ouro3 && ouro5>ouro4){
						printf("primeiro lugar: Alemanha\n");
		 if(ouro2>ouro3 && ouro2>ouro4 && ouro2>ouro1){
			printf("Segundo lugar: eua\n");
			printf("\nBrasil:%d \nEUA:%d \nRussia:%d \nJapão:%d \nAlemenha:%d",ouro1,ouro2,ouro3,ouro4,ouro5);
		} 
				else if(ouro3>ouro2 && ouro3>ouro4 && ouro3>ouro1){
				printf("Segundo lugar: russia\n");
				printf("\nBrasil:%d \nEUA:%d \nRussia:%d \nJapão:%d \nAlemenha:%d",ouro1,ouro2,ouro3,ouro4,ouro5);
				} 
					else if(ouro4>ouro2 && ouro4>ouro3 &&ouro4>ouro1){
					printf("Segundo lugar: japao\n");
					printf("\nBrasil:%d \nEUA:%d \nRussia:%d \nJapão:%d \nAlemenha:%d",ouro1,ouro2,ouro3,ouro4,ouro5);
				} 
						else if(ouro1>ouro2 && ouro1>ouro3 &&ouro1>ouro4){
						printf("Segundo lugar: Brasil\n");
						printf("\nBrasil:%d \nEUA:%d \nRussia:%d \nJapão:%d \nAlemenha:%d",ouro1,ouro2,ouro3,ouro4,ouro5);}
						}
getche();
system("cls");
}
}

