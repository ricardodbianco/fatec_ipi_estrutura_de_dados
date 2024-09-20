#include <stdio.h>
#include <string.h>

int main(){
    char palavra[100], senha[11];
    printf("Digite uma palavra:");
    scanf("%[^\n]", palavra);
    printf("Voce digitou %s\n", palavra);
    printf("\nDigite uma senha, so digitos(no maximo 10): ");
    // scanf("%s[a..z,A..Z]", senha);
    // printf("Sua senha e: %s\n", senha);

    char c = getchar();//capturando o enter anterior | esvaziando o buffer
    int i = 0;
    //leitura segura
    while (i <10 && ((c=getchar()) != '\n'))
    {
        senha[i++] = c;
    }
    senha[i] = '\0';
    printf("Sua senha e: %s\n", senha);

    //verificação se a palavra é palíndrome 
    i = 0;
    int j = strlen(palavra) - 1;
    int e_palindrome = 1;
    while(i <= j && e_palindrome){
        if(palavra[i++] != palavra[j--]){
            e_palindrome = 0;
        }
    }    
    if(e_palindrome){
        printf("\n%s E PALINDROME\n", palavra);
    }else{
        printf("\n%s NAO E PALINDROME\n", palavra);
    }
    return 0;
}