
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
      printf("\n\t\t\t\tSelecione uma das op��es\n");
      printf("\t\t\t\t1: para a aplica��o sobre sobre O VALOR DE PI:\n");
      printf("\t\t\t\t2: para a aplica��o sobre O USU�RIO INSERINDO N�MERO ALEAT�RIO:\n");
      printf("\t\t\t\t3: para a aplica��o sobre A IDADE DO USU�RIO:\n");
      printf("\t\t\t\t4: para a aplica��o sobre AS HORAS E MINUTOS:\n");
      printf("\t\t\t\t5: para a aplica��o sobre DATA CONVENSIONAL:\n");
      printf("\t\t\t\t6: para a aplica��o sobre  OS NOMES TROCADOS:\n");
      printf("\t\t\t\t7: para a aplica��o sobre A IDADE E MASSA:\n");
      printf("\t\t\t\t8: para a aplica��o sobre OS N�MEROS �MPARES M�LTIPLOS DE 3:\n");
      printf("\t\t\t\t9: para a aplica��o sobre OS N�MEROS DISTINTOS:\n");
      printf("\t\t\t\t10: para a aplica��o sobre O APROVADO/REPROVADO:\n");
      printf("\t\t\t\t11: para a aplica��o sobre A M�DIA DAS IDADES:\n");
	  printf("\t\t\t\t12: para a aplica��o sobre A TABUADA:\n");
	  printf("\t\t\t\t13: para a aplica��o sobre A TEMPERATURA:\n");
	  printf("\t\t\t\t14: para a aplica��o sobre O INTERVALO [10 a 20]:\n");
	  printf("\t\t\t\t15: para a aplica��o sobre FATORIAL:\n");
	  printf("\t\t\t\t16: para a aplica��o sobre  OS TIPOS DE TRI�NGULO:\n");
	  printf("\t\t\t\t17: para a aplica��o sobre OS N�MEORS �MPARES OU PARES:\n");
	  printf("\t\t\t\t18: para sair.\n");
	  scanf("%d", &opcao);
      system ("cls");
      switch(opcao)//comando pra escolher qual as op��es acima
      {
      case 1:
      { system ("color fd");

      printf("\t\t\t\t\n1�:O  valor de PI equivale a :%.4f\n\n", pi);// O resultado � == 3.1416, n�o sei se ta certo mas acho que o DEV arredondou o valor de PI.
      getch();
      }system("pause");system("cls");goto inicio;

      case 2:
      { system ("color f1");
      printf("\n\t\t\t\t2�:Insira um numero aleat�rio:");
      float  x;// coloquei a vari�vel aqui por que nao tava funcinando em cima desse printf
      scanf("%f",&x);system ("color cf");
      printf("\n\t\t\t\tResultado:%.0f\n", x);getch();
      }system("cls");goto inicio;

      case 3:
      {	system ("color f1");
	  printf("\n3�:Insira a sua idade:");
	  scanf("%d",&idade);
	  printf("\nA sua idade �:%d anos,... uau Ta ficando velho hein\n", idade);getch();
      } system("cls");goto inicio;

      case 4:
      {	system ("color f4");
      b:
	  printf("\n4�:Que horas s�o nesse exato momento?\n");
	  scanf("%d %d", &horas, &minutos);
	  if(horas >=24 || minutos >=60){
	  	printf("Hora inv�lida:");goto b;
	  }
      printf("\nAgora s�o exatamente %d:%d\n",horas, minutos);getch();
      } goto inicio;system("cls");

	  case 5:
      {	system ("color fc");
      printf("\n5�:Qual o dia do seu nascimento?");
      scanf("%d", &dia );
	  printf("\nQual o m�s do seu nascimento?");
	  scanf("%d", &mes );
	  printf("\nQual o ano do seu nascimento?");
	  scanf("%d", &ano);
	  printf("\nUau voc� nasceu em:%d/%d/%d\n",dia,mes,ano);getch();
      }system("cls");goto inicio;

      case 6:
      {	system ("color f9");
	  printf("\n6�:Digite um nome:");
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
      printf("\n7�:Insira a sua idade:");
      scanf("%d", &idadee);
      printf("\nInsira a sua massa em Kg:");
      scanf("%f",&massa);
      printf("\nNossa voce tem %d anos de idade e sua massa  � %.2fKg", idadee, massa);	printf("\n");
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
	  printf("\nA quantidade de numeros �mpares m�ltiplos de 3 �: %d numeros\n",impares);
      printf("\nA soma dos n�meros �mpares m�ltiplos de 3 �:%d\n",soma);
	  system("pause");
      }system("cls");goto inicio;

      case 9:
  	  { system ("color fc");
      comeco:
	  printf("\nDigite 1 para executar a aplica��o sobre os algarismos ou 2 para ir ao menu:\n");
      scanf("%d", &menu);
      switch(menu){
	  case 1:{
      printf("Digite um n�mero:");
      scanf("%d", &num);
      printf("Digite um n�mero:");
      scanf("%d", &num1);
      printf("Digite um n�mero:");
      scanf("%d", &num2);
      printf("Digite um n�mero:");
      scanf("%d", &num3);
      if (num>num1&&num>num2&&num>num3){
	  ssoma = num1 + num2 + num3;
	  printf("%d � o resultado da soma dos tr�s menores algarismos.",ssoma); printf("\n");system("pause");system("cls");goto comeco;
      }
      else if(num1>num&&num1>num2&&num1>num3){
	  ssoma = num + num2 + num3;
	  printf("%d � o resultado da soma dos tr�s menores algarismos.",ssoma);printf("\n");system("pause");system("cls");goto comeco;
      }
      else if(num2>num&&num2>num1&&num2>num3){
	  ssoma = num + num1 + num3;
	  printf("%d � o resultado da soma dos tr�s menores algarismos.",ssoma);printf("\n");system("pause");system("cls");
      goto comeco;
      }
      else if(num3>num&&num3>num1&&num3>num2){
	  ssoma = num + num1 + num2;
	  printf("%d � o resultado da soma dos tr�s menores algarismos.",ssoma);printf("\n");system("pause");system("cls");goto comeco;
      }
	  case 2:{system ("cls");
	  goto inicio;
      } default : printf("opcao invalida"); goto comeco;
      }
      }
      }
      case 10:{
	  system ("color 40");
	  printf("Bem vindo � Escola da Vida\n");
      nota1:
	  printf("Qual a nota do primeiro bimestre:");
	  scanf("%f", &nota1);
	  if(nota1>10 || nota1<0){
	  printf("\nDigite um n�mero entre 0 e 10\n");
	  goto nota1;
	  }
	  nota2:
	  printf("\nQual a nota do segundo bimestre:");
	  scanf("%f", &nota2);
	  if(nota2>10 || nota2<0){
      printf("\nDigite um n�mero entre 0 e 10\n");
	  goto nota2;
      }
	  nota3:
	  printf("\nQual a nota do terceiro bimestre:");
	  scanf("%f", &nota3);
	  if(nota3>10 || nota3<0){
      printf("\nDigite um n�mero entre 0 e 10\n");
      goto nota3;
      }
	  nota4:
	  printf("\nQual a nota do quarto bimestre:");
	  scanf("%f", &nota4);
      if(nota4>10 || nota4<0){
	  printf("\nDigite um n�mero entre 0 e 10\n");
	  goto nota4;
      }
	  media = (nota1 + nota2 + nota3 + nota4)/4;
	  printf("\nA m�dia da nota �:%.2f",media);
      if ( media >= 7){
      printf("\nVoc� est� Aprovado\n");
	  system("pause"); system("cls"); goto inicio;
      }
      else  if (media < 4)
	  {
	  printf("\nVoc� est� Reprovado\n");
	  system("pause");system("cls");goto inicio;
	  return 0;
      }
      else {
      printf("\nNem aprovado nem reprovado... Vai ficar de recupera��o:");
      getch();
      system("cls");
      }
      printf("\nBem vindo � Recupera��o da Escola da Vida");
      printf("\nQual a primeira nota de recupera��o:");
	  scanf("%f", &nota1);
	  printf("\nQual a segunda nota de recupera��o:");
	  scanf("%f", &nota2);
	  printf("\nQual a terceira nota de recupera��o:");
	  scanf("%f", &nota3);
	  printf("\nQual a quarta nota de recupera��o:");
	  scanf("%f", &nota4);
	media = (nota1 + nota2 + nota3 + nota4)/4;
	printf("\nA m�dia da nota �:%.2f",media);

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
printf("A m�dia � %d de idade", mmedia );
}
goto inicio;
}


 case 12:
 	{system ("color df");



do {
printf("Digite um n�mero entre 1 e 10:");
scanf("%d", &i);
printf("Multiplica��o:\n");
for (tab = 0 ;tab <= 10; tab++)	{
multi = i * tab;
printf("%d x %d = %d\n",i,tab,multi);
}printf("Adi��o:\n");
for (tab = 0 ;tab <= 10; tab++)	{
adicao = i + tab;
printf("%d + %d = %d\n",i,tab,adicao);
}printf("Subtra��o:\n");
for (tab = 0 ;tab <= 10; tab++)	{
subtr = i - tab;
printf("%d - %d = %d\n",i,tab,subtr);
}
printf("Deseja continuar respondendo? digite 1 para sim ou 2 para n�o:");
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
	 printf("\nA temperatura  �:%.0f graus Fahrenheit\n",  f);system("pause");  system ("cls");
	 goto a;

    case 2:
 	 printf("\ndigite a temperatura em graus  Fahrenheit :");
	 scanf ("%f", &f);
	 c =  (f - 32) / 1.8;
	 printf("\nA temperatura �:%.0f graus Celsius\n",c);  system("pause");  system ("cls");
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
	printf("Digite um n�mero:");
	scanf("%d", &ne);
	if ( ne>=10 && ne<=20 ){
	  	printf("%d Pertence ao intervalo [10 a 20].\n", ne);
}  else{ printf("%d N�o pertence ao intervalo[10 a 20].\n", ne);
}
} system("pause");  system ("cls");    goto inicio;

case 2: goto inicio;
}
}
case 15:{system ("color f2");
	setlocale(LC_ALL,"Portuguese");
    start:
	printf("                      FATORIAL\n");

	printf("Aperte 1 para executar a aplica��o ou 2 para ir ao menu:");
	scanf("%d", &opccao);
	switch(opccao){
	case 1:

	setlocale(LC_ALL,"Portuguese");

    printf("Digite um n�mero inteiro:");
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
printf("Digite os lados do Tri�ngulo:");
scanf("%f", &l1);
printf("Digite os lados do Tri�ngulo:");
scanf("%f", &l2);
printf("Digite os lados do Tri�ngulo:");
scanf("%f", &l3);
if(l1>l2+l3 || l2>l1+l3 || l3>l1+l2){
	printf("Nao forma um tri�ngulo\n");system("pause");  system ("cls");
}
else if (l1==l2 && l1==l3){
	printf("Triangulo Equil�tero\n");system("pause");  system ("cls");
}else if(l1 ==l2 && l1 != l3 || l2 == l1 && l2 != l3 || l3 == l1 && l3 != l2){
	printf("Triangulo Is�celes\n");system("pause");  system ("cls");
}
else if(l1 != l2 && l1 != l3){
printf("Tri�ngulo Escaleno\n");system("pause");  system ("cls");
}
printf("\nDeseja continuar na aplica��o? Digite 's' para sim ou 'n' para n�o:");
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
  printf("\nN�mero invalido\n\n");
  goto inicio;
}
return 0;
}



