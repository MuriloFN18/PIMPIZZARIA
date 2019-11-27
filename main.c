#include <stdio.h>
#include <stdlib.h>
#include "util.h"
#include <conio.h>
#include <math.h>
#include <string.h>

typedef struct pizzaria{
    char nome[30];
    char quantidade[13];
}Estoque;

typedef struct pizzarias{
    char sabor[30];
    char valor[13];
}Sabor;

typedef struct bebidas{
    char marca[30];
    char valor[13];
}Bebidas;

typedef struct pedidos{
    char sabor[30];
    char valor[13];
    char mesa[13];
}Pedidos;

void AdicionarProdutos();
void VerProdutos();
void AdicionarSabor();
void VerSabor();
void AdicionarSabor1();
void VerSabor1();
void AdicionarBebidas();
void VerBebidas();
void AdicionarBebidas1();
void VerBebidas1();
void AdicionarBebidas2();
void VerBebidas2();
void VerCaixa();
void AdicionarPedidos();
void AdicionarPedidos1();
void AdicionarPedidos2();
void AdicionarPedidos3();
void AdicionarPedidos4();
void VerPedidos();
//Pizzaria 2
void AdicionarProdutosP2();
void VerProdutosP2();
void AdicionarSaborP2();
void VerSaborP2();
void AdicionarSabor1P2();
void VerSabor1P2();
void AdicionarBebidasP2();
void VerBebidasP2();
void AdicionarBebidas1P2();
void VerBebidas1P2();
void AdicionarBebidas2P2();
void VerBebidas2P2();
void VerCaixaP2();
void AdicionarPedidosP2();
void AdicionarPedidos1P2();
void AdicionarPedidos2P2();
void AdicionarPedidos3P2();
void AdicionarPedidos4P2();
void VerPedidosP2();
//Pizzaria3
void AdicionarProdutosP3();
void VerProdutosP3();
void AdicionarSaborP3();
void VerSaborP3();
void AdicionarSabor1P3();
void VerSabor1P3();
void AdicionarBebidasP3();
void VerBebidasP3();
void AdicionarBebidas1P3();
void VerBebidas1P3();
void AdicionarBebidas2P3();
void VerBebidas2P3();
void VerCaixaP3();
void AdicionarPedidosP3();
void AdicionarPedidos1P3();
void AdicionarPedidos2P3();
void AdicionarPedidos3P3();
void AdicionarPedidos4P3();
void VerPedidosP3();

