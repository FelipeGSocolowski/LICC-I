#include <stdio.h>

int swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;

    *ptr1 = *ptr2;

    *ptr2 = temp;
    
    return 0;
}

int main() {
    int livro1, livro2, livro3, acao1, acao2, acao3;

    scanf("%d %d %d", &livro1, &livro2, &livro3);

    scanf("%d %d %d", &acao1, &acao2, &acao3);

    int *cartao1 = &livro1, *cartao2 = &livro2, *cartao3 = &livro3;

    switch(acao1) {
        case -1:
            cartao1 = NULL;
            break;

        case 0:
            *cartao1 = *cartao1 + 1;
            break;
        
        case 2:
            swap(cartao1, cartao2);
            break;
        
        case 3:
            swap(cartao1, cartao3);
            break;
        
        default:
            break;
    }
    
    switch(acao2) {
        case -1:
            cartao2 = NULL;
            break;

        case 0:
            *cartao2 = *cartao2 + 1;
            break;
        
        case 1:
            if(cartao1 == NULL) {
                cartao2 = cartao1;
                cartao1 = NULL;
            } else {
                swap(cartao2, cartao1);
            }
            break;
        
        case 3:
            swap(cartao2, cartao3);
            break;
        
        default:
            break;
    }
    
    switch(acao3) {
        case -1:
            cartao3 = NULL;
            break;

        case 0:
            *cartao3 = *cartao3 + 1;
            break;
        
        case 1:
            if(cartao1 == NULL) {
                cartao1 = cartao3;
                cartao3 = NULL;
            } else {
                swap(cartao3, cartao1);
            }
            break;
        
        case 2:
            if(cartao2 == NULL) {
                cartao2 = cartao3;
                cartao3 = NULL;
            } else {
                swap(cartao3, cartao2);
            }
            break;
        
        default:
            break;
    }
            
    if(cartao1 == NULL) {
        printf("cartao1 -> Livro fora da estante\n");
    } else {
        printf("cartao1 -> %d\n", *cartao1);
    }

    if(cartao2 == NULL) {
        printf("cartao2 -> Livro fora da estante\n");
    } else {
        printf("cartao2 -> %d\n", *cartao2);
    }

    if(cartao3 == NULL) {
        printf("cartao3 -> Livro fora da estante\n");
    } else {
        printf("cartao3 -> %d\n", *cartao3);
    }

    return 0;
}