#include<stdio.h>

void tabuleiro(char [3][3]);
int fim(char [3][3], char);

int main()
{
char letras[3][3] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
int jogada[2], erro = 0, cont = 0, cont2 = 0;
static int turno = 1;
char letra;

while(0 < 1)
{
tabuleiro(letras);
if(fim(letras,letra))
{
for(cont = 0; cont < 3; cont++)
for(cont2 = 0; cont2 < 3; cont2++)
letras[cont][cont2]	= ' ';
tabuleiro(letras);
printf("Vitória da letra %c!\n", letra);
}

if(erro == 1)
{
printf("Movimento inválido, jogue novamente!\n");
erro--;
}

	if(turno % 2 == 0)
	{
	printf("Vez de O\n");
	letra = 'O';
	}
	else
	{
	printf("Vez de X\n");
	letra = 'X';
	}

printf("Escolha as cooerdenadas de sua jogada\n");
scanf("%d %d", &jogada[0], &jogada[1]);

jogada[0]--;
jogada[1]--;

if(letras[jogada[0]][jogada[1]] == ' ')
{
letras[jogada[0]][jogada[1]] = letra;
turno++;
}
else
{
erro++;
}
}

return 0;
}

void tabuleiro(char jogo[3][3])
{
system("clear");

printf(" %c | %c | %c\n___|___|___\n   |   |\n %c | %c | %c\n___|___|___\n %c | %c | %c\n   |   |  \n",
 jogo[0][0], jogo[0][1], jogo[0][2], jogo[01][0], jogo[1][1], jogo[1][2], jogo[2][0],
 jogo[2][1], jogo[2][2]);
return;
}

int fim(char jogo [3][3], char letra)
{
int v = 0, cont = 0, cont2 = 0, esp = 0;

if(jogo[0][0] == jogo[1][0] && jogo[0][0] == jogo[2][0] && jogo[0][0] != ' ')
v++;

if(jogo[0][0] == jogo[1][1] && jogo[0][0] == jogo[2][2] && jogo[0][0] != ' ')
v++;

if(jogo[0][0] == jogo[0][1] && jogo[0][0] == jogo[0][2] && jogo[0][0] != ' ')
v++;

if(jogo[1][0] == jogo[1][1] && jogo[1][0] == jogo[1][2] && jogo[1][0] != ' ')
v++;

if(jogo[2][0] == jogo[2][1] && jogo[2][0] == jogo[2][2] && jogo[2][0] != ' ')
v++;

if(jogo[0][0] == jogo[1][0] && jogo[0][0] == jogo[2][0] && jogo[0][0] != ' ')
v++;

if(jogo[0][1] == jogo[1][1] && jogo[0][1] == jogo[2][1] && jogo[0][1] != ' ')
v++;

if(jogo[0][2] == jogo[1][2] && jogo[0][2] == jogo[2][2] && jogo[0][2] != ' ')
v++;

if(jogo[0][2] == jogo[1][1] && jogo[0][2] == jogo[2][0] && jogo[0][2] != ' ')
v++;

if(v == 0)
{
for(cont = 0; cont < 3; cont++)
for(cont2 = 0; cont2 < 3; cont2++)
if(jogo[cont][cont2] == ' ')
esp++;
}

if(esp == 0 && v == 0)
{
printf("Deu velha!\n");
return 1;
}

return v;
}
