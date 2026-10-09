#include <stdio.h>

int main(){
	
	char nome[50];
	int menu, pedido, stq1, stq2, stq3, stq4, stq5, stq6,stq7, stq8, stq9, stq10, repor;
	float paof, paoq, coxinha, pastel, fbolo, sonho, cookie, cafe, suco, chocoque, quantia, vpagar, preco, itrep;
	
// preço dos produtos
	
	paof = 1.0;
	paoq = 3.5;
	coxinha = 7.0;
	pastel = 8.0;
	fbolo = 6.0;
	sonho = 5.0;
	cookie = 4.0;
	cafe = 4.5;
	suco = 6.0;
	chocoque = 7.5;
	
//Estoques

	stq1 = 50;
	stq2 = 30;
	stq3 = 20;
	stq4 = 15;
	stq5 = 12;
	stq6 = 18;
	stq7 = 25;
	stq8 = 40;
	stq9 = 20;
	stq10 = 15;
	
	
//cumprimento de bem vindo
	
	printf("Bem vindo a padaria Luiz Farinhas");
	
//pedindo o nome
	
	printf("\nqual o seu nome: ");
	scanf("%s", &nome);
	
//menu de opções
	
	while (menu != 0){
	
 	printf("\nOlá %s, o que você precisa?", nome);
	printf("\nDigite 1 para consultar produtos e estoque\nDigite 2 pra realizar uma compra\nDigite 3 para repor estoque\nDigite 4 para mostrar relatório do turno\nDigite 5 para Atender Outro cliente\nDigite 0 encerrar sistema\n");
	scanf("%i", &menu);
		
		


	
	
	if(menu == 1){
		printf("\nCODIGO | PRODUTO       | PREÇO   | QUANTIDADE\n   1   | Pão francês   | R$ 1,00 | 50\n   2   | Pão de queijo | R$ 3,50 | 30\n   3   | Coxinha       | R$ 7,00 | 20\n   4   | Pastel        | R$ 8,00 | 15\n   5   | Fatia de bolo | R$ 6,00 | 12\n   6   | Sonho         | R$ 5,00 | 18\n   7   | Cookie        | R$ 4,00 | 25\n   8   | Café          | R$ 4,50 | 40\n   9   | Suco          | R$ 6,00 | 20\n   10  | Chocolate     | R$ 7,50 | 15\n");
	}else if(menu ==2){
		printf("Digite o código do seu pedido: ");
		scanf("%i", &pedido);
		
//Pao frances
			
			if(pedido == 1){
				printf("Produto escolhido: Pão frances\nPreço unitario: 1,00\nSolicite a quantia de sua escolha:");
				scanf("%f", &quantia);
				
				if(quantia <= stq1){
					preco = quantia*1;
					printf("Preço total: %.2f", preco);
					printf("\nValor a pagar: ");
					scanf("%f", &vpagar);
					vpagar = vpagar-preco;
					printf("Troco: %.2f", vpagar);
					printf("\n%s, sua compra foi confirmada, volte sempre!", nome);	
				}else{
				printf("Quantidade insuficiente no estoque");}
				stq1 = stq1-quantia;
				
//Pao de queijo
			
			}else if(pedido == 2){
				printf("Produto escolhido: Pão de queijo\nPreço unitario: 3,50\nSolicite a quantia de sua escolha:");
				scanf("%f", &quantia);
				
				if(quantia <= stq2){
					preco = quantia*3.5;
					printf("Preço total: %.2f", preco);
					printf("\nValor a pagar: ");
					scanf("%f", &vpagar);
					vpagar = vpagar-preco;
					printf("Troco: %.2f", vpagar);
					printf("\n%s, sua compra foi confirmada, volte sempre!", nome);	
				}else{
				printf("Quantidade insuficiente no estoque");}
				stq2 = stq2-quantia;
				
//Coxinha
			}else if(pedido == 3){
				printf("Produto escolhido: Coxinha\nPreço unitario: 7,00\nSolicite a quantia de sua escolha:");
				scanf("%f", &quantia);
				
				if(quantia <= stq3){
					preco = quantia*7;
					printf("Preço total: %.2f", preco);
					printf("\nValor a pagar: ");
					scanf("%f", &vpagar);
					vpagar = vpagar-preco;
					printf("Troco: %.2f", vpagar);
					printf("\n%s, sua compra foi confirmada, volte sempre!", nome);	
				}else{
				printf("Quantidade insuficiente no estoque");}
				stq3 = stq3-quantia;
				
//Pastel
			
			}else if(pedido == 4){
				printf("Produto escolhido: Pastel\nPreço unitario: 8,00\nSolicite a quantia de sua escolha:");
				scanf("%f", &quantia);
				
				if(quantia <= stq4){
					preco = quantia*8;
					printf("Preço total: %.2f", preco);
					printf("\nValor a pagar: ");
					scanf("%f", &vpagar);
					vpagar = vpagar-preco;
					printf("Troco: %.2f", vpagar);
					printf("\n%s, sua compra foi confirmada, volte sempre!", nome);	
				}else{
				printf("Quantidade insuficiente no estoque");}
				stq4 = stq4-quantia;
				
//Fatia de bolo
			
			}else if(pedido == 5){
				printf("Produto escolhido: Fatia de bolo\nPreço unitario: 6,00\nSolicite a quantia de sua escolha:");
				scanf("%f", &quantia);
				
				if(quantia <= stq5){
					preco = quantia*6;
					printf("Preço total: %.2f", preco);
					printf("\nValor a pagar: ");
					scanf("%f", &vpagar);
					vpagar = vpagar-preco;
					printf("Troco: %.2f", vpagar);
					printf("\n%s, sua compra foi confirmada, volte sempre!", nome);	
				}else{
				printf("Quantidade insuficiente no estoque");}
				stq5 = stq5-quantia;
				
//Sonho
			
			}else if(pedido == 6){
				printf("Produto escolhido: Sonho\nPreço unitario: 5,00\nSolicite a quantia de sua escolha:");
				scanf("%f", &quantia);
				
				if(quantia <= stq6){
					preco = quantia*5;
					printf("Preço total: %.2f", preco);
					printf("\nValor a pagar: ");
					scanf("%f", &vpagar);
					vpagar = vpagar-preco;
					printf("Troco: %.2f", vpagar);
					printf("\n%s, sua compra foi confirmada, volte sempre!", nome);	
				}else{
				printf("Quantidade insuficiente no estoque");}
				stq6 = stq6-quantia;
				
//Cookie
			
			}else if(pedido == 7){
				printf("Produto escolhido: Cookie\nPreço unitario: 4,00\nSolicite a quantia de sua escolha:");
				scanf("%f", &quantia);
				
				if(quantia <= stq7){
					preco = quantia*4;
					printf("Preço total: %.2f", preco);
					printf("\nValor a pagar: ");
					scanf("%f", &vpagar);
					vpagar = vpagar-preco;
					printf("Troco: %.2f", vpagar);
					printf("\n%s, sua compra foi confirmada, volte sempre!", nome);	
				}else{
				printf("Quantidade insuficiente no estoque");}
				stq7 = stq7-quantia;
				
//Cafe
			
			}else if(pedido == 8){
				printf("Produto escolhido: Café\nPreço unitario: 4,50\nSolicite a quantia de sua escolha:");
				scanf("%f", &quantia);
				
				if(quantia <= stq8){
					preco = quantia*4.5;
					printf("Preço total: %.2f", preco);
					printf("\nValor a pagar: ");
					scanf("%f", &vpagar);
					vpagar = vpagar-preco;
					printf("Troco: %.2f", vpagar);
					printf("\n%s, sua compra foi confirmada, volte sempre!", nome);	
				}else{
				printf("Quantidade insuficiente no estoque");}
				stq8 = stq8-quantia;
				
//Suco
			
			}else if(pedido == 9){
				printf("Produto escolhido: Suco\nPreço unitario: 6.00\nSolicite a quantia de sua escolha:");
				scanf("%f", &quantia);
				
				if(quantia <= stq9){
					preco = quantia*6;
					printf("Preço total: %.2f", preco);
					printf("\nValor a pagar: ");
					scanf("%f", &vpagar);
					vpagar = vpagar-preco;
					printf("Troco: %.2f", vpagar);
					printf("\n%s, sua compra foi confirmada, volte sempre!", nome);	
				}else{
				printf("Quantidade insuficiente no estoque");}
				stq9 = stq9-quantia;
				
//Chocolate quente
			
			}else if(pedido == 10){
				printf("Produto escolhido: Chcolate quente\nPreço unitario: 7.50\nSolicite a quantia de sua escolha:");
				scanf("%f", &quantia);
				
				if(quantia <= stq10){
					preco = quantia*7.5;
					printf("Preço total: %.2f", preco);
					printf("\nValor a pagar: ");
					scanf("%f", &vpagar);
					vpagar = vpagar-preco;
					printf("Troco: %.2f", vpagar);
					printf("\n%s, sua compra foi confirmada, volte sempre!", nome);	
				}else{
				printf("Quantidade insuficiente no estoque");}
				stq10 = stq10-quantia;
			}else{
		printf("Esse código é invalido");
	}
	
//Repor
	
	}else if (menu == 3){
		printf("Quanto você gostia de repor:");
		scanf("%i", &repor);
		printf("qual item você gostaria de repor(insira o código):");
		scanf("%f", &itrep);
		
		if(itrep == 1){
			repor = stq1 + repor;
			printf("A Reestocagem foi realizada com sucesso!\n");
			printf("Quantia antiga: %i\n", stq1);
			printf("Quantia atual: %i\n", repor);
		}else if(itrep == 2){
			repor = stq2+repor;
			printf("A Reestocagem foi realizada com sucesso!\n");
			printf("Quantia antiga: %i\n", stq2);
			printf("Quantia atual: %i\n", repor);
		}else if(itrep == 3){
			repor = stq3+repor;
			printf("A Reestocagem foi realizada com sucesso!\n");
			printf("Quantia antiga: %i\n", stq3);
			printf("Quantia atual: %i\n", repor);
		}else if(itrep == 4){
			repor = stq4+repor;
			printf("A Reestocagem foi realizada com sucesso!\n");
			printf("Quantia antiga: %i\n", stq4);
			printf("Quantia atual: %i\n", repor);
		}else if(itrep == 5){
			repor = stq5+repor;
			printf("A Reestocagem foi realizada com sucesso!\n");
			printf("Quantia antiga: %i\n", stq5);
			printf("Quantia atual: %i\n", repor);
		}else if(itrep == 6){
			repor = stq6+repor;
			printf("A Reestocagem foi realizada com sucesso!\n");
			printf("Quantia antiga: %i\n", stq6);
			printf("Quantia atual: %i\n", repor);
		}else if(itrep == 7){
			repor = stq7+repor;
			printf("A Reestocagem foi realizada com sucesso!\n");
			printf("Quantia antiga: %i\n", stq7);
			printf("Quantia atual: %i\n", repor);
		}else if(itrep == 8){
			repor = stq8+repor;
			printf("A Reestocagem foi realizada com sucesso!\n");
			printf("Quantia atual: %i\n", repor);
			printf("Quantia antiga: %i\n", stq8);
		}else if(itrep == 9){
			repor = stq9+repor;
			printf("A Reestocagem foi realizada com sucesso!\n");
			printf("Quantia antiga: %i\n", stq9);
			printf("Quantia atual: %i\n", repor);
		}else if(itrep == 10){
			repor = stq10+repor;
			printf("A Reestocagem foi realizada com sucesso!\n");
			printf("Quantia antiga: %i\n", stq10);
			printf("Quantia atual: %i\n", repor);
		}        
	}
}
return 0;
}