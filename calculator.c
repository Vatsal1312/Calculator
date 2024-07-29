# include<stdio.h>
/*Simple project of calculator.total of 5 functions
  Addition
  Subtraction
  Multiplication 
  Division & 
  Modulo*/
void addition(float a ,float b, int di){
    float sum = a+b;
    printf("\n\t\t\t\t\tSum of %.*f + %.*f = %.*f\n", di, a, di, b, di, sum);
    return ;
}

void  difference(float a ,float b, int di){
    float diff=a-b;
    printf("\n\t\t\t\t\tDifference of %.*f - %.*f = %.*f\n", di, a, di, b, di, diff);
    return ;
}

void multiplication(float a ,float b, int di){
    float product = a*b;
    printf("\n\t\t\t\t\tProduct of %.*f * %.*f = %.*f", di, a, di, b, di, product);
    return ;
}

void modulo(int d ,int e){
    int  modulo = d%e, quotient =d/e;
    printf("\n\t\t\t\t\tRemainder of %d & %d = %d\n",d, e, modulo);
    printf("\n\t\t\t\t\tQuotient %d & %d = %d\n",d, e, quotient);
    return ;
}

void division(float a, float b, int di){
    if (b != 0) {
        float quotient = a/b ;
        printf("\n\t\t\t\t\tQuotient of %.*f / %.*f = %.*f\n", di, a, di, b, di, quotient);
    } else {
        printf("\n\t\t\t\t\tDivision by zero is not allowed.\n");
    }
    return ;
}


int main(){
    float  a, b ;
    int c, d, e, di;
    char symbol;
    
    printf("\n\n\n\t\t\t\tVATSAL's CALCULATOR");

    printf("\n\n\n\t\t\t\tThis calculator can do \n");
    printf("\t\t\t\tAddition(+),   Subtraction(-)\n");
    printf("\t\t\t\tDivision(/),   Multiplication(*)\n");
    printf("\t\t\t\tand can find Remainder & their Quotient");

    do {
        printf("\n\n\n\t\t\t\tFor addition press (+).\n");
        printf("\t\t\t\tFor subtraction press (-).\n");
        printf("\t\t\t\tFor multiplication press (*).\n");
        printf("\t\t\t\tFor division press (/).\n");
        printf("\t\t\t\tFor remainder press (%%).:\n\n\t\t\t\t");//give choice to user
        scanf(" %c",&symbol);

        printf("\n\t\t\t\t\tEnter the number of decimal places you want for the result: ");//for pricise output
        scanf("%d", &di);

        switch (symbol) {
            case '+':
            printf("\n\t\t\t\t\tYour choice is addition\n");
            printf("\n\t\t\t\t\tEnter two numbers:\n");
            scanf("%f  %f", &a, &b);
            addition(a, b, di);
            break;

            case '-':
            printf("\n\t\t\t\t\tYour choice is sustraction\n");
            printf("\n\t\t\t\t\tEnter two numbers:\n");
            scanf("%f %f", &a, &b);
            difference(a, b, di);
            break;

            case '/':
            printf("\n\t\t\t\t\tYour choice is division\n");
            printf("\n\t\t\t\t\tEnter two numbers:\n");
            scanf("%f %f", &a, &b);
            division(a, b, di);
            break;

            case '*':
            printf("\n\t\t\t\t\tYour choice is multiplication\n");
            printf("\n\t\t\t\t\tEnter two numbers:\n");
            scanf("%f %f", &a, &b);
            multiplication(a, b, di);
            break;

            case '%':
            printf("\n\t\t\t\t\tYour choice is finding remainder\n");
            printf("\n\t\t\t\t\tEnter two numbers:\n");
            scanf("%d %d", &d, &e);
            modulo(d, e);
            break;
        
            default:
            printf("\n\t\t\t\t\tInvalid request");
            break;
        }

        printf("\n\n\t\t\t\t\tEnter '1' for continue doing opreations.\n");
        printf("\t\t\t\t\tEnter '0' for finishing the program. : \n\t\t\t\t\t");//for continuing the program or not asking it from user
        scanf("%d", &c);        
        
    } while (c == 1);
    
    return 0;

} 