int main(){
    int op,op1,pizzas,loja,estoque,est,pedidos,z,senha,adicionar,adicionar1,comanda,comanda0;
    const char BLACK = 207;
    const char WHITE = 32;

    do{
    Desenhar();
    pintar(4);
    DesenharMenu();
    gotoxy(25,17);
    pintar(79);
    printf("0.Sair\n");
    gotoxy(25,14);
    printf("1.Fazer login");
    gotoxy(25,22);
    printf("Escolha uma opcao:");
    pintar(15);
    printf(" ");
    pintar(95);
    printf("%c\n",BLACK);
    gotoxy(44,22);
    scanf("%d",&op);
    pintar(15);
    clrscr();
        switch(op){
            case 0:clrscr(); Desenhar(); pintar(15);break;
            case 1: do{
                        Desenhar();
                        pintar(12);
                        gotoxy(55,4);
                        printf("PIZZARIA");
                        pintar(4);
                        DesenharNome();
                        gotoxy(55,20);
                        pintar(79);
                        printf("0.Voltar");
                        gotoxy(55,14);
                        printf("1.Loja 1");
                        gotoxy(55,16);
                        printf("2.Loja 2");
                        gotoxy(55,18);
                        printf("3.Loja 3");
                        pintar(95);
                        gotoxy(55,22);
                        printf("%c\n",BLACK);
                        gotoxy(55,22);
                        scanf("%d",&loja);
                        pintar(15);
                        clrscr();

                        switch(loja){

                            case 0: clrscr();break;

                            case 1: Desenhar();
                                    pintar(1);
                                    DesenharLogin();
                                    gotoxy(36,15);
                                    pintar(79);
                                    printf("Digite a senha para logar na loja 1:");
                                    for(z=0;z<4;z++){
                                        pintar(95);
                                        printf("%c",BLACK);
                                    }gotoxy(72,15);
                                    scanf("%d",&senha);
                                    pintar(15);
                                    if(senha != 2707){
                                        clrscr();
                                        Desenhar(); gotoxy(45,25); pintar(79);
                                        printf("Senha incorreta, tente novamente!\n");break;
                                    }else{
                                        clrscr();
                                        Desenhar(); gotoxy(45,10); pintar(79);
                                        printf("Logado com sucesso!!!!\n\n");
                                        gotoxy(45,15);
                                        pintar(79);
                                        pscr();
                                        pintar(15);
                                        clrscr();
                                    }
                                    do{
                                    Desenhar(); pintar(1);
                                    DesenharLoja1();
                                    pintar(79);
                                    gotoxy(40,23);
                                    printf("0.Voltar");
                                    gotoxy(40,13);
                                    printf("1.Cardapio");
                                    gotoxy(40,15);
                                    printf("2.Gerenciar estoque");
                                    gotoxy(40,17);
                                    printf("3.Gerenciar Caixa");
                                    gotoxy(40,19);
                                    printf("4.Gerenciar Mesas");
                                    gotoxy(40,21);
                                    printf("5.Pedidos");
                                    pintar(95);
                                    gotoxy(40,25);
                                    printf("%c\n",BLACK);
                                    gotoxy(40,25);
                                    scanf("%d",&op1);
                                    pintar(15);
                                    clrscr();

                                    switch(op1){

                                        case 0: clrscr();break;

                                        case 1: do{
                                                Desenhar();
                                                pintar(1);
                                                DesenharCardapio();
                                                gotoxy(50,21);
                                                pintar(79);
                                                printf("0.Sair");
                                                gotoxy(50,14);
                                                printf("1.Pizzas Salgadas");
                                                gotoxy(50,16);
                                                printf("2.Pizzas Doces");
                                                gotoxy(50,18);
                                                printf("3.Bebidas");
                                                gotoxy(50,20);
                                                pintar(95);
                                                gotoxy(50,23);
                                                printf("%c\n",BLACK);
                                                gotoxy(50,23);
                                                scanf("%d",&pizzas);
                                                pintar(15);
                                                clrscr();
                                                switch(pizzas){
                                                    case 0: clrscr();break;
                                                    case 1: do{
                                                            Desenhar(); pintar(1);
                                                            DesenharSalgadas();
                                                            pintar(79);
                                                            gotoxy(40,19);
                                                            printf("0.Voltar\n");
                                                            gotoxy(40,14);
                                                            printf("1.Adicionar pizzas\n");
                                                            gotoxy(40,16);
                                                            printf("2.Ver pizzas\n");
                                                            gotoxy(40,21);
                                                            pintar(95);
                                                            printf("%c\n",BLACK);
                                                            gotoxy(40,21);
                                                            scanf("%d",&adicionar);
                                                            pintar(15);
                                                            switch(adicionar){
                                                                case 0: printf("Voltando...");
                                                                        dscr();
                                                                        clrscr();break;
                                                                case 1: clrscr();
                                                                        pintar(79);
                                                                        AdicionarSabor();
                                                                        pintar(15);
                                                                        clrscr();
                                                                        break;
                                                                case 2: clrscr();
                                                                        pintar(79);
                                                                        VerSabor();
                                                                        gotoxy(35,20);
                                                                        pscr();
                                                                        pintar(15);
                                                                        clrscr();
                                                                        break;

                                                            }
                                                            }while(adicionar!=0);break;

                                                    case 2: do{
                                                            Desenhar(); pintar(1);
                                                            DesenharDoces();
                                                            pintar(79);
                                                            gotoxy(40,19);
                                                            printf("0.Voltar\n");
                                                            gotoxy(40,14);
                                                            printf("1.Adicionar pizzas\n");
                                                            gotoxy(40,16);
                                                            printf("2.Ver pizzas\n");
                                                            gotoxy(40,21);
                                                            pintar(95);
                                                            printf("%c\n",BLACK);
                                                            gotoxy(40,21);
                                                            scanf("%d",&adicionar);
                                                            pintar(15);
                                                            switch(adicionar){
                                                                case 0: printf("Voltando...");
                                                                        dscr();
                                                                        clrscr();break;
                                                                case 1: clrscr();
                                                                        AdicionarSabor1();
                                                                        clrscr();
                                                                        break;
                                                                case 2: clrscr();
                                                                        VerSabor1();
                                                                        gotoxy(35,20);
                                                                        pscr();
                                                                        pintar(15);
                                                                        clrscr();
                                                                        break;

                                                            }
                                                            }while(adicionar!=0);break;

                                                    case 3: do{
                                                            Desenhar(); pintar(1);
                                                            DesenharBebidas();
                                                            pintar(79);
                                                            gotoxy(45,21);
                                                            printf("0.Voltar\n");
                                                            gotoxy(45,14);
                                                            printf("1.Adicionar Bebidas\n");
                                                            gotoxy(45,16);
                                                            printf("2.Ver Bebidas\n");
                                                            gotoxy(45,18);
                                                            pintar(95);
                                                            gotoxy(45,23);
                                                            printf("%c\n",BLACK);
                                                            gotoxy(45,23);
                                                            scanf("%d",&adicionar);
                                                            pintar(15);
                                                            clrscr();
                                                            switch(adicionar){
                                                                case 0: printf("Voltando...");
                                                                        dscr();
                                                                        clrscr();
                                                                        break;
                                                                case 1: do{
                                                                        Desenhar();
                                                                        pintar(79);
                                                                        gotoxy(45,17);
                                                                        printf("0.Voltar\n");
                                                                        gotoxy(45,10);
                                                                        printf("1.Adicionar Cervejas\n");
                                                                        gotoxy(45,12);
                                                                        printf("2.Adicionar Sucos\n");
                                                                        gotoxy(45,14);
                                                                        printf("3.Adicionar Refrigerantes\n");
                                                                        pintar(95);
                                                                        gotoxy(50,19);
                                                                        printf("%c",BLACK);
                                                                        gotoxy(50,19);
                                                                        scanf("%d",&comanda);
                                                                        pintar(15);
                                                                        switch(comanda){
                                                                        case 0: printf("Voltando...");
                                                                                dscr();
                                                                                clrscr();break;

                                                                        case 1: clrscr();
                                                                                AdicionarBebidas2();
                                                                                clrscr();break;

                                                                        case 2: clrscr();
                                                                                AdicionarBebidas1();
                                                                                pintar(15);
                                                                                clrscr();break;

                                                                        case 3: clrscr();
                                                                                AdicionarBebidas();
                                                                                pintar(15);
                                                                                clrscr();break;



                                                                        }
                                                                        }while(comanda!=0);break;

                                                                case 2: do{
                                                                        Desenhar();
                                                                        pintar(79);
                                                                        gotoxy(45,17);
                                                                        printf("0.Voltar\n");
                                                                        gotoxy(45,10);
                                                                        printf("1.Ver Cervejas\n");
                                                                        gotoxy(45,12);
                                                                        printf("2.Ver Sucos\n");
                                                                        gotoxy(45,14);
                                                                        printf("3.Ver Refrigerantes\n");
                                                                        pintar(95);
                                                                        gotoxy(50,19);
                                                                        printf("%c",BLACK);
                                                                        gotoxy(50,19);
                                                                        scanf("%d",&comanda);
                                                                        pintar(15);
                                                                        switch(comanda){
                                                                        case 0: printf("Voltando...");
                                                                                dscr();
                                                                                clrscr();break;

                                                                        case 1: clrscr();
                                                                                VerBebidas2();
                                                                                gotoxy(35,20);
                                                                                pscr();
                                                                                pintar(15);
                                                                                clrscr();break;

                                                                        case 2: clrscr();
                                                                                VerBebidas1();
                                                                                gotoxy(35,20);
                                                                                pscr();
                                                                                pintar(15);
                                                                                clrscr();break;

                                                                        case 3: clrscr();
                                                                                VerBebidas();
                                                                                gotoxy(35,20);
                                                                                pscr();
                                                                                pintar(15);
                                                                                clrscr();break;


                                                                        }
                                                                        }while(comanda!=0);break;
                                                            }
                                                            }while(adicionar!=0);break;
                                                }
                                                }while(pizzas!=0);break;

                                        case 2: do{ Desenhar();
                                                    pintar(1);
                                                    DesenharEstoque();
                                                    gotoxy(40,17);
                                                    pintar(79);
                                                    printf("0.Voltar");
                                                    gotoxy(40,12);
                                                    printf("1.Adicionar no estoque");
                                                    gotoxy(40,14);
                                                    printf("2.Ver estoque");
                                                    pintar(95);
                                                    gotoxy(40,20);
                                                    printf("%c\n",BLACK);
                                                    gotoxy(40,20);
                                                    scanf("%d",&est);
                                                    pintar(15);
                                                    switch(est){
                                                            case 0: clrscr();break;

                                                            case 1: clrscr();
                                                                    AdicionarProdutos();
                                                                    clrscr();break;

                                                            case 2: clrscr();
                                                                    VerProdutos();
                                                                    gotoxy(35,20);
                                                                    pscr();
                                                                    pintar(15);
                                                                    clrscr();break;
                                                                }
                                                                }while(est!=0);break;

                                        case 3: clrscr();
                                                Desenhar();
                                                pintar(1);
                                                DesenharCaixa();
                                                VerCaixa();
                                                gotoxy(35,30);
                                                pscr();
                                                pintar(15);
                                                clrscr();break;



                                        case 4: Desenhar(); pintar(1);
                                                DesenharMesas();
                                                pintar(79);
                                                gotoxy(16,12);
                                                printf("Legenda");
                                                gotoxy(10,14);
                                                printf("Mesas disponiveis:");
                                                gotoxy(29,14);
                                                pintar(175);
                                                printf("%c",WHITE);
                                                gotoxy(10,16);
                                                pintar(79);
                                                printf("Mesas indisponiveis:");
                                                pintar(79);
                                                gotoxy(32,16);
                                                printf("%c",WHITE);
                                                pintar(79);
                                                gotoxy(50,13);
                                                printf("Lista de mesas:");
                                                int m;
                                                printf("\n\n");
                                                for(m=0;m<6;m++){
                                                    pintar(32);
                                                    printf(" \t\t\t\t\t\t\t Mesa %d Mesa %d\n",m++,m);
                                                }

                                                printf("\n");
                                                for(m=7;m<10;m++){
                                                    pintar(79);
                                                    printf(" \t\t\t\t\t\t\t Mesa %d Mesa %d\n",m++,m);
                                                }
                                                pintar(79);
                                                gotoxy(60,25);
                                                pscr(); pintar(15); clrscr();break;


                                        case 5: do{
                                                Desenhar(); pintar(1);
                                                DesenharPedidos();
                                                pintar(79);
                                                gotoxy(50,17);
                                                printf("0. Voltar");
                                                gotoxy(50,12);
                                                printf("1. Adicionar pedidos");
                                                gotoxy(50,14);
                                                printf("2. Ver pedidos em andamento");
                                                gotoxy(50,19);
                                                pintar(95);
                                                printf("%c",BLACK);
                                                gotoxy(50,19);
                                                scanf("%d", &comanda0);
                                                pintar(15);
                                                clrscr();
                                                switch(comanda0){

                                                    case 0: break;
                                                    case 1: do{
                                                            Desenhar(); pintar(1);
                                                            DesenharAdicionar();
                                                            pintar(79);
                                                            gotoxy(50,20);
                                                            printf("0.Voltar");
                                                            gotoxy(50,13);
                                                            printf("1. Pizzas Salgadas");
                                                            gotoxy(50,15);
                                                            printf("2. Pizzas Doces");
                                                            gotoxy(50,17);
                                                            printf("3. Bebidas");
                                                            gotoxy(50,22); pintar(95);
                                                            printf("%c",BLACK);
                                                            gotoxy(50,22);
                                                            scanf("%d", &comanda);
                                                            pintar(15);
                                                            clrscr();
                                                            switch(comanda){
                                                                case 0: printf("Voltando...");
                                                                        dscr();
                                                                        clrscr();break;

                                                                case 1: clrscr();
                                                                        AdicionarPedidos();
                                                                        clrscr();break;

                                                                case 2: clrscr();
                                                                        AdicionarPedidos1();
                                                                        clrscr();break;

                                                                case 3: do{
                                                                        Desenhar();
                                                                        pintar(79);
                                                                        gotoxy(45,17);
                                                                        printf("0.Voltar\n");
                                                                        gotoxy(45,10);
                                                                        printf("1.Adicionar Cervejas\n");
                                                                        gotoxy(45,12);
                                                                        printf("2.Adicionar Refrigerantes\n");
                                                                        gotoxy(45,14);
                                                                        printf("3.Adicionar Sucos\n");
                                                                        pintar(95);
                                                                        gotoxy(50,19);
                                                                        printf("%c",BLACK);
                                                                        gotoxy(50,19);
                                                                        scanf("%d",&adicionar);
                                                                        pintar(15);
                                                                        switch(adicionar){
                                                                            case 0: printf("Voltando...");
                                                                            dscr();
                                                                            clrscr();
                                                                            break;


                                                                            case 1: clrscr();
                                                                                    AdicionarPedidos2();
                                                                                    clrscr();break;

                                                                            case 2: clrscr();
                                                                                    AdicionarPedidos3();
                                                                                    clrscr();break;

                                                                            case 3: clrscr();
                                                                                    AdicionarPedidos4();
                                                                                    clrscr();break;

                                                                        }
                                                                        }while(adicionar!=0);break;

                                                                }
                                                                }while(comanda!=0);break;

                                                    case 2: VerPedidos();break;
                                                }
                                                }while(comanda0!=0);break;
                                    }
                                    }while(op1!=0);break;

                            case 2: Desenhar();
                                    pintar(13);
                                    DesenharLogin();
                                    gotoxy(36,15);
                                    pintar(79);
                                    printf("Digite a senha para logar na loja 2:");
                                    for(z=0;z<4;z++){
                                        pintar(95);
                                        printf("%c",BLACK);
                                    }gotoxy(72,15);
                                    scanf("%d",&senha);
                                    pintar(15);
                                    if(senha != 3639){
                                        clrscr();
                                        Desenhar(); gotoxy(45,25); pintar(79);
                                        printf("Senha incorreta, tente novamente!\n");break;
                                    }else{
                                        clrscr();
                                        Desenhar(); gotoxy(45,10); pintar(79);
                                        printf("Logado com sucesso!!!!\n\n");
                                        gotoxy(45,15);
                                        pintar(79);
                                        pscr();
                                        pintar(15);
                                        clrscr();
                                    }
                                    do{
                                    Desenhar(); pintar(13);
                                    DesenharLoja2();
                                    pintar(79);
                                    gotoxy(40,23);
                                    printf("0.Voltar");
                                    gotoxy(40,13);
                                    printf("1.Cardapio");
                                    gotoxy(40,15);
                                    printf("2.Gerenciar estoque");
                                    gotoxy(40,17);
                                    printf("3.Gerenciar Caixa");
                                    gotoxy(40,19);
                                    printf("4.Gerenciar Mesas");
                                    gotoxy(40,21);
                                    printf("5.Pedidos");
                                    pintar(95);
                                    gotoxy(40,25);
                                    printf("%c\n",BLACK);
                                    gotoxy(40,25);
                                    scanf("%d",&op1);
                                    pintar(15);
                                    clrscr();

                                    switch(op1){

                                        case 0: clrscr();break;

                                        case 1: do{
                                                Desenhar();
                                                pintar(13);
                                                DesenharCardapio();
                                                gotoxy(50,21);
                                                pintar(79);
                                                printf("0.Sair");
                                                gotoxy(50,14);
                                                printf("1.Pizzas Salgadas");
                                                gotoxy(50,16);
                                                printf("2.Pizzas Doces");
                                                gotoxy(50,18);
                                                printf("3.Bebidas");
                                                gotoxy(50,20);
                                                pintar(95);
                                                gotoxy(50,23);
                                                printf("%c\n",BLACK);
                                                gotoxy(50,23);
                                                scanf("%d",&pizzas);
                                                pintar(15);
                                                clrscr();
                                                switch(pizzas){
                                                    case 0: clrscr();break;
                                                    case 1: do{
                                                            Desenhar(); pintar(13);
                                                            DesenharSalgadas();
                                                            pintar(79);
                                                            gotoxy(40,19);
                                                            printf("0.Voltar\n");
                                                            gotoxy(40,14);
                                                            printf("1.Adicionar pizzas\n");
                                                            gotoxy(40,16);
                                                            printf("2.Ver pizzas\n");
                                                            gotoxy(40,21);
                                                            pintar(95);
                                                            printf("%c\n",BLACK);
                                                            gotoxy(40,21);
                                                            scanf("%d",&adicionar);
                                                            pintar(15);
                                                            switch(adicionar){
                                                                case 0: printf("Voltando...");
                                                                        dscr();
                                                                        clrscr();break;

                                                                case 1: clrscr();
                                                                        AdicionarSaborP2();
                                                                        clrscr();break;

                                                                case 2: clrscr();
                                                                        VerSaborP2();
                                                                        gotoxy(35,20);
                                                                        pscr();
                                                                        pintar(15);
                                                                        clrscr();break;


                                                            }
                                                            }while(adicionar!=0);break;

                                                    case 2: do{
                                                            Desenhar(); pintar(13);
                                                            DesenharDoces();
                                                            pintar(79);
                                                            gotoxy(40,19);
                                                            printf("0.Voltar\n");
                                                            gotoxy(40,14);
                                                            printf("1.Adicionar pizzas\n");
                                                            gotoxy(40,16);
                                                            printf("2.Ver pizzas\n");
                                                            gotoxy(40,21);
                                                            pintar(95);
                                                            printf("%c\n",BLACK);
                                                            gotoxy(40,21);
                                                            scanf("%d",&adicionar);
                                                            pintar(15);
                                                            switch(adicionar){
                                                                case 0: printf("Voltando...");
                                                                        dscr();
                                                                        clrscr();break;

                                                                case 1: clrscr();
                                                                        AdicionarSabor1P2();
                                                                        clrscr();break;

                                                                case 2: clrscr();
                                                                        VerSabor1P2();
                                                                        gotoxy(35,20);
                                                                        pscr();
                                                                        pintar(15);
                                                                        clrscr();break;

                                                            }
                                                            }while(adicionar!=0);break;

                                                    case 3: do{
                                                            Desenhar(); pintar(13);
                                                            DesenharBebidas();
                                                            pintar(79);
                                                            gotoxy(45,21);
                                                            printf("0.Voltar\n");
                                                            gotoxy(45,14);
                                                            printf("1.Adicionar Bebidas\n");
                                                            gotoxy(45,16);
                                                            printf("2.Ver Bebidas\n");
                                                            gotoxy(45,18);
                                                            pintar(95);
                                                            gotoxy(45,23);
                                                            printf("%c\n",BLACK);
                                                            gotoxy(45,23);
                                                            scanf("%d",&adicionar);
                                                            pintar(15);
                                                            clrscr();
                                                            switch(adicionar){
                                                                case 0: printf("Voltando...");
                                                                        dscr();
                                                                        clrscr();break;
                                                                case 1: do{
                                                                        Desenhar();
                                                                        pintar(79);
                                                                        gotoxy(45,17);
                                                                        printf("0.Voltar\n");
                                                                        gotoxy(45,10);
                                                                        printf("1.Adicionar Cervejas\n");
                                                                        gotoxy(45,12);
                                                                        printf("2.Adicionar Sucos\n");
                                                                        gotoxy(45,14);
                                                                        printf("3.Adicionar Refrigerantes\n");
                                                                        pintar(95);
                                                                        gotoxy(50,19);
                                                                        printf("%c",BLACK);
                                                                        gotoxy(50,19);
                                                                        scanf("%d",&comanda);
                                                                        pintar(15);
                                                                        switch(comanda){
                                                                        case 0: printf("Voltando...");
                                                                                dscr();
                                                                                clrscr();break;
                                                                        case 1:AdicionarBebidas2P2();
                                                                                clrscr();
                                                                        break;
                                                                        case 2:clrscr();
                                                                                AdicionarBebidas1P2();
                                                                                pintar(15);
                                                                                clrscr();break;
                                                                        break;
                                                                        case 3:clrscr();
                                                                                AdicionarBebidasP2();
                                                                                pintar(15);
                                                                                clrscr();break;


                                                                        }
                                                                        }while(comanda=!0);break;

                                                                case 2: do{
                                                                        Desenhar();
                                                                        pintar(79);
                                                                        gotoxy(45,17);
                                                                        printf("0.Voltar\n");
                                                                        gotoxy(45,10);
                                                                        printf("1.Ver Cervejas\n");
                                                                        gotoxy(45,12);
                                                                        printf("2.Ver Sucos\n");
                                                                        gotoxy(45,14);
                                                                        printf("3.Ver Refrigerantes\n");
                                                                        pintar(95);
                                                                        gotoxy(50,19);
                                                                        printf("%c",BLACK);
                                                                        gotoxy(50,19);
                                                                        scanf("%d",&comanda);
                                                                        pintar(15);
                                                                        switch(comanda){
                                                                        case 0: printf("Voltando...");
                                                                                dscr();
                                                                                clrscr();break;
                                                                        case 1: clrscr();
                                                                                VerBebidas2P2();
                                                                                gotoxy(35,20);
                                                                                pscr();
                                                                                pintar(15);
                                                                                clrscr();break;
                                                                        break;
                                                                        case 2: clrscr();
                                                                                VerBebidas1P2();
                                                                                gotoxy(35,20);
                                                                                pscr();
                                                                                pintar(15);
                                                                                clrscr();break;
                                                                        break;
                                                                        case 3:clrscr();
                                                                                VerBebidasP2();
                                                                                gotoxy(35,20);
                                                                                pscr();
                                                                                pintar(15);
                                                                                clrscr();break;
                                                                        break;

                                                                        }
                                                                        }while(comanda=!0);break;
                                                            }
                                                            }while(adicionar!=0);break;
                                                }
                                                }while(pizzas!=0);break;

                                        case 2: do{ Desenhar();
                                                    pintar(13);
                                                    DesenharEstoque();
                                                    gotoxy(40,17);
                                                    pintar(79);
                                                    printf("0.Voltar");
                                                    gotoxy(40,12);
                                                    printf("1.Adicionar no estoque");
                                                    gotoxy(40,14);
                                                    printf("2.Ver estoque");
                                                    pintar(95);
                                                    gotoxy(40,20);
                                                    printf("%c\n",BLACK);
                                                    gotoxy(40,20);
                                                    scanf("%d",&est);
                                                    pintar(15);
                                                    switch(est){
                                                            case 0: clrscr();break;
                                                            case 1: clrscr();
                                                                    AdicionarProdutosP2();
                                                                    clrscr();
                                                                    break;
                                                            case 2: clrscr();
                                                                    VerProdutosP2();
                                                                    gotoxy(35,20);
                                                                    pscr();
                                                                    pintar(15);
                                                                    clrscr();break;
                                                                }
                                                                }while(est!=0);break;

                                        case 3: clrscr();
                                                Desenhar();
                                                pintar(13);
                                                DesenharCaixa();
                                                VerCaixaP2();
                                                gotoxy(35,30);
                                                pscr();
                                                pintar(15);
                                                clrscr();break;


                                        case 4: Desenhar(); pintar(13);
                                                DesenharMesas();
                                                pintar(79);
                                                gotoxy(16,12);
                                                printf("Legenda");
                                                gotoxy(10,14);
                                                printf("Mesas disponiveis:");
                                                gotoxy(29,14);
                                                pintar(175);
                                                printf("%c",WHITE);
                                                gotoxy(10,16);
                                                pintar(79);
                                                printf("Mesas indisponiveis:");
                                                pintar(79);
                                                gotoxy(32,16);
                                                printf("%c",WHITE);
                                                pintar(79);
                                                gotoxy(50,13);
                                                printf("Lista de mesas:");
                                                int m;
                                                printf("\n\n");
                                                for(m=0;m<6;m++){
                                                    pintar(32);
                                                    printf(" \t\t\t\t\t\t\t Mesa %d Mesa %d\n",m++,m);
                                                }

                                                printf("\n");
                                                for(m=7;m<10;m++){
                                                    pintar(79);
                                                    printf(" \t\t\t\t\t\t\t Mesa %d Mesa %d\n",m++,m);
                                                }
                                                pintar(79);
                                                gotoxy(60,25);
                                                pscr(); pintar(15); clrscr();break;


                                        case 5: do{
                                                Desenhar(); pintar(13);
                                                DesenharPedidos();
                                                pintar(79);
                                                gotoxy(50,17);
                                                printf("0. Voltar");
                                                gotoxy(50,12);
                                                printf("1. Adicionar pedidos");
                                                gotoxy(50,14);
                                                printf("2. Ver pedidos em andamento");
                                                gotoxy(50,19);
                                                pintar(95);
                                                printf("%c",BLACK);
                                                gotoxy(50,19);
                                                scanf("%d", &comanda0);
                                                pintar(15);
                                                clrscr();
                                                switch(comanda0){

                                                    case 0: clrscr();break;
                                                    case 1: do{
                                                            Desenhar(); pintar(1);
                                                            DesenharAdicionar();
                                                            pintar(79);
                                                            gotoxy(50,20);
                                                            printf("0.Voltar");
                                                            gotoxy(50,13);
                                                            printf("1. Pizzas Salgadas");
                                                            gotoxy(50,15);
                                                            printf("2. Pizzas Doces");
                                                            gotoxy(50,17);
                                                            printf("3. Bebidas");
                                                            gotoxy(50,22); pintar(95);
                                                            printf("%c",BLACK);
                                                            gotoxy(50,22);
                                                            scanf("%d", &comanda);
                                                            pintar(15);
                                                            clrscr();
                                                            switch(comanda){
                                                                case 0: printf("Voltando...");
                                                                        dscr();
                                                                        clrscr();break;

                                                                case 1: clrscr();
                                                                        AdicionarPedidosP2();
                                                                        clrscr();break;

                                                                case 2: clrscr();
                                                                        AdicionarPedidos1P2();
                                                                        clrscr();break;

                                                                case 3: do{
                                                                        Desenhar();
                                                                        pintar(79);
                                                                        gotoxy(45,17);
                                                                        printf("0.Voltar\n");
                                                                        gotoxy(45,10);
                                                                        printf("1.Adicionar Cervejas\n");
                                                                        gotoxy(45,12);
                                                                        printf("2.Adicionar Refrigerantes\n");
                                                                        gotoxy(45,14);
                                                                        printf("3.Adicionar Sucos\n");
                                                                        pintar(95);
                                                                        gotoxy(50,19);
                                                                        printf("%c",BLACK);
                                                                        gotoxy(50,19);
                                                                        scanf("%d",&adicionar);
                                                                        pintar(15);
                                                                        switch(adicionar){
                                                                            case 0: printf("Voltando...");
                                                                            dscr();
                                                                            clrscr();
                                                                            break;


                                                                            case 1: clrscr();
                                                                                    AdicionarPedidos2P2();
                                                                                    clrscr();break;

                                                                            case 2: clrscr();
                                                                                    AdicionarPedidos3P2();
                                                                                    clrscr();break;

                                                                            case 3: clrscr();
                                                                                    AdicionarPedidos4P2();
                                                                                    clrscr();break;

                                                                        }
                                                                        }while(adicionar!=0);break;

                                                                }
                                                                }while(comanda!=0);break;
                                                        case 2: VerPedidosP2();break;
                                                    }
                                                    }while(comanda0!=0);break;
                                    }
                                    }while(op1!=0);break;


                            case 3: pintar(6);
                                    DesenharLogin();
                                    gotoxy(36,15);
                                    pintar(79);
                                    printf("Digite a senha para logar na loja 3:");
                                    for(z=0;z<4;z++){
                                        pintar(95);
                                        printf("%c",BLACK);
                                    }gotoxy(72,15);
                                    scanf("%d",&senha);
                                    pintar(15);
                                    if(senha != 2311){
                                        clrscr();
                                        Desenhar(); gotoxy(45,25); pintar(79);
                                        printf("Senha incorreta, tente novamente!\n");break;
                                    }else{
                                        clrscr();
                                        Desenhar(); gotoxy(45,10); pintar(79);
                                        printf("Logado com sucesso!!!!\n\n");
                                        gotoxy(45,15);
                                        pintar(79);
                                        pscr();
                                        pintar(15);
                                        clrscr();
                                    }
                                    do{
                                    Desenhar(); pintar(6);
                                    DesenharLoja3();
                                    pintar(79);
                                    gotoxy(40,23);
                                    printf("0.Voltar");
                                    gotoxy(40,13);
                                    printf("1.Cardapio");
                                    gotoxy(40,15);
                                    printf("2.Gerenciar estoque");
                                    gotoxy(40,17);
                                    printf("3.Gerenciar Caixa");
                                    gotoxy(40,19);
                                    printf("4.Gerenciar Mesas");
                                    gotoxy(40,21);
                                    printf("5.Pedidos");
                                    pintar(95);
                                    gotoxy(40,25);
                                    printf("%c\n",BLACK);
                                    gotoxy(40,25);
                                    scanf("%d",&op1);
                                    pintar(15);
                                    clrscr();
                                    switch(op1){

                                        case 0: clrscr();break;

                                        case 1: do{
                                                Desenhar();
                                                pintar(6);
                                                DesenharCardapio();
                                                gotoxy(50,21);
                                                pintar(79);
                                                printf("0.Sair");
                                                gotoxy(50,14);
                                                printf("1.Pizzas Salgadas");
                                                gotoxy(50,16);
                                                printf("2.Pizzas Doces");
                                                gotoxy(50,18);
                                                printf("3.Bebidas");
                                                gotoxy(50,20);
                                                pintar(95);
                                                gotoxy(50,23);
                                                printf("%c\n",BLACK);
                                                gotoxy(50,23);
                                                scanf("%d",&pizzas);
                                                pintar(15);
                                                clrscr();
                                                switch(pizzas){
                                                    case 0: clrscr();break;
                                                    case 1: do{
                                                            Desenhar(); pintar(6);
                                                            DesenharSalgadas();
                                                            pintar(79);
                                                            gotoxy(40,19);
                                                            printf("0.Voltar\n");
                                                            gotoxy(40,14);
                                                            printf("1.Adicionar pizzas\n");
                                                            gotoxy(40,16);
                                                            printf("2.Ver pizzas\n");
                                                            gotoxy(40,21);
                                                            pintar(95);
                                                            printf("%c\n",BLACK);
                                                            gotoxy(40,21);
                                                            scanf("%d",&adicionar);
                                                            pintar(15);
                                                            switch(adicionar){
                                                                case 0: printf("Voltando...");
                                                                        dscr();
                                                                        clrscr();break;

                                                                case 1: clrscr();
                                                                        AdicionarSaborP3();
                                                                        clrscr();break;

                                                                case 2: clrscr();
                                                                        VerSaborP3();
                                                                        gotoxy(35,20);
                                                                        pscr();
                                                                        pintar(15);
                                                                        clrscr();break;

                                                            }
                                                            }while(adicionar!=0);break;

                                                    case 2: do{
                                                            Desenhar(); pintar(6);
                                                            DesenharDoces();
                                                            pintar(79);
                                                            gotoxy(40,19);
                                                            printf("0.Voltar\n");
                                                            gotoxy(40,14);
                                                            printf("1.Adicionar pizzas\n");
                                                            gotoxy(40,16);
                                                            printf("2.Ver pizzas\n");
                                                            gotoxy(40,21);
                                                            pintar(95);
                                                            printf("%c\n",BLACK);
                                                            gotoxy(40,21);
                                                            scanf("%d",&adicionar);
                                                            pintar(15);
                                                            switch(adicionar){
                                                                case 0: printf("Voltando...");
                                                                        dscr();
                                                                        clrscr();break;

                                                                case 1: clrscr();
                                                                        AdicionarSabor1P3();
                                                                        clrscr();break;

                                                                case 2: clrscr();
                                                                        VerSabor1P3();
                                                                        gotoxy(35,20);
                                                                        pscr();
                                                                        pintar(15);
                                                                        clrscr();break;


                                                            }
                                                            }while(adicionar!=0);break;

                                                    case 3: do{
                                                            Desenhar(); pintar(6);
                                                            DesenharBebidas();
                                                            pintar(79);
                                                            gotoxy(45,21);
                                                            printf("0.Voltar\n");
                                                            gotoxy(45,14);
                                                            printf("1.Adicionar Bebidas\n");
                                                            gotoxy(45,16);
                                                            printf("2.Ver Bebidas\n");
                                                            gotoxy(45,18);
                                                            pintar(95);
                                                            gotoxy(45,23);
                                                            printf("%c\n",BLACK);
                                                            gotoxy(45,23);
                                                            scanf("%d",&adicionar);
                                                            pintar(15);
                                                            clrscr();
                                                            switch(adicionar){
                                                                case 0: printf("Voltando...");
                                                                        dscr();
                                                                        clrscr();break;
                                                                case 1: do{
                                                                        Desenhar();
                                                                        pintar(79);
                                                                        gotoxy(45,17);
                                                                        printf("0.Voltar\n");
                                                                        gotoxy(45,10);
                                                                        printf("1.Adicionar Cervejas\n");
                                                                        gotoxy(45,12);
                                                                        printf("2.Adicionar Sucos\n");
                                                                        gotoxy(45,14);
                                                                        printf("3.Adicionar Refrigerantes\n");
                                                                        pintar(95);
                                                                        gotoxy(50,19);
                                                                        printf("%c",BLACK);
                                                                        gotoxy(50,19);
                                                                        scanf("%d",&comanda);
                                                                        pintar(15);
                                                                        switch(comanda){
                                                                        case 0: printf("Voltando...");
                                                                                dscr();
                                                                                clrscr();break;

                                                                        case 1: clrscr();
                                                                                AdicionarBebidas2P3();
                                                                                clrscr();break;

                                                                        case 2: clrscr();
                                                                                AdicionarBebidas1P3();
                                                                                clrscr();break;

                                                                        case 3: clrscr();
                                                                                AdicionarBebidasP3();
                                                                                clrscr();break;

                                                                        }
                                                                        }while(comanda=!0);break;

                                                                case 2: do{
                                                                        Desenhar();
                                                                        pintar(79);
                                                                        gotoxy(45,17);
                                                                        printf("0.Voltar\n");
                                                                        gotoxy(45,10);
                                                                        printf("1.Ver Cervejas\n");
                                                                        gotoxy(45,12);
                                                                        printf("2.Ver Sucos\n");
                                                                        gotoxy(45,14);
                                                                        printf("3.Ver Refrigerantes\n");
                                                                        pintar(95);
                                                                        gotoxy(50,19);
                                                                        printf("%c",BLACK);
                                                                        gotoxy(50,19);
                                                                        scanf("%d",&comanda);
                                                                        pintar(15);
                                                                        switch(comanda){
                                                                        case 0: printf("Voltando...");
                                                                                dscr();
                                                                                clrscr();break;

                                                                        case 1: clrscr();
                                                                                VerBebidas2P3();
                                                                                gotoxy(35,20);
                                                                                pscr();
                                                                                pintar(15);
                                                                                clrscr();break;
                                                                        break;
                                                                        case 2: clrscr();
                                                                                VerBebidas1P3();
                                                                                gotoxy(35,20);
                                                                                pscr();
                                                                                pintar(15);
                                                                                clrscr();break;
                                                                        break;
                                                                        case 3: clrscr();
                                                                                VerBebidasP3();
                                                                                gotoxy(35,20);
                                                                                pscr();
                                                                                pintar(15);
                                                                                clrscr();break;

                                                                        }
                                                                        }while(comanda=!0);break;
                                                            }
                                                            }while(adicionar!=0);break;
                                                }
                                                }while(pizzas!=0);break;

                                        case 2: do{ Desenhar();
                                                    pintar(6);
                                                    DesenharEstoque();
                                                    gotoxy(40,17);
                                                    pintar(79);
                                                    printf("0.Voltar");
                                                    gotoxy(40,12);
                                                    printf("1.Adicionar no estoque");
                                                    gotoxy(40,14);
                                                    printf("2.Ver estoque");
                                                    pintar(95);
                                                    gotoxy(40,20);
                                                    printf("%c\n",BLACK);
                                                    gotoxy(40,20);
                                                    scanf("%d",&est);
                                                    pintar(15);
                                                    switch(est){
                                                            case 0: clrscr();break;
                                                            case 1: AdicionarProdutosP3();
                                                                    clrscr();
                                                                    break;
                                                            case 2: clrscr();
                                                                    VerProdutosP3();
                                                                    gotoxy(35,20);
                                                                    pscr();
                                                                    pintar(15);
                                                                    clrscr();break;
                                                                }
                                                                }while(est!=0);break;

                                        case 3: clrscr();
                                                Desenhar();
                                                pintar(6);
                                                DesenharCaixa();
                                                VerCaixaP3();
                                                gotoxy(35,30);
                                                pscr();
                                                pintar(15);
                                                clrscr();break;


                                        case 4: Desenhar(); pintar(6);
                                                DesenharMesas();
                                                pintar(79);
                                                gotoxy(16,12);
                                                printf("Legenda");
                                                gotoxy(10,14);
                                                printf("Mesas disponiveis:");
                                                gotoxy(29,14);
                                                pintar(175);
                                                printf("%c",WHITE);
                                                gotoxy(10,16);
                                                pintar(79);
                                                printf("Mesas indisponiveis:");
                                                pintar(79);
                                                gotoxy(32,16);
                                                printf("%c",WHITE);
                                                pintar(79);
                                                gotoxy(50,13);
                                                printf("Lista de mesas:");
                                                int m;
                                                printf("\n\n");
                                                for(m=0;m<6;m++){
                                                    pintar(32);
                                                    printf(" \t\t\t\t\t\t\t Mesa %d Mesa %d\n",m++,m);
                                                }

                                                printf("\n");
                                                for(m=7;m<10;m++){
                                                    pintar(79);
                                                    printf(" \t\t\t\t\t\t\t Mesa %d Mesa %d\n",m++,m);
                                                }
                                                pintar(79);
                                                gotoxy(60,25);
                                                pscr(); pintar(15); clrscr();break;


                                        case 5: do{
                                                Desenhar(); pintar(13);
                                                DesenharPedidos();
                                                pintar(79);
                                                gotoxy(50,17);
                                                printf("0. Voltar");
                                                gotoxy(50,12);
                                                printf("1. Adicionar pedidos");
                                                gotoxy(50,14);
                                                printf("2. Ver pedidos em andamento");
                                                gotoxy(50,19);
                                                pintar(95);
                                                printf("%c",BLACK);
                                                gotoxy(50,19);
                                                scanf("%d", &comanda0);
                                                pintar(15);
                                                clrscr();
                                                switch(comanda0){

                                                    case 0: clrscr();break;
                                                    case 1: do{
                                                            Desenhar(); pintar(1);
                                                            DesenharAdicionar();
                                                            pintar(79);
                                                            gotoxy(50,20);
                                                            printf("0.Voltar");
                                                            gotoxy(50,13);
                                                            printf("1. Pizzas Salgadas");
                                                            gotoxy(50,15);
                                                            printf("2. Pizzas Doces");
                                                            gotoxy(50,17);
                                                            printf("3. Bebidas");
                                                            gotoxy(50,22); pintar(95);
                                                            printf("%c",BLACK);
                                                            gotoxy(50,22);
                                                            scanf("%d", &comanda);
                                                            pintar(15);
                                                            clrscr();
                                                            switch(comanda){
                                                                case 0: printf("Voltando...");
                                                                        dscr();
                                                                        clrscr();break;

                                                                case 1: clrscr();
                                                                        AdicionarPedidosP3();
                                                                        clrscr();break;

                                                                case 2: clrscr();
                                                                        AdicionarPedidos1P3();
                                                                        clrscr();break;

                                                                case 3: do{
                                                                        Desenhar();
                                                                        pintar(79);
                                                                        gotoxy(45,17);
                                                                        printf("0.Voltar\n");
                                                                        gotoxy(45,10);
                                                                        printf("1.Adicionar Cervejas\n");
                                                                        gotoxy(45,12);
                                                                        printf("2.Adicionar Refrigerantes\n");
                                                                        gotoxy(45,14);
                                                                        printf("3.Adicionar Sucos\n");
                                                                        pintar(95);
                                                                        gotoxy(50,19);
                                                                        printf("%c",BLACK);
                                                                        gotoxy(50,19);
                                                                        scanf("%d",&adicionar);
                                                                        pintar(15);
                                                                        switch(adicionar){
                                                                            case 0: printf("Voltando...");
                                                                            dscr();
                                                                            clrscr();
                                                                            break;


                                                                            case 1: clrscr();
                                                                                    AdicionarPedidos2P3();
                                                                                    clrscr();break;

                                                                            case 2: clrscr();
                                                                                    AdicionarPedidos3P3();
                                                                                    clrscr();break;

                                                                            case 3: clrscr();
                                                                                    AdicionarPedidos4P3();
                                                                                    clrscr();break;

                                                                        }
                                                                        }while(adicionar!=0);break;

                                                                }
                                                                }while(comanda!=0);break;

                                                    case 2: VerPedidosP3();break;
                                                }
                                                }while(comanda0!=0);break;
                                    }
                                    }while(op1!=0);break;


                        }
                        }while(loja!=0);break;
                    }
                    }while(op!=0);
return 0;
}

