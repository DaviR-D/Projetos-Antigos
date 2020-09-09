#include<stdio.h>
#include<time.h>

void encript(char []);
void decript(char []);

int main()
{
int esc = 0;
char m[1000];
printf("1 - Criptografar mensagem\n2 - Descriptografar mensagem\nDigite sua escolha: ");
scanf("%d", &esc);
setbuf(stdin, NULL);

printf("Digite a mensagem: ");
scanf("%[^\n]s", m);
setbuf(stdin, NULL);

switch (esc)
{
  case 1:
  encript(m);
  break;
  case 2:
  decript(m);
  break;
}

return 0;
}

void encript(char m[])
{
int cont = 0, cont2 = 0;
for(cont = 0;m[cont] != '\0';cont++)
{
printf(" %c", m[cont]);
  for (cont2 = 0; cont2 < 4; cont2++)
  {
  int x = rand() % 26;
  x += 97;
  printf("%c", x);
  }
}
printf("\n");
return;
}

void decript(char m[])
{
int cont = 0;
for(cont = 0; m[cont] != '\0'; cont++)
{
    if(cont == 0 || m[cont - 1] == ' ' && m[cont - 2] != ' ')
    {
    printf("%c", m[cont]);
    }
}
printf("\n");

return;
}
