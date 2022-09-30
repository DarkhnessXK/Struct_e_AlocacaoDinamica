#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//#include<conio.h>
int main(){
    setlocale(LC_ALL,"");
    int elementos,i;
printf("Quantos cadastros serão feitos:\n");
scanf("%d",&elementos);

struct cadastros{
int tel,idade;
char nome[20],end[50];
};

struct cadastros *cadastro = malloc(elementos * sizeof(struct cadastros));

for(i=0;i<elementos;i++){
    printf("digite o nome:\n");
    scanf("%s",&cadastro[i].nome);

    printf("digite a idade:\n");
    scanf("%d",&cadastro[i].idade);

    printf("digite o telefone:\n");
    scanf("%d",&cadastro[i].tel);

    printf("digite o endereço:\n");
    scanf("%s",cadastro[i].end);

    printf("====================Cadastro Concluido[%d]========================\n\n",i+1);
}


free(cadastro);
system("pause");
return 0;
}