void AdicionarProdutos(){
    char nome[30];
    Estoque novo;
    FILE*arquivo;
    Desenhar();
    pintar(15);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\produtos.txt", "a+b");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        //dscr();
        exit(1);
    }
        printf("\n\n");
        pintar(79);
        gotoxy(35,10);
        printf("Digite o produto que deseja adicionar:");
        pintar(15);
        getchar();
        gotoxy(74,10);
        fgets(novo.nome, sizeof(novo.nome), stdin);
        strtok(novo.nome, "\n");
        pintar(79);
        gotoxy(35,13);
        printf("Digite a quantidade a ser inserida:");
        pintar(15);
        gotoxy(71,13);
        fgets(novo.quantidade, sizeof(novo.quantidade), stdin);
        strtok(novo.quantidade, "\n");
        fwrite(&novo, sizeof(Estoque),1,arquivo);
        fclose(arquivo);
}

void VerProdutos(){
    Estoque pizzaria;
    FILE*arquivo;
    char sabor[50];
    Desenhar();
    pintar(4);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\produtos.txt", "rb");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        return;
    }
    printf("\n\n");
    gotoxy(32,9);
    printf("Produto                       |Quantidade\n");

    while(!feof(arquivo))
    {
        fread(&pizzaria, sizeof(Estoque),1,arquivo);
        printf("\t\t\t\t%-30s|%-13s\n", pizzaria.nome, pizzaria.quantidade);
    }
    fclose(arquivo);
    pintar(79);
}

