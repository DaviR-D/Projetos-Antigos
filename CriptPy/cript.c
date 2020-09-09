#include<stdio.h>
#include <string.h>

void cript();
void decript();

int main()
{
int esc = 0;
printf("Digite sua escolha:\n 1 - Criptografar\n 2 - Descriptografar\n");
scanf("%d", &esc);
setbuf(stdin, NULL);

switch(esc)
{
  case 1:
  cript();
  break;
  case 2:
  decript();
  break;
}

return 0;
}

void cript()
{
char msg[1000], password[30], letra;

printf("Digite a mensagem a ser criptografada:\n");
scanf("%[^\n]s", msg);
setbuf(stdin, NULL);

printf("Digite a senha/chave da criptografia:\n");
scanf("%[^\n]s", password);
setbuf(stdin, NULL);

if(strlen(password) % 2)
{
password[strlen(password) - 1] = '\0';
}

for(int cx = 0; msg[cx] != '\0'; cx++)
{
  if(msg[cx] == ' ')
  {
  msg[cx] = '!';
  }
  else
  {
  letra = msg[cx];
  for(int cx2 = 0; password[cx2] != '\0'; cx2++)
  {
    if(cx2 % 2 == 0)
    {
    msg[cx] -= password[cx2];
    }
    else
    {
    msg[cx] += password[cx2];
    }
  }
  if(strlen(password) % 2)
  msg[cx] += 1;

  if(msg[cx] < 35 || msg[cx] > 126)
  {
  char c = '"';
  msg[cx] = letra;
  printf("%c", msg[cx]);
  printf("%c", c);
  continue;
  }
}
printf("%c", msg[cx]);
}

printf("\n");

return;
}

void decript()
{
char msg[1000], password[30];
int x = 0;
printf("Digite a mensagem a ser descriptografada:\n");
scanf("%[^\n]s", msg);
setbuf(stdin, NULL);

printf("Digite a senha/chave da criptografia:\n");
scanf("%[^\n]s", password);
setbuf(stdin, NULL);

if(strlen(password) % 2)
{
password[strlen(password) - 1] = '\0';
}

for(int cx = 0; msg[cx] != '\0'; cx++)
{
  if(msg[cx] == '!')
  {
  msg[cx] = ' ';
  }
  else
  {
  for(int cx2 = 0; password[cx2] != '\0'; cx2++)
  {
  if(msg[cx + 1] == '"')
  {
  x++;
  break;
  }
    if(cx2 % 2 == 0)
    {
    msg[cx] += password[cx2];
    }
    else
    {
    msg[cx] -= password[cx2];
    }
  }
  if(strlen(password) % 2)
  msg[cx] -= 1;
}
printf("%c", msg[cx]);
if(x)
cx++,x--;
}

printf("\n");
return;
}
