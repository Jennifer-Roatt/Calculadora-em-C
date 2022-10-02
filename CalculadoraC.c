// MEU LINK DO GITHUB É https://github.com/Jennifer-Roatt

#include <math.h> // Bliblioteca de matemática
#include <stdio.h>

int main() {    

  float a = 0, b = 0, resultado = 0;  // a é o primeiro número e b é o segundo numero digitado para entrada de dados.
  int operacao = 0; 

  printf("Meu nome é Jennifer Roatt Moreira\nSou aluna do curso de Análise e "
         "Desenvolvimento de Sistemas da Universidade La "
         "Salle\nMatrícula:202213973\n\n");
  printf("Digite a opção desejada: \n 1 - adição\n 2 - subtração\n 3 - "
         "multiplicação \n 4 - divisão\n 5 - raiz quadrada\n 6 - pontenciação");

  scanf("%i", &operacao); // entrada de dados da opcao digitada no menu 
  printf("Sua opção digitada foi %i\n",operacao);

  if(!(operacao >= 1 && operacao <= 6)){
    printf("\n Opção inválida");
  }
  else{
    printf("Agora digite o primeiro número para realizar o calculo:");
    scanf("%f", &a); // primeiro número 
    printf("Seu primeiro número digitado foi: %f \n", a);
    
  if(operacao != 5) {  // para poder usar a raiz tive que criar um if, pq como na raiz quadrada precisa só de um número para realizar o calculo. 
    printf("Agora digite o segundo número para realizar o calculo:");
    scanf("%f", &b);
    printf("Seu segundo número digitado foi: %f \n", b); // qualquer entrada diferente da opcao 5 cai aqui
      }
      
    switch (operacao) {   // usei a estrutura swith pq já tinha familiaridade, pois tudo fica mais organizado.
    case 1:
      resultado = a + b;
      printf("O resultado da adição de %f e %f é: %f", a, b, resultado); // a e b = resultado do calcuclo 
      break;
    case 2:
      resultado = a - b;
       printf("O resultado da subtração de %f e %f é: %f", a, b, resultado);
      break;
    case 3:
      resultado = a * b;
       printf("O resultado da multiplicação de %f e %f é: %f", a, b, resultado);
      break;
    case 4:
       if(b == 0){
         printf("Não é possível dividir por zero.");
       }
      else{
        resultado = a / b;
        printf("O resultado da divisão de %f e %f é: %f", a, b, resultado);
      }  
      break;
      case 5: 
        resultado = sqrt(a); // tive que pesquisar como era a raiz quadrada, pois não sabia como deveria ser feito.
        printf("O resultado da raiz quadrada de %f  é %f:",a, resultado);
      break;
      case 6:
      resultado = pow (a,b); // tive que pesquisar como era a potencia, pois não sabia como deveria ser feito.
        printf("O resultado da pontencia de %f e %f é: %f", a, b, resultado);
      break;
    }
  }  
 
  return 0;
}
