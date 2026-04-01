#include <stdio.h>
#include <stdlib.h>
long long int Dec_binario_rec(long long int numero){
    if(numero==0){
        return 0;
    }else if(numero==1){
        return 1;
    }else{
        return Dec_binario_rec(numero/2)*10+numero%2;
    }
}

long long int Dec_binario(long long int numero){
    long long int res = 0;
    int decimal=1;
    while (numero != 0){
        res=(numero%2)*decimal+res;
        numero/=2;
        decimal*=10;
    }
    //res*=10;
    return res;
}
long long int Dec_oct(long long int numero){
    long long int res = 0;
    int decimal=1;
    while (numero != 0)
    {
        res=(numero%8)*decimal+res;
        numero/=8;
        decimal*=10;
    }
    return res;
}
long long int bin_DEc(int numero){
    int pot = 1;
    long int res = 0;
    while (numero !=0){
        res=res+numero%10*pot;
        pot*=2;
        numero/=10;
    }
    return res;
}
long long int bin_DEc_rec(int numero){
    if(numero==1){
        return 1;
    }else if (numero==0){
        return 0;
    }else{
        return bin_DEc_rec(numero/10)*2+numero%10;
    }    
}
int main(void) {
  long long int numero;
    printf("Dec->binario normal\n");
    scanf("%lld", &numero);
    printf("%lld\n", Dec_binario(numero));
    printf("Dec->Binario Rec\n");
    scanf("%lld", &numero);
    printf("%lld\n", Dec_binario_rec(numero));
    printf("Binario->dec normal\n");
    scanf("%lld", &numero);
    printf("%lld\n", bin_DEc(numero));
    printf("Binario->dec rec\n");
    scanf("%lld", &numero);
    printf("%lld\n", bin_DEc_rec(numero));
    printf("DEC->OCT \n");
    scanf("%lld", &numero);
    printf("%lld\n", Dec_oct(numero));
    return 0;
}
/*
https://omegaup.com/profile/DavidENicolasC/
*/