void AdicionarSabor(){
    char sabor[30];
    Sabor novo;
    FILE*arquivo;
    Desenhar();
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pizzasalgada.txt", "a+b");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        exit(1);
    }

        printf("\n\n");
        gotoxy(35,10);
        pintar(79);
        printf("Digite o sabor que deseja adicionar:");
        pintar(15);
        getchar();
        gotoxy(72,10);
        fgets(novo.sabor, sizeof(novo.sabor), stdin);
        strtok(novo.sabor, "\n");
        pintar(79);
        gotoxy(35,13);
        printf("Digite o valor:");
        pintar(15);
        gotoxy(51,13);
        fgets(novo.valor, sizeof(novo.valor), stdin);
        strtok(novo.valor, "\n");
        fwrite(&novo, sizeof(Sabor),1,arquivo);
        fclose(arquivo);
}

void VerSabor(){
    Sabor pizzarias;
    FILE*arquivo;
    char sabor[50];
    Desenhar();
    pintar(4);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pizzasalgada.txt", "rb");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        return;
    }
    printf("\n\n");
    gotoxy(32,9);
    printf("Sabor                         |Valor\n");

    while(!feof(arquivo))
    {

        fread(&pizzarias, sizeof(Sabor),1,arquivo);

        printf("\t\t\t\t\%-30s|R$ %-13s\n", pizzarias.sabor, pizzarias.valor);
    }
    fclose(arquivo);
    pintar(79);
}

void AdicionarSabor1(){
    char sabor[30];
    Sabor novo1;
    FILE*arquivo;
    Desenhar();
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pizzadoce.txt", "a+b");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");

        exit(1);
    }
        printf("\n\n");
        pintar(79);
        gotoxy(35,10);
        printf("Digite o sabor que deseja adicionar: ");
        pintar(15);
        getchar();
        gotoxy(72,10);
        fgets(novo1.sabor, sizeof(novo1.sabor), stdin);
        strtok(novo1.sabor, "\n");
        pintar(79);
        gotoxy(35,13);
        printf("Digite o valor: ");
        pintar(15);
        gotoxy(51,13);
        fgets(novo1.valor, sizeof(novo1.valor), stdin);
        strtok(novo1.valor, "\n");
        fwrite(&novo1, sizeof(Sabor),1,arquivo);
        fclose(arquivo);
}

void VerSabor1(){
    Sabor pizzarias;
    FILE*arquivo;
    char sabor[50];
    Desenhar();
    pintar(4);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pizzadoce.txt", "rb");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        return;
    }
    printf("\n\n");
    gotoxy(32,9);
    printf("Sabor                       |Valor\n");

    while(!feof(arquivo))
    {
        fread(&pizzarias, sizeof(Sabor),1,arquivo);
        printf("\t\t\t\t%-30s|R$ %-13s\n", pizzarias.sabor, pizzarias.valor);
    }
    fclose(arquivo);
    pintar(79);
}

void AdicionarBebidas(){
    char sabor[30];
    Bebidas novo;
    FILE*arquivo;
    Desenhar();
    pintar(15);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\cervejas.txt", "a+b");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        exit(1);
    }
        printf("\n\n");
        pintar(79);
        gotoxy(35,10);
        printf("Digite o produto que deseja adicionar:");
        pintar(15);
        getchar();
        gotoxy(74,10);
        fgets(novo.marca, sizeof(novo.marca), stdin);
        strtok(novo.marca, "\n");
        pintar(79);
        gotoxy(35,13);
        printf("Insira o valor:");
        pintar(15);
        gotoxy(71,13);
        fgets(novo.valor, sizeof(novo.valor), stdin);
        strtok(novo.valor, "\n");
        fwrite(&novo, sizeof(Bebidas),1,arquivo);
        fclose(arquivo);
}

void VerBebidas(){
    Bebidas bebidas;
    FILE*arquivo;
    char marca[30];
    Desenhar();
    pintar(4);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\cervejas.txt", "rb");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        return;
    }
    printf("\n\n");
    gotoxy(32,9);
    printf("Marca                       |Valor");

    while(!feof(arquivo))
    {
        fread(&bebidas, sizeof(Bebidas),1,arquivo);
        printf("\t\t\t\t%-30s|R$ %-13s\n", bebidas.marca, bebidas.valor);
    }
    fclose(arquivo);
    pintar(79);
}

void AdicionarBebidas1(){
    char sabor[30];
    Bebidas novo;
    FILE*arquivo;
    Desenhar();
    pintar(15);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\refrigerante.txt", "a+b");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        dscr();
        exit(1);
    }
        printf("\n\n");
        pintar(79);
        gotoxy(35,10);
        printf("Insira o valor:");
        pintar(15);
        getchar();
        gotoxy(74,10);
        fgets(novo.marca, sizeof(novo.marca), stdin);
        strtok(novo.marca, "\n");
        pintar(79);
        gotoxy(35,13);
        printf("Digite a quantidade a ser inserida:");
        pintar(15);
        gotoxy(71,13);
        fgets(novo.valor, sizeof(novo.valor), stdin);
        strtok(novo.valor, "\n");
        fwrite(&novo, sizeof(Bebidas),1,arquivo);
        fclose(arquivo);
}

void VerBebidas1(){
    Bebidas bebidas;
    FILE*arquivo;
    char marca[30];
    Desenhar();
    pintar(4);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\refrigerante.txt", "rb");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        return;
    }
    printf("\n\n");
    gotoxy(32,9);
    printf("Marca                       |Valor");

    while(!feof(arquivo))
    {
        fread(&bebidas, sizeof(Bebidas),1,arquivo);
        printf("\t\t\t\t%-30s|R$ %-13s\n", bebidas.marca, bebidas.valor);
    }
    fclose(arquivo);
    pintar(79);
}

