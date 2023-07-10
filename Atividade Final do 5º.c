
#define GUSTAVO "Gustavo da Silva Sousa "
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
#include <ctype.h>

int main() {
	 setlocale(LC_ALL,"Portuguese"); //obs: senha muito estanha e com gambiarra
		/*char *senha = "parauapebas";
		int io;
     char s[11];
      k:
     printf("Tecle <Enter> para digitar a senha:");
     gets(s);

  fflush(stdin);
     for(io=0;io<11;io++)
	 {
    	s[io] = getch();
    	putchar('*');
}
     if (!(strcmp(s, senha))){
     printf("Senha correta.\n");
     goto inicio; system("cls");
     }
     else
     printf("Senha incorreta \ntente novamente: \n");
     goto k;system("cls");
	*/

     system("cls"); system("color f0");
     #define pi 3.14159265359
     int idade; //case 3:
     int horas, minutos; //case 4;
     int dia, mes, ano; //case 5;
     char n1[20];  char s1[50]; char n2[20]; char s2[50];//case 6
     int idadee; float massa; // case 7
     int a, impares=0, soma=0;// case 8
     int  num, num1, num2, num3, ssoma, menu;//case 9
     float nota1, nota2, nota3, nota4, media;//case 10
     int age, mmedia, total=0; //case 11
     int i, tab, opc, multi, adicao, subtr; float divisao; //case 12
     int opcoes; float c, f; //case 13
     int ne,quantnum, opcs;//case 14
     int opccao, nn, fatorial; //case 15
     char p,n; float l1, l2, l3; //case 16
     int opcao; //switch
     int j; // case 17



      inicio:
	  system ("color fd");
      printf("\n\t\t\t\tSelecione uma das opções\n");
      printf("\t\t\t\t1: para a aplicação sobre sobre O VALOR DE PI:\n");
      printf("\t\t\t\t2: para a aplicação sobre O USUÁRIO INSERINDO NÚMERO ALEATÓRIO:\n");
      printf("\t\t\t\t3: para a aplicação sobre A IDADE DO USUÁRIO:\n");
      printf("\t\t\t\t4: para a aplicação sobre AS HORAS E MINUTOS:\n");
      printf("\t\t\t\t5: para a aplicação sobre DATA CONVENSIONAL:\n");
      printf("\t\t\t\t6: para a aplicação sobre  OS NOMES TROCADOS:\n");
      printf("\t\t\t\t7: para a aplicação sobre A IDADE E MASSA:\n");
      printf("\t\t\t\t8: para a aplicação sobre OS NÚMEROS ÍMPARES MÚLTIPLOS DE 3:\n");
      printf("\t\t\t\t9: para a aplicação sobre OS NÚMEROS DISTINTOS:\n");
      printf("\t\t\t\t10: para a aplicação sobre O APROVADO/REPROVADO:\n");
      printf("\t\t\t\t11: para a aplicação sobre A MÉDIA DAS IDADES:\n");
	  printf("\t\t\t\t12: para a aplicação sobre A TABUADA:\n");
	  printf("\t\t\t\t13: para a aplicação sobre A TEMPERATURA:\n");
	  printf("\t\t\t\t14: para a aplicação sobre O INTERVALO [10 a 20]:\n");
	  printf("\t\t\t\t15: para a aplicação sobre FATORIAL:\n");
	  printf("\t\t\t\t16: para a aplicação sobre  OS TIPOS DE TRIÂNGULO:\n");
	  printf("\t\t\t\t17: para a aplicação sobre OS NÚMEORS ÍMPARES OU PARES:\n");
	  printf("\t\t\t\t18: para sair.\n");
	  scanf("%d", &opcao);
      system ("cls");
      switch(opcao)//comando pra escolher qual as opções acima
      {
      case 1:
      { system ("color fd");

      printf("\t\t\t\t\n1ª:O  valor de PI equivale a :%.4f\n\n", pi);// O resultado é == 3.1416, não sei se ta certo mas acho que o DEV arredondou o valor de PI.
      getch();
      }system("pause");system("cls");goto inicio;

      case 2:
      { system ("color f1");
      printf("\n\t\t\t\t2ª:Insira um numero aleatório:");
      float  x;// coloquei a variável aqui por que nao tava funcinando em cima desse printf
      scanf("%f",&x);system ("color cf");
      printf("\n\t\t\t\tResultado:%.0f\n", x);getch();
      }system("cls");goto inicio;

      case 3:
      {	system ("color f1");
	  printf("\n3ª:Insira a sua idade:");
	  scanf("%d",&idade);
	  printf("\nA sua idade é:%d anos,... uau Ta ficando velho hein\n", idade);getch();
      } system("cls");goto inicio;

      case 4:
      {	system ("color f4");
      b:
	  printf("\n4ª:Que horas são nesse exato momento?\n");
	  scanf("%d %d", &horas, &minutos);
	  if(horas >=24 || minutos >=60){
	  	printf("Hora inválida:");goto b;
	  }
      printf("\nAgora são exatamente %d:%d\n",horas, minutos);getch();
      } goto inicio;system("cls");

	  case 5:
      {	system ("color fc");
      printf("\n5ª:Qual o dia do seu nascimento?");
      scanf("%d", &dia );
	  printf("\nQual o mês do seu nascimento?");
	  scanf("%d", &mes );
	  printf("\nQual o ano do seu nascimento?");
	  scanf("%d", &ano);
	  printf("\nUau você nasceu em:%d/%d/%d\n",dia,mes,ano);getch();
      }system("cls");goto inicio;

      case 6:
      {	system ("color f9");
	  printf("\n6ª:Digite um nome:");
      scanf("%s", &n1);
      printf("\nDigite um sobrenome agora:");
      scanf("%s", &s1);

      //segundo nome e sobrenome//
      printf("\nDigite um nome:");
      scanf("%s", &n2);
      printf("\nDigite um sobrenome agora:");
      scanf("%s", &s2);

      printf("\nBem vindo %s %s", n1, s2 );
      printf("\nBem vindo %s %s\n", n2 ,s1 );getch();
      }system("cls");goto inicio;

	  case 7:
	  {	system ("color f6");
      printf("\n7ª:Insira a sua idade:");
      scanf("%d", &idadee);
      printf("\nInsira a sua massa em Kg:");
      scanf("%f",&massa);
      printf("\nNossa voce tem %d anos de idade e sua massa  é %.2fKg", idadee, massa);	printf("\n");
      system("pause");
      }system("cls");goto inicio;

      case 8:
      { system ("color f2");
      int a, impares=0, soma=0;
	  for (a=1;a<=500;a++){
	  if(a%2!=0 && a%3==0)
	  {impares++; soma++;
 	  printf("%d, ", a);
	  } soma+=a;
      }
	  printf("\nA quantidade de numeros Ímpares múltiplos de 3 é: %d numeros\n",impares);
      printf("\nA soma dos números ímpares múltiplos de 3 é:%d\n",soma);
	  system("pause");
      }system("cls");goto inicio;

      case 9:
  	  { system ("color fc");
      comeco:
	  printf("\nDigite 1 para executar a aplicação sobre os algarismos ou 2 para ir ao menu:\n");
      scanf("%d", &menu);
      switch(menu){
	  case 1:{
      printf("Digite um número:");
      scanf("%d", &num);
      printf("Digite um número:");
      scanf("%d", &num1);
      printf("Digite um número:");
      scanf("%d", &num2);
      printf("Digite um número:");
      scanf("%d", &num3);
      if (num>num1&&num>num2&&num>num3){
	  ssoma = num1 + num2 + num3;
	  printf("%d é o resultado da soma dos três menores algarismos.",ssoma); printf("\n");system("pause");system("cls");goto comeco;
      }
      else if(num1>num&&num1>num2&&num1>num3){
	  ssoma = num + num2 + num3;
	  printf("%d é o resultado da soma dos três menores algarismos.",ssoma);printf("\n");system("pause");system("cls");goto comeco;
      }
      else if(num2>num&&num2>num1&&num2>num3){
	  ssoma = num + num1 + num3;
	  printf("%d é o resultado da soma dos três menores algarismos.",ssoma);printf("\n");system("pause");system("cls");
      goto comeco;
      }
      else if(num3>num&&num3>num1&&num3>num2){
	  ssoma = num + num1 + num2;
	  printf("%d é o resultado da soma dos três menores algarismos.",ssoma);printf("\n");system("pause");system("cls");goto comeco;
      }
	  case 2:{system ("cls");
	  goto inicio;
      } default : printf("opcao invalida"); goto comeco;
      }
      }
      }
      case 10:{
	  system ("color 40");
	  printf("Bem vindo à Escola da Vida\n");
      nota1:
	  printf("Qual a nota do primeiro bimestre:");
	  scanf("%f", &nota1);
	  if(nota1>10 || nota1<0){
	  printf("\nDigite um número entre 0 e 10\n");
	  goto nota1;
	  }
	  nota2:
	  printf("\nQual a nota do segundo bimestre:");
	  scanf("%f", &nota2);
	  if(nota2>10 || nota2<0){
      printf("\nDigite um número entre 0 e 10\n");
	  goto nota2;
      }
	  nota3:
	  printf("\nQual a nota do terceiro bimestre:");
	  scanf("%f", &nota3);
	  if(nota3>10 || nota3<0){
      printf("\nDigite um número entre 0 e 10\n");
      goto nota3;
      }
	  nota4:
	  printf("\nQual a nota do quarto bimestre:");
	  scanf("%f", &nota4);
      if(nota4>10 || nota4<0){
	  printf("\nDigite um número entre 0 e 10\n");
	  goto nota4;
      }
	  media = (nota1 + nota2 + nota3 + nota4)/4;
	  printf("\nA média da nota é:%.2f",media);
      if ( media >= 7){
      printf("\nVocê está Aprovado\n");
	  system("pause"); system("cls"); goto inicio;
      }
      else  if (media < 4)
	  {
	  printf("\nVocê está Reprovado\n");
	  system("pause");system("cls");goto inicio;
	  return 0;
      }
      else {
      printf("\nNem aprovado nem reprovado... Vai ficar de recuperação:");
      getch();
      system("cls");
      }
      printf("\nBem vindo à Recuperação da Escola da Vida");
      printf("\nQual a primeira nota de recuperação:");
	  scanf("%f", &nota1);
	  printf("\nQual a segunda nota de recuperação:");
	  scanf("%f", &nota2);
	  printf("\nQual a terceira nota de recuperação:");
	  scanf("%f", &nota3);
	  printf("\nQual a quarta nota de recuperação:");
	  scanf("%f", &nota4);
	media = (nota1 + nota2 + nota3 + nota4)/4;
	printf("\nA média da nota é:%.2f",media);

	if ( media >= 6){
 	printf("\nAprovado\n");
	system("pause");system("cls");goto inicio;
	}
	else
	{
	printf("\nReprovado\n");
	system("pause");system("cls");goto inicio;
    }

}
case 11:{
	{ int age, mmedia, total=0; //case 11
	system ("color 4f");
{
for(age = 1; age <=5; age++){
	printf("Digite a idade:");
	scanf("%i", &age);
	total += age;}
}
mmedia = total/5;
printf("A média é %d de idade", mmedia );
}
goto inicio;
}


 case 12:
 	{system ("color df");



do {
printf("Digite um número entre 1 e 10:");
scanf("%d", &i);
printf("Multiplicação:\n");
for (tab = 0 ;tab <= 10; tab++)	{
multi = i * tab;
printf("%d x %d = %d\n",i,tab,multi);
}printf("Adição:\n");
for (tab = 0 ;tab <= 10; tab++)	{
adicao = i + tab;
printf("%d + %d = %d\n",i,tab,adicao);
}printf("Subtração:\n");
for (tab = 0 ;tab <= 10; tab++)	{
subtr = i - tab;
printf("%d - %d = %d\n",i,tab,subtr);
}
printf("Deseja continuar respondendo? digite 1 para sim ou 2 para não:");
scanf("%d", &opc);system("pause"); system("cls");
}while (opc != 2);
goto inicio;
}
case 13:

	{system ("color f5");

	int opcoes;
    a:
    printf("\nDigite 1 Celsius para Fahrenheit:\n");
    printf("\nDigite 2 Fahrenheit para Celsius:\n");
    printf("\nDigite 3 para ir ao menu:\n");
    scanf("%d",&opcoes);

 	switch (opcoes){

 	case 1:
	{

	printf("\nDigite a temperatura em graus Celsius:");
	scanf ("%f", &c);
    f = (c * 1.8 )+ 32;
	 printf("\nA temperatura  é:%.0f graus Fahrenheit\n",  f);system("pause");  system ("cls");
	 goto a;

    case 2:
 	 printf("\ndigite a temperatura em graus  Fahrenheit :");
	 scanf ("%f", &f);
	 c =  (f - 32) / 1.8;
	 printf("\nA temperatura é:%.0f graus Celsius\n",c);  system("pause");  system ("cls");
	 goto a;

    case 3: system("cls"); goto inicio;

}
}

}


   case 14:{system ("color f2");

	printf("\nDigite 1 para executar ou 2 ir ao menu:\n");
	scanf("%d", &opcs);
	switch(opcs){
case 1:
for(quantnum=1;quantnum<=10;quantnum++){
	printf("Digite um número:");
	scanf("%d", &ne);
	if ( ne>=10 && ne<=20 ){
	  	printf("%d Pertence ao intervalo [10 a 20].\n", ne);
}  else{ printf("%d Não pertence ao intervalo[10 a 20].\n", ne);
}
} system("pause");  system ("cls");    goto inicio;

case 2: goto inicio;
}
}
case 15:{system ("color f2");
	setlocale(LC_ALL,"Portuguese");
    start:
	printf("                      FATORIAL\n");

	printf("Aperte 1 para executar a aplicação ou 2 para ir ao menu:");
	scanf("%d", &opccao);
	switch(opccao){
	case 1:

	setlocale(LC_ALL,"Portuguese");

    printf("Digite um número inteiro:");
    scanf("%d", &nn);
    for(fatorial = 1; nn>=1;nn = nn-1)
	fatorial *= nn;
	printf("O numero fatorado e:%d\n", fatorial); system("pause"); system("cls");
    goto start;
    case 2:
     system("cls");goto inicio;

}

return 0;
}
 // case 16:



case 16:
	{
do{
point:
printf("Digite os lados do Triângulo:");
scanf("%f", &l1);
printf("Digite os lados do Triângulo:");
scanf("%f", &l2);
printf("Digite os lados do Triângulo:");
scanf("%f", &l3);
if(l1>l2+l3 || l2>l1+l3 || l3>l1+l2){
	printf("Nao forma um triângulo\n");system("pause");  system ("cls");
}
else if (l1==l2 && l1==l3){
	printf("Triangulo Equilátero\n");system("pause");  system ("cls");
}else if(l1 ==l2 && l1 != l3 || l2 == l1 && l2 != l3 || l3 == l1 && l3 != l2){
	printf("Triangulo Isóceles\n");system("pause");  system ("cls");
}
else if(l1 != l2 && l1 != l3){
printf("Triângulo Escaleno\n");system("pause");  system ("cls");
}
printf("\nDeseja continuar na aplicação? Digite 's' para sim ou 'n' para não:");
scanf("%s", &p); system("pause");  system ("cls");
}while(p != 'n');  system ("cls"); goto inicio;
}

 case 17:{
 	{

	on:
	printf("digite um numero:");
	scanf("%d", &j);
    printf("\nO numero %d e:",j);
    if (j%2 == 0)
	{printf("\nPar\n");
	}
	else {
		printf("\nImpar\n");
	}


	 int opsao;
	 meiiio:
	 printf("\nVoce quer continuar respondendo?\n ");
	 printf("\nDigite 1 para continuar:");
	 printf("\nDigite 2 para ir ao menu:");
	 scanf("%d", &opsao);  system("cls");

	 switch(opsao){

	 case 1:
	 goto on;

	 case 2:
	 goto inicio;
	 default:
	 printf("\nNumero invalido");
	 goto meiiio;
     }
     }
     }






case 18:
printf("Pressione <QUALQUER TECLA> para sair");
getch();
return(0);


  default:
  printf("\nNúmero invalido\n\n");
  goto inicio;
}
return 0;
}



