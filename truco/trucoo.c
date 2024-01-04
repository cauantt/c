#include <stdio.h>

#include <stdlib.h>

int main(int argc, char const *argv[])
{ 
  int Dama = 0, Valete = 1, Rei = 2, Ais = 3, n2 = 4, n3 = 5, ouro = 6, espad = 7 , copas = 8, zap = 9;
  int carta1,carta2,carta3, card1, card2, card3,p1=0,p2=0;

    int i,n,j;
    char nome1 [10], nome2 [10], nome3 [3];
     srand(time(NULL)); // Inicializa a semente do gerador de números aleatórios
  while (p2 < 12 || p1 < 12){
  printf("Cartas do primeiro jogador:\n\n");// sorteio das cartas do primeiro jogador
   card1 = rand() % 10;
   switch (card1)
   {
   case 1:
   printf("voce tirou uma dama\n\n");
   nome1 [0] = 'd';
   nome1 [1] = 'a';
   nome1 [2] = 'm';
   nome1 [3] = 'a';
   nome1 [4] = '\0' ; 
   break;
     case 2:
   printf("voce tirou um valete\n\n");
  nome1 [0] = 'v';
   nome1 [1] = 'a';
   nome1 [2] = 'l';
   nome1 [3] = 'e';
   nome1 [4] = 't';
   nome1 [5] = 'e';
   nome1 [6] = '\0';
    break;
     case 3:
   printf("voce tirou um rei\n\n");
   nome1 [0] = 'r';
   nome1 [1] = 'e';
   nome1 [2] = 'i';
   nome1 [3] = '\0';
    break;
      case 4:
   printf("voce tirou um ais\n\n");
    nome1 [0] = 'a';
   nome1 [1] = 'i';
   nome1 [2] = 's';
   nome1 [3] = '\0';
    break;
      case 5:
   printf("voce tirou um dois\n\n");
   nome1 [0] = 'd';
   nome1 [1] = 'o';
   nome1 [2] = 'i';
   nome1 [3] = 's';
   nome1 [4] = '\0' ;
    break;
      case 6:
   printf("voce tirou um tres\n\n");
    nome1 [0] = 't';
   nome1 [1] = 'r';
   nome1 [2] = 'e';
   nome1 [3] = 's';
   nome1 [4] = '\0' ;
    break;
   case 7:
       printf("voce tirou um sete de ouro\n\n");
       nome1 [0] = 'o';
   nome1 [1] = 'u';
   nome1 [2] = 'r';
   nome1 [3] = 'o';
   nome1 [4] = '\0' ;
       break;
  case 8:
       printf("voce tirou um espadilha\n\n");
       nome1 [0] = 'e';
   nome1 [1] = 's';
   nome1 [2] = 'p';
   nome1 [3] = 'a';
   nome1 [4] = 'd';
   nome1 [5] = 'i';
   nome1 [6] = 'l';
   nome1 [7] = 'h';
    nome1 [8] = 'a';
   nome1 [9] = '\0';
       break;
  case 9:
       printf("voce tirou um sete de copas\n\n");
        nome1 [0] = 'c';
   nome1 [1] = 'o';
   nome1 [2] = 'p';
   nome1 [3] = 'a';
   nome1 [4] = 's';
   nome1 [5] = '\0';
       break;
  case 10:
       printf("voce tirou um zap\n\n");
       nome1 [0] = 'z';
   nome1 [1] = 'a';
   nome1 [2] = 'p';
   nome1 [3] = '\0';
       break;
   }

     card2 = rand() % 10;
     switch (card2)
   {
   case 1:
   printf("voce tirou uma dama\n\n");
   nome2 [0] = 'd';
   nome2 [1] = 'a';
   nome2 [2] = 'm';
   nome2 [3] = 'a';
   nome2 [4] = '\0'   ;
    break;
     case 2:
   printf("voce tirou um valete\n\n");
    nome2 [0] = 'v';
   nome2 [1] = 'a';
   nome2 [2] = 'l';
   nome2 [3] = 'e';
   nome2 [4] = 't';
   nome2 [5] = 'e';
   nome2 [6] = '\0';
    break;
     case 3:
   printf("voce tirou um rei\n\n");
   nome2 [0] = 'r';
   nome2 [1] = 'e';
   nome2 [2] = 'i';
   nome2 [3] = '\0';
    break;
      case 4:
   printf("voce tirou um ais\n\n");
   nome2 [0] = 'a';
   nome2 [1] = 'i';
   nome2 [2] = 's';
   nome2 [3] = '\0';
    break;
      case 5:
   printf("voce tirou um dois\n\n");
    nome2 [0] = 'd';
   nome2 [1] = 'o';
   nome2 [2] = 'i';
   nome2 [3] = 's';
   nome2 [4] = '\0';
    break;
      case 6:
   printf("voce tirou um tres\n\n");
   nome2 [0] = 't';
   nome2 [1] = 'r';
   nome2 [2] = 'e';
   nome2 [3] = 's';
   nome2 [4] = '\0' ;
    break;
   case 7:
       printf("voce tirou um sete de ouro\n\n");
        nome2 [0] = 'o';
   nome2 [1] = 'u';
   nome2 [2] = 'r';
   nome2 [3] = 'o';
   nome2 [4] = '\0' ;
       break;
  case 8:
       printf("voce tirou um espadilha\n\n");
       nome2 [0] = 'e';
   nome2 [1] = 's';
   nome2 [2] = 'p';
   nome2 [3] = 'a';
   nome2 [4] = 'd';
   nome2 [5] = 'i';
   nome2 [6] = 'l';
   nome2 [7] = 'h';
    nome2 [8] = 'a';
   nome2 [9] = '\0';
       break;
  case 9:
       printf("voce tirou um sete de copas\n\n");
        nome2 [0] = 'c';
   nome2 [1] = 'o';
   nome2 [2] = 'p';
   nome2 [3] = 'a';
   nome2 [4] = 's';
   nome2 [5] = '\0';
       break;
  case 10:
       printf("voce tirou um zap\n\n");
       nome2 [0] = 'z';
   nome2 [1] = 'a';
   nome2 [2] = 'p';
   nome2 [3] = '\0';
       break;
   }
   
     card3 = rand() % 10;
     switch (card3)
   {
   case 1:
   printf("voce tirou uma dama\n\n");
   nome3 [0] = 'd';
   nome3 [1] = 'a';
   nome3 [2] = 'm';
   nome3 [3] = 'a';
   nome3 [4] = '\0' 
    -break;
     case 2:
   printf("voce tirou um valete\n\n");
    nome3 [0] = 'v';
   nome3 [1] = 'a';
   nome3 [2] = 'l';
   nome3 [3] = 'e';
   nome3 [4] = 't';
   nome3 [5] = 'e';
   nome3 [6] = '\0';
    break;
     case 3:
   printf("voce tirou um rei\n\n");
   nome3 [0] = 'r';
   nome3 [1] = 'e';
   nome3 [2] = 'i';
   nome3 [3] = '\0';
    break;
      case 4:
   printf("voce tirou um ais\n\n");
   nome3 [0] = 'a';
   nome3 [1] = 'i';
   nome3 [2] = 's';
   nome3 [3] = '\0';
    break;
      case 5:w
   printf("voce tirou um dois\n\n");
    nome3 [0] = 'd';
   nome3 [1] = 'o';
   nome3 [2] = 'i';
   nome3 [3] = 's';
   nome3 [4] = '\0' ;
    break;
      case 6:
   printf("voce tirou um tres\n\n");
   nome3 [0] = 't';
   nome3 [1] = 'r';
   nome3 [2] = 'e';
   nome3 [3] = 's';
   nome3 [4] = '\0' ;
    break;
   case 7:
       printf("voce tirou um sete de ouro\n\n");
     nome3 [0] = 'o';
   nome3 [1] = 'u';
   nome3 [2] = 'r';
   nome3 [3] = 'o';
   nome3 [4] = '\0' ;
       break;
  case 8:
       printf("voce tirou um espadilha\n\n");
              nome3 [0] = 'e';
   nome3 [1] = 's';
   nome3 [2] = 'p';
   nome3 [3] = 'a';
   nome3 [4] = 'd';
   nome3 [5] = 'i';
   nome3 [6] = 'l';
   nome3 [7] = 'h';
    nome3 [8] = 'a';
   nome3 [9] = '\0';
       break;
  case 9:
       printf("voce tirou um sete de copas\n\n");
        nome3 [0] = 'c';
   nome3 [1] = 'o';
   nome3 [2] = 'p';
   nome3 [3] = 'a';
   nome3 [4] = 's';
   nome3 [5] = '\0';
       break;
  case 10:
       printf("voce tirou um zap\n\n");
       nome3 [0] = 'z';
   nome3 [1] = 'a';
   nome3 [2] = 'p';
   nome3 [3] = '\0';
       break;
   }
 
   printf("Cartas do segundo jogador:\n\n"); // sorteio das cartas do segundo jogador
    
    carta1 = rand() % 10;
    switch (carta1)
   {
   case 1:
   printf("voce tirou uma dama\n\n");
    break;
     case 2:
   printf("voce tirou um valete\n\n");
    break;
     case 3:
   printf("voce tirou um rei\n\n");
    break;
      case 4:
   printf("voce tirou um ais\n\n");
    break;
      case 5:
   printf("voce tirou um dois\n\n");
    break;
      case 6:
   printf("voce tirou um tres\n\n");
    break;
   case 7:
       printf("voce tirou um sete de ouro\n\n");
       break;
  case 8:
       printf("voce tirou um espadilha\n\n");
       break;
  case 9:
       printf("voce tirou um sete de copas\n\n");
       break;
  case 10:
       printf("voce tirou um zap\n\n");
       break;
   }
     carta2 = rand() % 10;
     switch (carta2)
   {
   case 1:
   printf("voce tirou uma dama\n\n");
    break;
     case 2:
   printf("voce tirou um valete\n\n");
    break;
     case 3:
   printf("voce tirou um rei\n\n");
    break;
      case 4:
   printf("voce tirou um ais\n\n");
    break;
      case 5:
   printf("voce tirou um dois\n\n");
    break;
      case 6:
   printf("voce tirou um tres\n\n");
    break;
   case 7:
       printf("voce tirou um sete de ouro\n\n");
       break;
  case 8:
       printf("voce tirou um espadilha\n\n");
       break;
  case 9:
       printf("voce tirou um sete de copas\n\n");
       break;
  case 10:
       printf("voce tirou um zap\n\n");
       break;
   }

     carta3 = rand() % 10;
     switch (carta3)
   {
   case 1:
   printf("voce tirou uma dama\n\n");

    break;
     case 2:
   printf("voce tirou um valete\n\n");
    break;
     case 3:
   printf("voce tirou um rei\n\n");
    break;
      case 4:
   printf("voce tirou um ais\n\n");
    break;
      case 5:
   printf("voce tirou um dois\n\n");
    break;
      case 6:
   printf("voce tirou um tres\n\n");
    break;
   case 7:
       printf("voce tirou um sete de ouro\n\n");
       break;
  case 8:
       printf("voce tirou um espadilha\n\n");
       break;
  case 9:
       printf("voce tirou um sete de copas\n\n");
       break;
  case 10:
       printf("voce tirou um zap\n\n");
       break;
   }
 
    printf("vez do jogador 1\n\n");
    printf("escolha sua jogada\n\n");
    printf("jogar %s\n\njogar carta %d = 2\n\n jogar carta %d = 3\n\n", nome1, card2, card3);
  
    scanf("%d",&n);

    if (n==1) { printf("voce jogou a carta %d\n\n", card1); 
    n = card1;}
    if (n==2) { printf("voce jogou a carta %d\n\n", card2);
    n = card2;}
    if (n==3) { printf("voce jogou a carta %d\n\n", card3);
    n = card3;}

     printf("vez do jogador 2\n");
    printf("escolha sua jogada\n\n");
    printf("jogar carta %d = 1\n\njogar carta %d = 2\n\njogar carta %d = 3\n\n", carta1, carta2, carta3);
 
    scanf("%d",&j);

    if (j==1) { printf("voce jogou a carta %d\n\n", carta1);
    j=carta1;}
    if (j==2) { printf("voce jogou a carta %d\n\n", carta2);
    j=carta2;}
    if (j==3) { printf("voce jogou a carta %d\n\n", carta3);
    j=carta3;} 

    if ( j > n) { printf("jogador 2 ganhou o primeiro turno\n\n");
    p2++;}
    else {printf("jogador 1 ganhou o primeiro turno\n\n");
    p1++;}

    printf("reembaralhando as cartas.......\n\n");

  }



 
  

   
   
  
  return 0;
}     