void AdicionarBebidas2(){
    char sabor[30];
    Bebidas novo;
    FILE*arquivo;
    Desenhar();
    pintar(15);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\sucos.txt", "a+b");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        dscr();
        exit(1);
    }
        printf("\n\n");
        pintar(79);
        gotoxy(35,10);
        printf("Digite o produto que deseja adicionar:");
        pintar(15);
        getchar();
        gotoxy(74,10);
        fgets(novo.marca, sizeof(novo.marca), stdin);
        strtok(novo.marca, "\n");
        pintar(79);
        gotoxy(35,13);
        printf("Insira o valor:");
        pintar(15);
        gotoxy(71,13);
        fgets(novo.valor, sizeof(novo.valor), stdin);
        strtok(novo.valor, "\n");
        fwrite(&novo, sizeof(Bebidas),1,arquivo);
        fclose(arquivo);
}

void VerBebidas2(){
    Bebidas bebidas;
    FILE*arquivo;
    char marca[30];
    Desenhar();
    pintar(4);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\sucos.txt", "rb");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        return;
    }
    printf("\n\n");
    gotoxy(32,9);
    printf("Marca                       |Valor");

    while(!feof(arquivo))
    {
        fread(&bebidas, sizeof(Bebidas),1,arquivo);
        printf("\t\t\t\t%-30s|R$ %-13s\n", bebidas.marca, bebidas.valor);
    }
    fclose(arquivo);
    pintar(79);
}

void VerCaixa(){
    FILE*arq = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\CaixaTotal.txt", "rt");
char Linha[100];
char *result;
float i[20];
float soma = 0;
int x;
pintar(4);
//clrscr();
if (arq == NULL) {
        gotoxy(45,10);
     printf("Problemas na abertura do arquivo\n");
}
gotoxy(50,13);
for(x=0;x<=i;x++){
while (!feof(arq)){
result = fgets(Linha, 100, arq);
        if (result) {
        i[x] = atof(Linha);

        //printf("%0.2f\n", i[x]);
        printf("\t%0.2f",i[x]);
        soma = soma + i[x];
}
}
}

        gotoxy(50,20);
        pintar(79);
    printf("%0.2f", soma);


    fclose(arq);

}

void AdicionarPedidos(){
Sabor pizzarias;
        FILE*arquivo;
        char sabor[50];
        char csabor[50];
        char csabor0[13];
        char mesa[13];
        int result;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pizzasalgada.txt", "rb");
        if (arquivo == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");
            return;
        }
        printf("\n\n");
        pintar(79);
        gotoxy(53,15);
        printf("Digite o sabor:");
        pintar(15);
        getchar();
        gotoxy(69,15);
        fgets(sabor, sizeof(sabor), stdin);
        strtok(sabor, "\n");
        clrscr();
        pintar(79);
        gotoxy(32,13);
        printf("Sabor                         |Valor  \n");
        pintar(15);
        while(!feof(arquivo))
        {
            if(strcmp(sabor, pizzarias.sabor) == 0){
            printf("\t\t\t\t\%-30s|R$ %-13s\n", pizzarias.sabor, pizzarias.valor);
            strcpy(csabor, pizzarias.sabor);
            strcpy(csabor0, pizzarias.valor);
        }fread(&pizzarias, sizeof(Sabor),1,arquivo);
        }
        fclose(arquivo);
        pintar(15);
        FILE*arq;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arq = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pedidos.txt", "a+b");
        if (arq == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");

            exit(1);
        }
        gotoxy(40,20);
        pintar(79);
        printf("Insira a mesa do pedido:");
        gotoxy(65,20);
        pintar(15);
        fgets(mesa, sizeof(mesa), stdin);
        result = fputs(mesa, arq);
        strtok(mesa, "\n\n");
        result = fputs(csabor, arq);
        strtok(csabor, "\n\n");
        result = fputs(csabor0, arq);

            fclose(arq);
        clrscr();
FILE*arquivo1;
arquivo1 = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\CaixaTotal.txt", "a+b");
if (arquivo1 == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        dscr();
        exit(1);
    }

    result = fputs(csabor0, arquivo1);
    fprintf(arquivo1, " \n");
            fclose(arquivo1);
}

void AdicionarPedidos1(){
Sabor pizzarias;
        FILE*arquivo;
        char sabor[50];
        char csabor[50];
        char csabor0[13];
        char mesa[13];
        int result;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pizzadoce.txt", "rb");
        if (arquivo == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");
            return;
        }
        printf("\n\n");
        pintar(79);
        gotoxy(53,15);
        printf("Digite o sabor:");
        pintar(15);
        getchar();
        gotoxy(69,15);
        fgets(sabor, sizeof(sabor), stdin);
        strtok(sabor, "\n");
        clrscr();
        pintar(79);
        gotoxy(32,13);
        printf("Sabor                         |Valor  \n");
        pintar(15);
        while(!feof(arquivo))
        {
            if(strcmp(sabor, pizzarias.sabor) == 0){
            printf("\t\t\t\t\%-30s|R$ %-13s\n", pizzarias.sabor, pizzarias.valor);
            strcpy(csabor, pizzarias.sabor);
            strcpy(csabor0, pizzarias.valor);
        }fread(&pizzarias, sizeof(Sabor),1,arquivo);
        }
        fclose(arquivo);
        pintar(15);
        FILE*arq;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arq = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pedidos.txt", "a+b");
        if (arq == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");

            exit(1);
        }
        gotoxy(40,20);
        pintar(79);
        printf("Insira a mesa do pedido:");
        gotoxy(65,20);
        pintar(15);
        fgets(mesa, sizeof(mesa), stdin);
        result = fputs(mesa, arq);
        strtok(mesa, "\n\n");
        result = fputs(csabor, arq);
        strtok(csabor, "\n\n");
        result = fputs(csabor0, arq);

            fclose(arq);
        clrscr();
FILE*arquivo1;
arquivo1 = fopen("C:\\Users\\Murilo\\Desktop\\CaixaTotal.txt", "a+b");
if (arquivo1 == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        dscr();
        exit(1);
    }

    result = fputs(csabor0, arquivo1);
    fprintf(arquivo1, " \n");
            fclose(arquivo1);
}

void AdicionarPedidos2(){
Sabor pizzarias;
        FILE*arquivo;
        char sabor[50];
        char csabor[50];
        char csabor0[13];
        char mesa[13];
        int result;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\cervejas.txt", "rb");
        if (arquivo == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");
            return;
        }
        printf("\n\n");
        pintar(79);
        gotoxy(53,15);
        printf("Digite a marca:");
        pintar(15);
        getchar();
        gotoxy(69,15);
        fgets(sabor, sizeof(sabor), stdin);
        strtok(sabor, "\n");
        clrscr();
        pintar(79);
        gotoxy(32,13);
        printf("Sabor                         |Valor  \n");
        pintar(15);
        while(!feof(arquivo))
        {
            if(strcmp(sabor, pizzarias.sabor) == 0){
            printf("\t\t\t\t\%-30s|R$ %-13s\n", pizzarias.sabor, pizzarias.valor);
            strcpy(csabor, pizzarias.sabor);
            strcpy(csabor0, pizzarias.valor);
        }fread(&pizzarias, sizeof(Sabor),1,arquivo);
        }
        fclose(arquivo);
        pintar(15);
        FILE*arq;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arq = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pedidos.txt", "a+b");
        if (arq == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");

            exit(1);
        }
        gotoxy(40,20);
        pintar(79);
        printf("Insira a mesa do pedido:");
        gotoxy(65,20);
        pintar(15);
        fgets(mesa, sizeof(mesa), stdin);
        result = fputs(mesa, arq);
        strtok(mesa, "\n\n");
        result = fputs(csabor, arq);
        strtok(csabor, "\n\n");
        result = fputs(csabor0, arq);

            fclose(arq);
        clrscr();
FILE*arquivo1;
arquivo1 = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\CaixaTotal.txt", "a+b");
if (arquivo1 == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        dscr();
        exit(1);
    }

    result = fputs(csabor0, arquivo1);
    fprintf(arquivo1, " \n");
            fclose(arquivo1);
}

void AdicionarPedidos3(){
Sabor pizzarias;
        FILE*arquivo;
        char sabor[50];
        char csabor[50];
        char csabor0[13];
        char mesa[13];
        int result;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\refrigerante.txt", "rb");
        if (arquivo == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");
            return;
        }
        printf("\n\n");
        pintar(79);
        gotoxy(53,15);
        printf("Digite o sabor:");
        pintar(15);
        getchar();
        gotoxy(69,15);
        fgets(sabor, sizeof(sabor), stdin);
        strtok(sabor, "\n");
        clrscr();
        pintar(79);
        gotoxy(32,13);
        printf("Sabor                         |Valor  \n");
        pintar(15);
        while(!feof(arquivo))
        {
            if(strcmp(sabor, pizzarias.sabor) == 0){
            printf("\t\t\t\t\%-30s|R$ %-13s\n", pizzarias.sabor, pizzarias.valor);
            strcpy(csabor, pizzarias.sabor);
            strcpy(csabor0, pizzarias.valor);
        }fread(&pizzarias, sizeof(Sabor),1,arquivo);
        }
        fclose(arquivo);
        pintar(15);
        FILE*arq;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arq = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pedidos.txt", "a+b");
        if (arq == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");

            exit(1);
        }
        gotoxy(40,20);
        pintar(79);
        printf("Insira a mesa do pedido:");
        gotoxy(65,20);
        pintar(15);
        fgets(mesa, sizeof(mesa), stdin);
        result = fputs(mesa, arq);
        strtok(mesa, "\n\n");
        result = fputs(csabor, arq);
        strtok(csabor, "\n\n");
        result = fputs(csabor0, arq);

            fclose(arq);
        clrscr();
FILE*arquivo1;
arquivo1 = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\CaixaTotal.txt", "a+b");
if (arquivo1 == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        dscr();
        exit(1);
    }

    result = fputs(csabor0, arquivo1);
    fprintf(arquivo1, " \n");
            fclose(arquivo1);
}

void AdicionarPedidos4(){
Sabor pizzarias;
        FILE*arquivo;
        char sabor[50];
        char csabor[50];
        char csabor0[13];
        char mesa[13];
        int result;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\sucos.txt", "rb");
        if (arquivo == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");
            return;
        }
        printf("\n\n");
        pintar(79);
        gotoxy(53,15);
        printf("Digite o sabor:");
        pintar(15);
        getchar();
        gotoxy(69,15);
        fgets(sabor, sizeof(sabor), stdin);
        strtok(sabor, "\n");
        clrscr();
        pintar(79);
        gotoxy(32,13);
        printf("Sabor                         |Valor  \n");
        pintar(15);
        while(!feof(arquivo))
        {
            if(strcmp(sabor, pizzarias.sabor) == 0){
            printf("\t\t\t\t\%-30s|R$ %-13s\n", pizzarias.sabor, pizzarias.valor);
            strcpy(csabor, pizzarias.sabor);
            strcpy(csabor0, pizzarias.valor);
        }fread(&pizzarias, sizeof(Sabor),1,arquivo);
        }
        fclose(arquivo);
        pintar(15);
        FILE*arq;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arq = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pedidos.txt", "a+b");
        if (arq == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");

            exit(1);
        }
        gotoxy(40,20);
        pintar(79);
        printf("Insira a mesa do pedido:");
        gotoxy(65,20);
        pintar(15);
        fgets(mesa, sizeof(mesa), stdin);
        result = fputs(mesa, arq);
        strtok(mesa, "\n\n");
        result = fputs(csabor, arq);
        strtok(csabor, "\n\n");
        result = fputs(csabor0, arq);

            fclose(arq);
        clrscr();
FILE*arquivo1;
arquivo1 = fopen("C:\\Users\\Murilo\\Desktop\\CaixaTotal.txt", "a+b");
if (arquivo1 == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        dscr();
        exit(1);
    }

    result = fputs(csabor0, arquivo1);
    fprintf(arquivo1, " \n");
            fclose(arquivo1);
}

void VerPedidos(){

FILE*arq = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pedidos.txt", "rt");
char Linha[100];
char *result;
int i;
clrscr();
Desenhar();
pintar(1);
DesenharPedidos();
if (arq == NULL) {
        gotoxy(45,10);
     printf("Problemas na abertura do arquivo\n");
}
i = 1;
while (!feof(arq)){
    result = fgets(Linha, 100, arq);
      if (result){
        pintar(79); gotoxy(45,15);
        printf("Pedido %d :  %s",i,Linha);
      i++;}
  }
  fclose(arq);
  gotoxy(65,25);
  pscr();
  pintar(15);
  clrscr();
}



//PIZZARIA 2###########################################

void AdicionarProdutosP2(){
    char nome[30];
    Estoque novo;
    FILE*arquivo;
    Desenhar();
    pintar(15);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\produtosP2.txt", "a+b");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        //dscr();
        exit(1);
    }
        printf("\n\n");
        pintar(79);
        gotoxy(35,10);
        printf("Digite o produto que deseja adicionar:");
        pintar(15);
        getchar();
        gotoxy(74,10);
        fgets(novo.nome, sizeof(novo.nome), stdin);
        strtok(novo.nome, "\n");
        pintar(79);
        gotoxy(35,13);
        printf("Digite a quantidade a ser inserida:");
        pintar(15);
        gotoxy(71,13);
        fgets(novo.quantidade, sizeof(novo.quantidade), stdin);
        strtok(novo.quantidade, "\n");
        fwrite(&novo, sizeof(Estoque),1,arquivo);
        fclose(arquivo);
}

