#include <stdio.h>
#include <string.h>

int main(int argc,char* argv[]) {
    // Digite a quantidade de pessoas:
    int quantidadePessoa=10;

    char auxNome[60],mulherAlta[300]="",pessoaPequena[300]="";
    float alturaM=0,alturaF=0,auxAltura=0,maiorAltura,menorAltura;
    int homem=0,mulher=0,auxSexo;

    for ( int i=0; i < quantidadePessoa; i++)
    {
        printf("Digite o valores do %d usuario: \n", i+1);
        printf("Obs.:Digite na Ordem: Nome, Altura, Sexo(apertando enter apos inserir cada dado)\n");
        scanf("%s %f %d",&auxNome,&auxAltura,&auxSexo);
        if (auxSexo == 1)
        {
            alturaM = alturaM + auxAltura;
            homem++;
        }else
        {
            alturaF = alturaF + auxAltura;
            mulher++;
        }

        if (i==0)
        {
            menorAltura = auxAltura;
            maiorAltura = auxAltura;
        }

        if(auxAltura>maiorAltura){
            maiorAltura = auxAltura;
        }
        if(auxAltura<menorAltura){
            menorAltura = auxAltura;
        }
    }
        
    printf("\n\n\n\nA memória do pc ta franca, não consigui salvar dados. Por favor digite dnv\n\n\n");

    for (int i = 0; i < quantidadePessoa; i++)
    {
        printf("Digite o valores do %d usuario: \n", i+1);
        printf("Obs.:Digite na Ordem: Nome, Altura, Sexo(apertando enter apos inserir cada dado)\n");
        scanf("%s %f %d",&auxNome,&auxAltura,&auxSexo);

        if (auxSexo == 2)
        {
            if(auxAltura> alturaF/mulher){
                strcat(mulherAlta, auxNome);
                strcat(mulherAlta, " ");
            }
        }

        if(auxAltura<(alturaM+alturaF/quantidadePessoa)){
            strcat(pessoaPequena,auxNome);
            strcat(pessoaPequena, " ");
        }
    }
    
    printf("\n\nMaior Altura:\n %f \nMenor Altura:\n %f\n\n",maiorAltura,menorAltura);
    printf("Mulheres com altura acima da média das mulheres: \n%s\n\n", mulherAlta);
    printf("Pessoas abaixo da média geral:\n %s\n\n",pessoaPequena);

    return 0;
}