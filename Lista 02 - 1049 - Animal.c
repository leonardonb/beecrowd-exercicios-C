#include<stdio.h>
#include <string.h>

int main(){

    char a1[]="vertebrado", a2[]="invertebrado";
    char b1[]="ave", b2[]="mamifero", b3[]="inseto", b4[]="anelideo";
    char c1[]="carnivoro", c2[]="onivoro", c3[]="herbivoro", c4[]="hematofago";

    char a[25], b[25], c[25];

    scanf("%s\n""%s\n""%s\n",&a, &b, &c);

    if (0==strcmp(a,a1)){ // compara se a entrada de a � igual a refer�ncia de a1
        if (0==strcmp(b,b1)){
            if (0==strcmp(c,c1)){
                printf("aguia\n");
            }
            else if (0==strcmp(c,c2)){
                printf("pomba\n");
            }
        }
        else if (0==strcmp(b,b2)){
           if (0==strcmp(c,c2)){
                printf("homem\n");
            }
            else if (0==strcmp(c,c3)){
                printf("vaca\n");
            }
        }
    }
    else if (0==strcmp(a,a2)){
        if (0==strcmp(b,b3)){
            if (0==strcmp(c,c4)){
                printf("pulga\n");
            }
            else if (0==strcmp(c,c3)){
                printf("lagarta\n");
            }
        }
        else if (0==strcmp(b,b4)){
           if (0==strcmp(c,c4)){
                printf("sanguessuga\n");
            }
            else if (0==strcmp(c,c2)){
                printf("minhoca\n");
            }
        }
    }
    return 0;
}