void VerProdutosP2(){
    Estoque pizzaria;
    FILE*arquivo;
    char sabor[50];
    Desenhar();
    pintar(4);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\produtosP2.txt", "rb");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        return;
    }
    printf("\n\n");
    gotoxy(32,9);
    printf("Produto                       |Quantidade\n");

    while(!feof(arquivo))
    {
        fread(&pizzaria, sizeof(Estoque),1,arquivo);
        printf("\t\t\t\t%-30s|%-13s\n", pizzaria.nome, pizzaria.quantidade);
    }
    fclose(arquivo);
    pintar(79);
}

void AdicionarSaborP2(){
    char sabor[30];
    Sabor novo;
    FILE*arquivo;
    Desenhar();
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pizzasalgadaP2.txt", "a+b");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        exit(1);
    }

        printf("\n\n");
        gotoxy(35,10);
        printf("Digite o sabor que deseja adicionar:");
        pintar(15);
        getchar();
        gotoxy(72,10);
        fgets(novo.sabor, sizeof(novo.sabor), stdin);
        strtok(novo.sabor, "\n");
        pintar(175);
        gotoxy(35,13);
        printf("Digite o valor:");
        pintar(15);
        gotoxy(51,13);
        fgets(novo.valor, sizeof(novo.valor), stdin);
        strtok(novo.valor, "\n");
        fwrite(&novo, sizeof(Sabor),1,arquivo);
        fclose(arquivo);
}

void VerSaborP2(){
    Sabor pizzarias;
    FILE*arquivo;
    char sabor[50];
    Desenhar();
    pintar(4);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pizzasalgada.txtP2", "rb");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        return;
    }
    printf("\n\n");
    gotoxy(32,9);
    printf("Sabor                         |Valor\n");

    while(!feof(arquivo))
    {

        fread(&pizzarias, sizeof(Sabor),1,arquivo);

        printf("\t\t\t\t\%-30s|R$ %-13s\n", pizzarias.sabor, pizzarias.valor);
    }
    fclose(arquivo);
    pintar(79);
}

void AdicionarSabor1P2(){
    char sabor[30];
    Sabor novo1;
    FILE*arquivo;
    Desenhar();
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pizzadoceP2.txt", "a+b");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");

        exit(1);
    }
        printf("\n\n");
        pintar(79);
        gotoxy(35,10);
        printf("Digite o sabor que deseja adicionar: ");
        pintar(15);
        getchar();
        gotoxy(72,10);
        fgets(novo1.sabor, sizeof(novo1.sabor), stdin);
        strtok(novo1.sabor, "\n");
        pintar(79);
        gotoxy(35,13);
        printf("Digite o valor: ");
        pintar(15);
        gotoxy(51,13);
        fgets(novo1.valor, sizeof(novo1.valor), stdin);
        strtok(novo1.valor, "\n");
        fwrite(&novo1, sizeof(Sabor),1,arquivo);
        fclose(arquivo);
}

void VerSabor1P2(){
    Sabor pizzarias;
    FILE*arquivo;
    char sabor[50];
    Desenhar();
    pintar(4);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pizzadoceP2.txt", "rb");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        return;
    }
    printf("\n\n");
    gotoxy(32,9);
    printf("Sabor                       |Valor\n");

    while(!feof(arquivo))
    {
        fread(&pizzarias, sizeof(Sabor),1,arquivo);
        printf("\t\t\t\t%-30s|R$ %-13s\n", pizzarias.sabor, pizzarias.valor);
    }
    fclose(arquivo);
    pintar(79);
}

void AdicionarBebidasP2(){
    char sabor[30];
    Bebidas novo;
    FILE*arquivo;
    Desenhar();
    pintar(15);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\cervejasP2.txt", "a+b");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        exit(1);
    }
        printf("\n\n");
        pintar(79);
        gotoxy(35,10);
        printf("Digite o produto que deseja adicionar:");
        pintar(15);
        getchar();
        gotoxy(74,10);
        fgets(novo.marca, sizeof(novo.marca), stdin);
        strtok(novo.marca, "\n");
        pintar(79);
        gotoxy(35,13);
        printf("Insira o valor:");
        pintar(15);
        gotoxy(71,13);
        fgets(novo.valor, sizeof(novo.valor), stdin);
        strtok(novo.valor, "\n");
        fwrite(&novo, sizeof(Bebidas),1,arquivo);
        fclose(arquivo);
}

void VerBebidasP2(){
    Bebidas bebidas;
    FILE*arquivo;
    char marca[30];
    Desenhar();
    pintar(4);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\cervejasP2.txt", "rb");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        return;
    }
    printf("\n\n");
    gotoxy(32,9);
    printf("Marca                       |Valor");

    while(!feof(arquivo))
    {
        fread(&bebidas, sizeof(Bebidas),1,arquivo);
        printf("\t\t\t\t%-30s|R$ %-13s\n", bebidas.marca, bebidas.valor);
    }
    fclose(arquivo);
    pintar(79);
}

void AdicionarBebidas1P2(){
    char sabor[30];
    Bebidas novo;
    FILE*arquivo;
    Desenhar();
    pintar(15);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\refrigeranteP2.txt", "a+b");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        dscr();
        exit(1);
    }
        printf("\n\n");
        pintar(79);
        gotoxy(35,10);
        printf("Digite o produto que deseja adicionar:");
        pintar(15);
        getchar();
        gotoxy(74,10);
        fgets(novo.marca, sizeof(novo.marca), stdin);
        strtok(novo.marca, "\n");
        pintar(79);
        gotoxy(35,13);
        printf("Insira o valor: ");
        pintar(15);
        gotoxy(71,13);
        fgets(novo.valor, sizeof(novo.valor), stdin);
        strtok(novo.valor, "\n");
        fwrite(&novo, sizeof(Bebidas),1,arquivo);
        fclose(arquivo);
}

void VerBebidas1P2(){
    Bebidas bebidas;
    FILE*arquivo;
    char marca[30];
    Desenhar();
    pintar(4);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\refrigeranteP2.txt", "rb");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        return;
    }
    printf("\n\n");
    gotoxy(32,9);
    printf("Marca                       |Valor");

    while(!feof(arquivo))
    {
        fread(&bebidas, sizeof(Bebidas),1,arquivo);
        printf("\t\t\t\t%-30s|R$ %-13s\n", bebidas.marca, bebidas.valor);
    }
    fclose(arquivo);
    pintar(79);
}

void AdicionarBebidas2P2(){
    char sabor[30];
    Bebidas novo;
    FILE*arquivo;
    Desenhar();
    pintar(15);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\sucosP2.txt", "a+b");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        dscr();
        exit(1);
    }
        printf("\n\n");
        pintar(79);
        gotoxy(35,10);
        printf("Digite o produto que deseja adicionar:");
        pintar(15);
        getchar();
        gotoxy(74,10);
        fgets(novo.marca, sizeof(novo.marca), stdin);
        strtok(novo.marca, "\n");
        pintar(79);
        gotoxy(35,13);
        printf("Insira o valor:");
        pintar(15);
        gotoxy(71,13);
        fgets(novo.valor, sizeof(novo.valor), stdin);
        strtok(novo.valor, "\n");
        fwrite(&novo, sizeof(Bebidas),1,arquivo);
        fclose(arquivo);
}

void VerBebidas2P2(){
    Bebidas bebidas;
    FILE*arquivo;
    char marca[30];
    Desenhar();
    pintar(4);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\sucosP2.txt", "rb");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        return;
    }
    printf("\n\n");
    gotoxy(32,9);
    printf("Marca                       |Valor");

    while(!feof(arquivo))
    {
        fread(&bebidas, sizeof(Bebidas),1,arquivo);
        printf("\t\t\t\t%-30s|R$ %-13s\n", bebidas.marca, bebidas.valor);
    }
    fclose(arquivo);
    pintar(79);
}

void VerCaixaP2(){
    FILE*arq = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\CaixaTotalP2.txt", "rt");
char Linha[100];
char *result;
float i[20];
float soma = 0;
int x;
pintar(4);
//clrscr();
if (arq == NULL) {
        gotoxy(45,10);
     printf("Problemas na abertura do arquivo\n");
}
gotoxy(50,13);
for(x=0;x<=i;x++){
while (!feof(arq)){
result = fgets(Linha, 100, arq);
        if (result) {
        i[x] = atof(Linha);

        //printf("%0.2f\n", i[x]);
        printf("\t%0.2f",i[x]);
        soma = soma + i[x];
}
}
}

        gotoxy(50,20);
        pintar(79);
    printf("%0.2f", soma);


    fclose(arq);

}

void AdicionarPedidosP2(){
Sabor pizzarias;
        FILE*arquivo;
        char sabor[50];
        char csabor[50];
        char csabor0[13];
        char mesa[13];
        int result;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pizzasalgadaP2.txt", "rb");
        if (arquivo == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");
            return;
        }
        printf("\n\n");
        pintar(79);
        gotoxy(53,15);
        printf("Digite o sabor:");
        pintar(15);
        getchar();
        gotoxy(69,15);
        fgets(sabor, sizeof(sabor), stdin);
        strtok(sabor, "\n");
        clrscr();
        pintar(79);
        gotoxy(32,13);
        printf("Sabor                         |Valor  \n");
        pintar(15);
        while(!feof(arquivo))
        {
            if(strcmp(sabor, pizzarias.sabor) == 0){
            printf("\t\t\t\t\%-30s|R$ %-13s\n", pizzarias.sabor, pizzarias.valor);
            strcpy(csabor, pizzarias.sabor);
            strcpy(csabor0, pizzarias.valor);
        }fread(&pizzarias, sizeof(Sabor),1,arquivo);
        }
        fclose(arquivo);
        pintar(15);
        FILE*arq;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arq = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pedidosP2.txt", "a+b");
        if (arq == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");

            exit(1);
        }
        gotoxy(40,20);
        pintar(79);
        printf("Insira a mesa do pedido:");
        gotoxy(65,20);
        pintar(15);
        fgets(mesa, sizeof(mesa), stdin);
        result = fputs(mesa, arq);
        strtok(mesa, "\n\n");
        result = fputs(csabor, arq);
        strtok(csabor, "\n\n");
        result = fputs(csabor0, arq);

            fclose(arq);
        clrscr();
FILE*arquivo1;
arquivo1 = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\CaixaTotalP2.txt", "a+b");
if (arquivo1 == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        dscr();
        exit(1);
    }

    result = fputs(csabor0, arquivo1);
    fprintf(arquivo1, " \n");
            fclose(arquivo1);
}

void AdicionarPedidos1P2(){
Sabor pizzarias;
        FILE*arquivo;
        char sabor[50];
        char csabor[50];
        char csabor0[13];
        char mesa[13];
        int result;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pizzacoceP2.txtt", "rb");
        if (arquivo == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");
            return;
        }
        printf("\n\n");
        pintar(79);
        gotoxy(53,15);
        printf("Digite o sabor:");
        pintar(15);
        getchar();
        gotoxy(69,15);
        fgets(sabor, sizeof(sabor), stdin);
        strtok(sabor, "\n");
        clrscr();
        pintar(79);
        gotoxy(32,13);
        printf("Sabor                         |Valor  \n");
        pintar(15);
        while(!feof(arquivo))
        {
            if(strcmp(sabor, pizzarias.sabor) == 0){
            printf("\t\t\t\t\%-30s|R$ %-13s\n", pizzarias.sabor, pizzarias.valor);
            strcpy(csabor, pizzarias.sabor);
            strcpy(csabor0, pizzarias.valor);
        }fread(&pizzarias, sizeof(Sabor),1,arquivo);
        }
        fclose(arquivo);
        pintar(15);
        FILE*arq;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arq = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pedidosP2.txt", "a+b");
        if (arq == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");

            exit(1);
        }
        gotoxy(40,20);
        pintar(79);
        printf("Insira a mesa do pedido:");
        gotoxy(65,20);
        pintar(15);
        fgets(mesa, sizeof(mesa), stdin);
        result = fputs(mesa, arq);
        strtok(mesa, "\n\n");
        result = fputs(csabor, arq);
        strtok(csabor, "\n\n");
        result = fputs(csabor0, arq);

            fclose(arq);
        clrscr();
FILE*arquivo1;
arquivo1 = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\CaixaTotalP2.txt", "a+b");
if (arquivo1 == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        dscr();
        exit(1);
    }

    result = fputs(csabor0, arquivo1);
    fprintf(arquivo1, " \n");
            fclose(arquivo1);
}

