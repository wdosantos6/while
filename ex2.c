#include <stdio.h>
int ehMultiplo(int num1, int num2){
    return (num1%num2 ==0);
}
    int geraNum(int d1, int d2, int d3){
        if (ehMultiplo(d1,d2)&&ehMultiplo(d2,d3))
        {
            return d1+d2+d3;
        }
        else if(ehMultiplo(d2,d1) && ehMultiplo(d3,d2)){
            return d1*d2*d3;
        }
        else{
            return (d1+d2)*(d2-d3);
        }

    }
    void verificaNum(int dia1,int dia2, int dia3){
        if (dia1>=31|| dia2>=31 || dia3>=31)
        { 
            printf("inválido\n");
        }
        return; 
    }



int main(){
    int dia1,dia2,dia3;
    printf("insira o DIA do seu aniversário,da sua mãe e do seu pai\n");
    scanf("%d %d %d", &dia1,&dia2,&dia3);
    verificaNum(dia1,dia2,dia3);
    int qualquer=geraNum(dia1,dia2,dia3);
    printf("\n%d", qualquer);


    return 0;
}