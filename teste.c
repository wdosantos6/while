#include <stdio.h>

int main(){
    int cliente=0,cont2=0,cont3=0,turmas=0;
    float pesoAl,calAg,litTur,peso3,percAl2,litTotal,maior=-1;
while(turmas<=3){
    turmas++;
printf("Qual o primeiro peso?\n");
scanf("%f", &pesoAl);
while(pesoAl>=1)
{
    calAg=35*pesoAl/1000;
    printf("Com o peso %.2f você precisa de %.2f l de água por dia\n", pesoAl,calAg);
    if(calAg>maior){
        maior=calAg;
    }
    cliente++;
    if(calAg<=2.0){
        cont2+=1;
    }
    litTur+=calAg;
    if (calAg>=3.0)
    {
        cont3++;
        peso3+=pesoAl;
    }
    
    printf("Qual seu peso?\n");
    scanf("%f", &pesoAl);
    
}    
percAl2= cont2*100.0/cliente;
printf("alunos menos de 2l %%---->%% %.1f\n", percAl2);
printf("Total de litros da turma---->%.2fL\n", litTur);
printf("Média de litros da turma\n", litTur/cliente);
printf("peso médio dos 3L+\n", peso3/cont3);

litTotal+=litTur;
}
printf("Total das 3 turmas=%.1fL", litTotal);
   
    return 0;
}