void AdicionarPedidos2P2(){
Sabor pizzarias;
        FILE*arquivo;
        char sabor[50];
        char csabor[50];
        char csabor0[13];
        char mesa[13];
        int result;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\cervejasP2.txt", "rb");
        if (arquivo == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");
            return;
        }
        printf("\n\n");
        pintar(79);
        gotoxy(53,15);
        printf("Digite o sabor:");
        pintar(15);
        getchar();
        gotoxy(69,15);
        fgets(sabor, sizeof(sabor), stdin);
        strtok(sabor, "\n");
        clrscr();
        pintar(79);
        gotoxy(32,13);
        printf("Sabor                         |Valor  \n");
        pintar(15);
        while(!feof(arquivo))
        {
            if(strcmp(sabor, pizzarias.sabor) == 0){
            printf("\t\t\t\t\%-30s|R$ %-13s\n", pizzarias.sabor, pizzarias.valor);
            strcpy(csabor, pizzarias.sabor);
            strcpy(csabor0, pizzarias.valor);
        }fread(&pizzarias, sizeof(Sabor),1,arquivo);
        }
        fclose(arquivo);
        pintar(15);
        FILE*arq;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arq = fopen("C:\\Users\\Murilo\\Desktop\\pedidosP2.txt", "a+b");
        if (arq == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");

            exit(1);
        }
        gotoxy(40,20);
        pintar(79);
        printf("Insira a mesa do pedido:");
        gotoxy(65,20);
        pintar(15);
        fgets(mesa, sizeof(mesa), stdin);
        result = fputs(mesa, arq);
        strtok(mesa, "\n\n");
        result = fputs(csabor, arq);
        strtok(csabor, "\n\n");
        result = fputs(csabor0, arq);

            fclose(arq);
        clrscr();
FILE*arquivo1;
arquivo1 = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\CaixaTotalP2.txt", "a+b");
if (arquivo1 == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        dscr();
        exit(1);
    }

    result = fputs(csabor0, arquivo1);
    fprintf(arquivo1, " \n");
            fclose(arquivo1);
}

void AdicionarPedidos3P2(){
Sabor pizzarias;
        FILE*arquivo;
        char sabor[50];
        char csabor[50];
        char csabor0[13];
        char mesa[13];
        int result;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\refrigeranteP2.txt", "rb");
        if (arquivo == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");
            return;
        }
        printf("\n\n");
        pintar(79);
        gotoxy(53,15);
        printf("Digite o sabor:");
        pintar(15);
        getchar();
        gotoxy(69,15);
        fgets(sabor, sizeof(sabor), stdin);
        strtok(sabor, "\n");
        clrscr();
        pintar(79);
        gotoxy(32,13);
        printf("Sabor                         |Valor  \n");
        pintar(15);
        while(!feof(arquivo))
        {
            if(strcmp(sabor, pizzarias.sabor) == 0){
            printf("\t\t\t\t\%-30s|R$ %-13s\n", pizzarias.sabor, pizzarias.valor);
            strcpy(csabor, pizzarias.sabor);
            strcpy(csabor0, pizzarias.valor);
        }fread(&pizzarias, sizeof(Sabor),1,arquivo);
        }
        fclose(arquivo);
        pintar(15);
        FILE*arq;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arq = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pedidosP2.txt", "a+b");
        if (arq == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");

            exit(1);
        }
        gotoxy(40,20);
        pintar(79);
        printf("Insira a mesa do pedido:");
        gotoxy(65,20);
        pintar(15);
        fgets(mesa, sizeof(mesa), stdin);
        result = fputs(mesa, arq);
        strtok(mesa, "\n\n");
        result = fputs(csabor, arq);
        strtok(csabor, "\n\n");
        result = fputs(csabor0, arq);

            fclose(arq);
        clrscr();
FILE*arquivo1;
arquivo1 = fopen("C:\\Users\\Murilo\\Desktop\\CaixaTotalP2.txt", "a+b");
if (arquivo1 == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        dscr();
        exit(1);
    }

    result = fputs(csabor0, arquivo1);
    fprintf(arquivo1, " \n");
            fclose(arquivo1);
}

void AdicionarPedidos4P2(){
Sabor pizzarias;
        FILE*arquivo;
        char sabor[50];
        char csabor[50];
        char csabor0[13];
        char mesa[13];
        int result;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\sucosP2.txt", "rb");
        if (arquivo == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");
            return;
        }
        printf("\n\n");
        pintar(79);
        gotoxy(53,15);
        printf("Digite o sabor:");
        pintar(15);
        getchar();
        gotoxy(69,15);
        fgets(sabor, sizeof(sabor), stdin);
        strtok(sabor, "\n");
        clrscr();
        pintar(79);
        gotoxy(32,13);
        printf("Sabor                         |Valor  \n");
        pintar(15);
        while(!feof(arquivo))
        {
            if(strcmp(sabor, pizzarias.sabor) == 0){
            printf("\t\t\t\t\%-30s|R$ %-13s\n", pizzarias.sabor, pizzarias.valor);
            strcpy(csabor, pizzarias.sabor);
            strcpy(csabor0, pizzarias.valor);
        }fread(&pizzarias, sizeof(Sabor),1,arquivo);
        }
        fclose(arquivo);
        pintar(15);
        FILE*arq;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arq = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pedidosP2.txt", "a+b");
        if (arq == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");

            exit(1);
        }
        gotoxy(40,20);
        pintar(79);
        printf("Insira a mesa do pedido:");
        gotoxy(65,20);
        pintar(15);
        fgets(mesa, sizeof(mesa), stdin);
        result = fputs(mesa, arq);
        strtok(mesa, "\n\n");
        result = fputs(csabor, arq);
        strtok(csabor, "\n\n");
        result = fputs(csabor0, arq);

            fclose(arq);
        clrscr();
FILE*arquivo1;
arquivo1 = fopen("C:\\Users\\Murilo\\Desktop\\CaixaTotalP2.txt", "a+b");
if (arquivo1 == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        dscr();
        exit(1);
    }

    result = fputs(csabor0, arquivo1);
    fprintf(arquivo1, " \n");
            fclose(arquivo1);
}

void VerPedidosP2(){

FILE*arq = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pedidos.txt", "rt");
char Linha[100];
char *result;
int i;
clrscr();
Desenhar();
pintar(1);
DesenharPedidos();
if (arq == NULL) {
        gotoxy(45,10);
     printf("Problemas na abertura do arquivo\n");
}
i = 1;
while (!feof(arq)){
    result = fgets(Linha, 100, arq);
      if (result){
        pintar(79); gotoxy(45,15);
        printf("Pedido %d :  %s",i,Linha);
      i++;}
  }
  fclose(arq);
  gotoxy(65,25);
  pscr();
  pintar(15);
  clrscr();
}

//PIZZARIA 3 ############################################


void AdicionarProdutosP3(){
    char nome[30];
    Estoque novo;
    FILE*arquivo;
    Desenhar();
    pintar(15);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\produtosP3.txt", "a+b");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        //dscr();
        exit(1);
    }
        printf("\n\n");
        pintar(79);
        gotoxy(35,10);
        printf("Digite o produto que deseja adicionar:");
        pintar(15);
        getchar();
        gotoxy(74,10);
        fgets(novo.nome, sizeof(novo.nome), stdin);
        strtok(novo.nome, "\n");
        pintar(79);
        gotoxy(35,13);
        printf("Digite a quantidade a ser inserida:");
        pintar(15);
        gotoxy(71,13);
        fgets(novo.quantidade, sizeof(novo.quantidade), stdin);
        strtok(novo.quantidade, "\n");
        fwrite(&novo, sizeof(Estoque),1,arquivo);
        fclose(arquivo);
}

void VerProdutosP3(){
    Estoque pizzaria;
    FILE*arquivo;
    char sabor[50];
    Desenhar();
    pintar(4);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\produtosP3.txt", "rb");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        return;
    }
    printf("\n\n");
    gotoxy(32,9);
    printf("Produto                       |Quantidade\n");

    while(!feof(arquivo))
    {
        fread(&pizzaria, sizeof(Estoque),1,arquivo);
        printf("\t\t\t\t%-30s|%-13s\n", pizzaria.nome, pizzaria.quantidade);
    }
    fclose(arquivo);
    pintar(79);
}

void AdicionarSaborP3(){
    char sabor[30];
    Sabor novo;
    FILE*arquivo;
    Desenhar();
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pizzasalgadaP3.txt", "a+b");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        exit(1);
    }

        printf("\n\n");
        gotoxy(35,10);
        printf("Digite o sabor que deseja adicionar:");
        pintar(15);
        getchar();
        gotoxy(72,10);
        fgets(novo.sabor, sizeof(novo.sabor), stdin);
        strtok(novo.sabor, "\n");
        pintar(175);
        gotoxy(35,13);
        printf("Digite o valor:");
        pintar(15);
        gotoxy(51,13);
        fgets(novo.valor, sizeof(novo.valor), stdin);
        strtok(novo.valor, "\n");
        fwrite(&novo, sizeof(Sabor),1,arquivo);
        fclose(arquivo);
}

void VerSaborP3(){
    Sabor pizzarias;
    FILE*arquivo;
    char sabor[50];
    Desenhar();
    pintar(4);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pizzasalgadaP3.txt", "rb");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        return;
    }
    printf("\n\n");
    gotoxy(32,9);
    printf("Sabor                         |Valor\n");

    while(!feof(arquivo))
    {

        fread(&pizzarias, sizeof(Sabor),1,arquivo);

        printf("\t\t\t\t\%-30s|R$ %-13s\n", pizzarias.sabor, pizzarias.valor);
    }
    fclose(arquivo);
    pintar(79);
}

void AdicionarSabor1P3(){
    char sabor[30];
    Sabor novo1;
    FILE*arquivo;
    Desenhar();
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pizzadoceP3.txt", "a+b");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");

        exit(1);
    }
        printf("\n\n");
        pintar(79);
        gotoxy(35,10);
        printf("Digite o sabor que deseja adicionar: ");
        pintar(15);
        getchar();
        gotoxy(72,10);
        fgets(novo1.sabor, sizeof(novo1.sabor), stdin);
        strtok(novo1.sabor, "\n");
        pintar(79);
        gotoxy(35,13);
        printf("Digite o valor: ");
        pintar(15);
        gotoxy(51,13);
        fgets(novo1.valor, sizeof(novo1.valor), stdin);
        strtok(novo1.valor, "\n");
        fwrite(&novo1, sizeof(Sabor),1,arquivo);
        fclose(arquivo);
}

void VerSabor1P3(){
    Sabor pizzarias;
    FILE*arquivo;
    char sabor[50];
    Desenhar();
    pintar(4);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pizzadoceP3.txt", "rb");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        return;
    }
    printf("\n\n");
    gotoxy(32,9);
    printf("Sabor                       |Valor\n");

    while(!feof(arquivo))
    {
        fread(&pizzarias, sizeof(Sabor),1,arquivo);
        printf("\t\t\t\t%-30s|R$ %-13s\n", pizzarias.sabor, pizzarias.valor);
    }
    fclose(arquivo);
    pintar(79);
}

void AdicionarBebidasP3(){
    char sabor[30];
    Bebidas novo;
    FILE*arquivo;
    Desenhar();
    pintar(15);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\cervejasP3.txt", "a+b");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        exit(1);
    }
        printf("\n\n");
        pintar(79);
        gotoxy(35,10);
        printf("Digite o produto que deseja adicionar:");
        pintar(15);
        getchar();
        gotoxy(74,10);
        fgets(novo.marca, sizeof(novo.marca), stdin);
        strtok(novo.marca, "\n");
        pintar(79);
        gotoxy(35,13);
        printf("Insira o valor:");
        pintar(15);
        gotoxy(71,13);
        fgets(novo.valor, sizeof(novo.valor), stdin);
        strtok(novo.valor, "\n");
        fwrite(&novo, sizeof(Bebidas),1,arquivo);
        fclose(arquivo);
}

void VerBebidasP3(){
    Bebidas bebidas;
    FILE*arquivo;
    char marca[30];
    Desenhar();
    pintar(4);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\cervejasP3.txt", "rb");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        return;
    }
    printf("\n\n");
    gotoxy(32,9);
    printf("Marca                       |Valor");

    while(!feof(arquivo))
    {
        fread(&bebidas, sizeof(Bebidas),1,arquivo);
        printf("\t\t\t\t%-30s|R$ %-13s\n", bebidas.marca, bebidas.valor);
    }
    fclose(arquivo);
    pintar(79);
}

void AdicionarBebidas1P3(){
    char sabor[30];
    Bebidas novo;
    FILE*arquivo;
    Desenhar();
    pintar(15);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\refrigeranteP3.txt", "a+b");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        dscr();
        exit(1);
    }
        printf("\n\n");
        pintar(79);
        gotoxy(35,10);
        printf("Digite o produto que deseja adicionar:");
        pintar(15);
        getchar();
        gotoxy(74,10);
        fgets(novo.marca, sizeof(novo.marca), stdin);
        strtok(novo.marca, "\n");
        pintar(79);
        gotoxy(35,13);
        printf("Insira o valor:");
        pintar(15);
        gotoxy(71,13);
        fgets(novo.valor, sizeof(novo.valor), stdin);
        strtok(novo.valor, "\n");
        fwrite(&novo, sizeof(Bebidas),1,arquivo);
        fclose(arquivo);
}

void VerBebidas1P3(){
    Bebidas bebidas;
    FILE*arquivo;
    char marca[30];
    Desenhar();
    pintar(4);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\refrigeranteP3.txt", "rb");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        return;
    }
    printf("\n\n");
    gotoxy(32,9);
    printf("Marca                       |Valor");

    while(!feof(arquivo))
    {
        fread(&bebidas, sizeof(Bebidas),1,arquivo);
        printf("\t\t\t\t%-30s|R$ %-13s\n", bebidas.marca, bebidas.valor);
    }
    fclose(arquivo);
    pintar(79);
}

