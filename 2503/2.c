#include <stdio.h>

int main(int argc, char *argv[])
{
    float primeiroTempo, segundoTempo, terceiroTempo, auxTempo;
    int primeiroOperario, segundoOperario, terceiroOperario, auxOperario, contadorOperario = 1;

    printf("Digite o numero e depois o tempo de trabalho do %d operario:\n", contadorOperario);
    scanf("%d %f", &auxOperario, &auxTempo);
    contadorOperario++;

    if (auxOperario != 0 && auxTempo != 0)
    {
        primeiroOperario = auxOperario;
        segundoOperario = auxOperario;
        terceiroOperario = auxOperario;
        primeiroTempo = auxTempo;
        segundoTempo = auxTempo;
        terceiroTempo = auxTempo;
    }

    while (auxOperario != 0 && auxTempo != 0)
    {
        printf("Digite o numero e depois o tempo de trabalho do %d operario:\n", contadorOperario);
        scanf("%d %f", &auxOperario, &auxTempo);
        contadorOperario++;
        if (auxOperario != 0 && auxTempo != 0)
        {
            if (auxTempo < primeiroTempo)
            {
                terceiroOperario = segundoOperario;
                terceiroTempo = segundoTempo;
                segundoOperario = primeiroOperario;
                segundoTempo = primeiroTempo;
                primeiroTempo = auxTempo;
                primeiroOperario = auxOperario;
            }
            else if (auxTempo < segundoTempo)
            {
                terceiroOperario = segundoOperario;
                terceiroTempo = segundoTempo;
                segundoOperario = auxOperario;
                segundoTempo = auxTempo;
            }
            else if (auxTempo < terceiroTempo)
            {
                terceiroOperario = auxOperario;
                terceiroTempo = auxTempo;
            }
        }
        else
        {
            break;
        }
    }

    printf("Sequencia de quem ficou menos tempo:\nPrimeiro: operario - %d | tempo - %f\nSegundo: operario - %d | tempo - %f\nTerceiro: operario - %d | tempo - %f\n", primeiroOperario, primeiroTempo, segundoOperario, segundoTempo, terceiroOperario, terceiroTempo);
    return 0;
}