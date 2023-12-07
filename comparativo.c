#include <stdio.h>
#include <locale.h>
int  idade1, idade2;

int main(void){
    setlocale(LC_ALL, "");
    printf("Qual a primeira idade? ");
    scanf("%i", &idade1);

    printf("Qual a segunda idade? ");
    scanf("%i", &idade2);

    system("cls");
    
    if (idade1 == idade2) {
        printf("As idades s�o iguais.\n");
    }
    else{
        if (idade1 > idade2){
         printf("A primeira idade � maior que a segunda\n");
           }
        else{
            printf("A segunda idade � maior que a primeira \n");
        }
    }

    system("pause");
    return 0;
}