void AdicionarBebidas2P3(){
    char sabor[30];
    Bebidas novo;
    FILE*arquivo;
    Desenhar();
    pintar(15);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\sucosP3.txt", "a+b");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        dscr();
        exit(1);
    }
        printf("\n\n");
        pintar(79);
        gotoxy(35,10);
        printf("Digite o produto que deseja adicionar:");
        pintar(15);
        getchar();
        gotoxy(74,10);
        fgets(novo.marca, sizeof(novo.marca), stdin);
        strtok(novo.marca, "\n");
        pintar(79);
        gotoxy(35,13);
        printf("Insira o valor:");
        pintar(15);
        gotoxy(71,13);
        fgets(novo.valor, sizeof(novo.valor), stdin);
        strtok(novo.valor, "\n");
        fwrite(&novo, sizeof(Bebidas),1,arquivo);
        fclose(arquivo);
}

void VerBebidas2P3(){
    Bebidas bebidas;
    FILE*arquivo;
    char marca[30];
    Desenhar();
    pintar(4);
    arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\sucosP3.txt", "rb");
    if (arquivo == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        return;
    }
    printf("\n\n");
    gotoxy(32,9);
    printf("Marca                       |Valor");

    while(!feof(arquivo))
    {
        fread(&bebidas, sizeof(Bebidas),1,arquivo);
        printf("\t\t\t\t%-30s|R$ %-13s\n", bebidas.marca, bebidas.valor);
    }
    fclose(arquivo);
    pintar(79);
}

void VerCaixaP3(){
    FILE*arq = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\CaixaTotalP3.txt", "rt");
char Linha[100];
char *result;
float i[20];
float soma = 0;
int x;
pintar(4);
//clrscr();
if (arq == NULL) {
        gotoxy(45,10);
     printf("Problemas na abertura do arquivo\n");
}
gotoxy(50,13);
for(x=0;x<=i;x++){
while (!feof(arq)){
result = fgets(Linha, 100, arq);
        if (result) {
        i[x] = atof(Linha);

        //printf("%0.2f\n", i[x]);
        printf("\t%0.2f",i[x]);
        soma = soma + i[x];
}
}
}

        gotoxy(50,20);
        pintar(79);
    printf("%0.2f", soma);


    fclose(arq);

}

void AdicionarPedidosP3(){
Sabor pizzarias;
        FILE*arquivo;
        char sabor[50];
        char csabor[50];
        char csabor0[13];
        char mesa[13];
        int result;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pizzasalgadaP3.txt", "rb");
        if (arquivo == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");
            return;
        }
        printf("\n\n");
        pintar(79);
        gotoxy(53,15);
        printf("Digite o sabor:");
        pintar(15);
        getchar();
        gotoxy(69,15);
        fgets(sabor, sizeof(sabor), stdin);
        strtok(sabor, "\n");
        clrscr();
        pintar(79);
        gotoxy(32,13);
        printf("Sabor                         |Valor  \n");
        pintar(15);
        while(!feof(arquivo))
        {
            if(strcmp(sabor, pizzarias.sabor) == 0){
            printf("\t\t\t\t\%-30s|R$ %-13s\n", pizzarias.sabor, pizzarias.valor);
            strcpy(csabor, pizzarias.sabor);
            strcpy(csabor0, pizzarias.valor);
        }fread(&pizzarias, sizeof(Sabor),1,arquivo);
        }
        fclose(arquivo);
        pintar(15);
        FILE*arq;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arq = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pedidosP3.txt", "a+b");
        if (arq == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");

            exit(1);
        }
        gotoxy(40,20);
        pintar(79);
        printf("Insira a mesa do pedido:");
        gotoxy(65,20);
        pintar(15);
        fgets(mesa, sizeof(mesa), stdin);
        result = fputs(mesa, arq);
        strtok(mesa, "\n\n");
        result = fputs(csabor, arq);
        strtok(csabor, "\n\n");
        result = fputs(csabor0, arq);

            fclose(arq);
        clrscr();
FILE*arquivo1;
arquivo1 = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\CaixaTotalP3.txt", "a+b");
if (arquivo1 == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        dscr();
        exit(1);
    }

    result = fputs(csabor0, arquivo1);
    fprintf(arquivo1, " \n");
            fclose(arquivo1);
}

void AdicionarPedidos1P3(){
Sabor pizzarias;
        FILE*arquivo;
        char sabor[50];
        char csabor[50];
        char csabor0[13];
        char mesa[13];
        int result;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pizzadoceP3.txtt", "rb");
        if (arquivo == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");
            return;
        }
        printf("\n\n");
        pintar(79);
        gotoxy(53,15);
        printf("Digite o sabor:");
        pintar(15);
        getchar();
        gotoxy(69,15);
        fgets(sabor, sizeof(sabor), stdin);
        strtok(sabor, "\n");
        clrscr();
        pintar(79);
        gotoxy(32,13);
        printf("Sabor                         |Valor  \n");
        pintar(15);
        while(!feof(arquivo))
        {
            if(strcmp(sabor, pizzarias.sabor) == 0){
            printf("\t\t\t\t\%-30s|R$ %-13s\n", pizzarias.sabor, pizzarias.valor);
            strcpy(csabor, pizzarias.sabor);
            strcpy(csabor0, pizzarias.valor);
        }fread(&pizzarias, sizeof(Sabor),1,arquivo);
        }
        fclose(arquivo);
        pintar(15);
        FILE*arq;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arq = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pedidosP3.txt", "a+b");
        if (arq == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");

            exit(1);
        }
        gotoxy(40,20);
        pintar(79);
        printf("Insira a mesa do pedido:");
        gotoxy(65,20);
        pintar(15);
        fgets(mesa, sizeof(mesa), stdin);
        result = fputs(mesa, arq);
        strtok(mesa, "\n\n");
        result = fputs(csabor, arq);
        strtok(csabor, "\n\n");
        result = fputs(csabor0, arq);

            fclose(arq);
        clrscr();
FILE*arquivo1;
arquivo1 = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\CaixaTotalP3.txt", "a+b");
if (arquivo1 == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        dscr();
        exit(1);
    }

    result = fputs(csabor0, arquivo1);
    fprintf(arquivo1, " \n");
            fclose(arquivo1);
}

void AdicionarPedidos2P3(){
Sabor pizzarias;
        FILE*arquivo;
        char sabor[50];
        char csabor[50];
        char csabor0[13];
        char mesa[13];
        int result;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\cervejasP3.txt", "rb");
        if (arquivo == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");
            return;
        }
        printf("\n\n");
        pintar(79);
        gotoxy(53,15);
        printf("Digite o sabor:");
        pintar(15);
        getchar();
        gotoxy(69,15);
        fgets(sabor, sizeof(sabor), stdin);
        strtok(sabor, "\n");
        clrscr();
        pintar(79);
        gotoxy(32,13);
        printf("Sabor                         |Valor  \n");
        pintar(15);
        while(!feof(arquivo))
        {
            if(strcmp(sabor, pizzarias.sabor) == 0){
            printf("\t\t\t\t\%-30s|R$ %-13s\n", pizzarias.sabor, pizzarias.valor);
            strcpy(csabor, pizzarias.sabor);
            strcpy(csabor0, pizzarias.valor);
        }fread(&pizzarias, sizeof(Sabor),1,arquivo);
        }
        fclose(arquivo);
        pintar(15);
        FILE*arq;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arq = fopen("C:\\Users\\Murilo\\Desktop\\pedidosP3.txt", "a+b");
        if (arq == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");

            exit(1);
        }
        gotoxy(40,20);
        pintar(79);
        printf("Insira a mesa do pedido:");
        gotoxy(65,20);
        pintar(15);
        fgets(mesa, sizeof(mesa), stdin);
        result = fputs(mesa, arq);
        strtok(mesa, "\n\n");
        result = fputs(csabor, arq);
        strtok(csabor, "\n\n");
        result = fputs(csabor0, arq);

            fclose(arq);
        clrscr();
FILE*arquivo1;
arquivo1 = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\CaixaTotalP3.txt", "a+b");
if (arquivo1 == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        dscr();
        exit(1);
    }

    result = fputs(csabor0, arquivo1);
    fprintf(arquivo1, " \n");
            fclose(arquivo1);
}

void AdicionarPedidos3P3(){
Sabor pizzarias;
        FILE*arquivo;
        char sabor[50];
        char csabor[50];
        char csabor0[13];
        char mesa[13];
        int result;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\refrigeranteP3.txt", "rb");
        if (arquivo == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");
            return;
        }
        printf("\n\n");
        pintar(79);
        gotoxy(53,15);
        printf("Digite o sabor:");
        pintar(15);
        getchar();
        gotoxy(69,15);
        fgets(sabor, sizeof(sabor), stdin);
        strtok(sabor, "\n");
        clrscr();
        pintar(79);
        gotoxy(32,13);
        printf("Sabor                         |Valor  \n");
        pintar(15);
        while(!feof(arquivo))
        {
            if(strcmp(sabor, pizzarias.sabor) == 0){
            printf("\t\t\t\t\%-30s|R$ %-13s\n", pizzarias.sabor, pizzarias.valor);
            strcpy(csabor, pizzarias.sabor);
            strcpy(csabor0, pizzarias.valor);
        }fread(&pizzarias, sizeof(Sabor),1,arquivo);
        }
        fclose(arquivo);
        pintar(15);
        FILE*arq;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arq = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pedidosP3.txt", "a+b");
        if (arq == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");

            exit(1);
        }
        gotoxy(40,20);
        pintar(79);
        printf("Insira a mesa do pedido:");
        gotoxy(65,20);
        pintar(15);
        fgets(mesa, sizeof(mesa), stdin);
        result = fputs(mesa, arq);
        strtok(mesa, "\n\n");
        result = fputs(csabor, arq);
        strtok(csabor, "\n\n");
        result = fputs(csabor0, arq);

            fclose(arq);
        clrscr();
FILE*arquivo1;
arquivo1 = fopen("C:\\Users\\Murilo\\Desktop\\CaixaTotalP3.txt", "a+b");
if (arquivo1 == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        dscr();
        exit(1);
    }

    result = fputs(csabor0, arquivo1);
    fprintf(arquivo1, " \n");
            fclose(arquivo1);
}

void AdicionarPedidos4P3(){
Sabor pizzarias;
        FILE*arquivo;
        char sabor[50];
        char csabor[50];
        char csabor0[13];
        char mesa[13];
        int result;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arquivo = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\sucosP3.txt", "rb");
        if (arquivo == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");
            return;
        }
        printf("\n\n");
        pintar(79);
        gotoxy(53,15);
        printf("Digite o sabor:");
        pintar(15);
        getchar();
        gotoxy(69,15);
        fgets(sabor, sizeof(sabor), stdin);
        strtok(sabor, "\n");
        clrscr();
        pintar(79);
        gotoxy(32,13);
        printf("Sabor                         |Valor  \n");
        pintar(15);
        while(!feof(arquivo))
        {
            if(strcmp(sabor, pizzarias.sabor) == 0){
            printf("\t\t\t\t\%-30s|R$ %-13s\n", pizzarias.sabor, pizzarias.valor);
            strcpy(csabor, pizzarias.sabor);
            strcpy(csabor0, pizzarias.valor);
        }fread(&pizzarias, sizeof(Sabor),1,arquivo);
        }
        fclose(arquivo);
        pintar(15);
        FILE*arq;
        Desenhar();
        pintar(1);
        DesenharPedidos();
        pintar(15);
        arq = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pedidosP3.txt", "a+b");
        if (arq == NULL)
        {
            gotoxy(45,10);
            printf("Erro ao abrir arquivo\n");

            exit(1);
        }
        gotoxy(40,20);
        pintar(79);
        printf("Insira a mesa do pedido:");
        gotoxy(65,20);
        pintar(15);
        fgets(mesa, sizeof(mesa), stdin);
        result = fputs(mesa, arq);
        strtok(mesa, "\n\n");
        result = fputs(csabor, arq);
        strtok(csabor, "\n\n");
        result = fputs(csabor0, arq);

            fclose(arq);
        clrscr();
FILE*arquivo1;
arquivo1 = fopen("C:\\Users\\Murilo\\Desktop\\CaixaTotalP3.txt", "a+b");
if (arquivo1 == NULL)
    {
        gotoxy(45,10);
        printf("Erro ao abrir arquivo\n");
        dscr();
        exit(1);
    }

    result = fputs(csabor0, arquivo1);
    fprintf(arquivo1, " \n");
            fclose(arquivo1);
}

void VerPedidosP3(){

FILE*arq = fopen("C:\\Users\\kelvi\\OneDrive\\햞ea de Trabalho\\PIM REAL\\pedidos.txt", "rt");
char Linha[100];
char *result;
int i;
clrscr();
Desenhar();
pintar(1);
DesenharPedidos();
if (arq == NULL) {
        gotoxy(45,10);
     printf("Problemas na abertura do arquivo\n");
}
i = 1;
while (!feof(arq)){
    result = fgets(Linha, 100, arq);
      if (result){
        pintar(79); gotoxy(45,15);
        printf("Pedido %d :  %s",i,Linha);
      i++;}
  }
  fclose(arq);
  gotoxy(65,25);
  pscr();
  pintar(15);
  clrscr();
}

