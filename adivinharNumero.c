#include <string.h>

int main() {
    int valor = 0;
    char proposta[10];
    char resultado[10];

    printf("Quero que voce pense em um valor para que eu possa adivinhar.");

    printf("\n\nO seu numero e maior ou menor que 20\n");

    while (1) {
        printf("Seu resultado: ");
        scanf("%s", proposta);

        if (strcmp(proposta, "maior") == 0) {
            printf("O seu numero e maior ou menor que 30\n");
            valor == 30;
            printf("Seu resultado: ");
            scanf("%s", proposta);

            if (strcmp(proposta, "maior") == 0) {
                printf("O seu numero e maior ou menor que 40\n");
                valor == 30;
                printf("Seu resultado: ");
                scanf("%s", proposta);
                // INICIO De 40 a 50
                if(strcmp(proposta, "maior") == 0){
                    printf("Entao seu numero é menor que 50\n");
                    valor == 30;
                    printf("\nSeu resultado: ");
                    scanf("%s", resultado);    
                    
                    if(strcmp(resultado, "sim") == 0){
                        printf("O seu numero e maior ou menor que 45\n");
                        valor == 30;
                        printf("\nSeu resultado: ");
                        scanf("%s", proposta);

                        if(strcmp(proposta, "maior") == 0){
                            printf("O seu numero e 46\n");
                            valor == 30;
                            printf("\nSeu resultado: ");
                            scanf("%s", resultado);

                            if(strcmp(resultado, "sim") == 0){
                                printf("acertei o seu numero.");
                            }else{
                                printf("O seu numero e 47\n");
                                valor == 30;
                                printf("\nSeu resultado: ");
                                scanf("%s", resultado);

                                if(strcmp(resultado, "sim") == 0){
                                    printf("acertei o seu numero.");
                                }else{
                                    printf("O seu numero e 48\n");
                                    valor == 30;
                                    printf("\nSeu resultado: ");
                                    scanf("%s", resultado);

                                    if(strcmp(resultado, "sim") == 0){
                                        printf("acertei o seu numero.");
                                    }else{
                                        printf("O seu numero e 49\n");
                                        valor == 30;
                                        printf("\nSeu resultado: ");
                                        scanf("%s", resultado);
    
                                        if(strcmp(resultado, "sim") == 0){
                                            printf("acertei o seu numero.");
                                        }                                       
                                    }
                                }
                            }  
                        }else{
                            printf("O seu numero e 44\n");
                            printf("\nSeu resultado: ");
                            scanf("%s", resultado);    
                            
                            if(strcmp(resultado, "sim") == 0){
                                printf("acertei o seu numero.");      
    
                            } else {
                                printf("O seu numero e 43\n");
                                printf("\nSeu resultado: ");
                                scanf("%s", resultado);    
                                
                                if (strcmp(resultado, "sim") == 0) {
                                    printf("acertei o seu numero.");  
    
                                } else {
                                    printf("O seu numero e 42\n");
                                    printf("\nSeu resultado: ");
                                    scanf("%s", resultado);    
                                    
                                    if (strcmp(resultado, "sim") == 0) {
                                        printf("acertei o seu numero."); 
    
                                    } else {
                                        printf("O seu numero e 41\n");
                                        printf("\nSeu resultado: ");
                                        scanf("%s", resultado);    
                                        
                                        if (strcmp(resultado, "sim") == 0) {
                                            printf("acertei o seu numero.");                           
                                        }
                                    }   
                                }                     
                            }
                        }
                    }
                    // FIM 40 a 50
                }else{
                    // INICIO 30 a 40

                    printf("O seu numero e maior ou menor que 35");
                    printf("\nSeu resultado: ");
                    scanf("%s", proposta);     
                    
                    if(strcmp(proposta, "maior") == 0){
                        printf("O seu numero e 36\n");
                        printf("\nSeu resultado: ");
                        scanf("%s", resultado);
                        
                        if(strcmp(resultado, "sim") == 0){
                            printf("acertei o seu numero.");

                        }else{
                            printf("O seu numero e 37\n");
                            printf("\nSeu resultado: ");
                            scanf("%s", resultado);
                            
                            if(strcmp(resultado, "sim") == 0){
                                printf("acertei o seu numero.");
                                
                            }else{
                                printf("O seu numero e 38\n");
                                printf("\nSeu resultado: ");
                                scanf("%s", resultado);
                                
                                if(strcmp(resultado, "sim") == 0){
                                    printf("acertei o seu numero.");
                                    
                                }else{
                                    printf("O seu numero e 39\n");
                                    printf("\nSeu resultado: ");
                                    scanf("%s", resultado);
                                    
                                    if(strcmp(resultado, "sim") == 0){
                                        printf("acertei o seu numero.");
                                    }                                    
                                }
                            }                      
                        }
                    }else{
                        printf("O seu numero e 34\n");
                        printf("\nSeu resultado: ");
                        scanf("%s", resultado);
                        
                        if(strcmp(resultado, "sim") == 0){
                            printf("acertei o seu numero.");

                        }else{
                            printf("O seu numero e 33\n");
                            printf("\nSeu resultado: ");
                            scanf("%s", resultado);
                            
                            if(strcmp(resultado, "sim") == 0){
                                printf("acertei o seu numero.");
                                
                            }else{
                                printf("O seu numero e 32\n");
                                printf("\nSeu resultado: ");
                                scanf("%s", resultado);
                                
                                if(strcmp(resultado, "sim") == 0){
                                    printf("acertei o seu numero.");
                                    
                                }else{
                                    printf("O seu numero e 31\n");
                                    printf("\nSeu resultado: ");
                                    scanf("%s", resultado);
                                    
                                    if(strcmp(resultado, "sim") == 0){
                                        printf("acertei o seu numero.");
                                    }                                    
                                }
                            }                      
                        }                        
                    }
                }
                // FIM 30 A 40
                // INICIO 20 A 30
            } else if (strcmp(proposta, "menor") == 0) {
                printf("O seu numero e maior ou menor que 25\n");
                valor == 25;
                printf("\nSeu resultado: ");
                scanf("%s", proposta);

                if (strcmp(proposta, "maior") == 0) {
                    printf("O seu numero e 26\n");
                    valor == 26;
                    printf("\nSeu resultado: ");
                    scanf("%s", resultado);

                    if (strcmp(resultado, "sim") == 0) {
                        printf("acertei o seu numero.");

                    } else {
                        printf("seu numero e 27");
                        printf("\nSeu resultado: ");
                        scanf("%s", resultado);

                        if (strcmp(resultado, "sim") == 0) {
                            printf("acertei o seu numero.");

                        } else {
                            printf("seu numero e 28");
                            printf("\nSeu resultado: ");
                            scanf("%s", resultado);

                            if (strcmp(resultado, "sim") == 0) {
                                printf("acertei o seu numero.");

                            } else {
                                printf("seu numero e 29");
                                printf("\nSeu resultado: ");
                                scanf("%s", resultado);

                                if (strcmp(resultado, "sim") == 0) {
                                    printf("acertei o seu numero.");
                                }
                            }
                        }
                    }
                }else{
                    printf("O seu numero e 24\n");
                    valor == 26;
                    printf("\nSeu resultado: ");
                    scanf("%s", resultado);

                    if (strcmp(resultado, "sim") == 0) {
                        printf("acertei o seu numero.");

                    } else {
                        printf("seu numero e 23");
                        printf("\nSeu resultado: ");
                        scanf("%s", resultado);

                        if (strcmp(resultado, "sim") == 0) {
                            printf("acertei o seu numero.");

                        } else {
                            printf("seu numero e 22");
                            printf("\nSeu resultado: ");
                            scanf("%s", resultado);

                            if (strcmp(resultado, "sim") == 0) {
                                printf("acertei o seu numero.");

                            } else {
                                printf("seu numero e 21");
                                printf("\nSeu resultado: ");
                                scanf("%s", resultado);

                                if (strcmp(resultado, "sim") == 0) {
                                    printf("acertei o seu numero.");
                                }
                            }
                        } 
                    }
                }
            }
            // FIM 20 A 30
            //INICIO 10 A 20
        } else if (strcmp(proposta, "menor") == 0) {
            printf("O seu numero e maior ou menor que 10\n");
            printf("Seu resultado: ");
            scanf("%s", proposta);

                if (strcmp(proposta, "maior") == 0) {
                    printf("O seu numero e maior ou menor que 15\n");
                    valor == 26;
                    printf("Seu resultado: ");
                    scanf("%s", proposta);

                    if(strcmp(proposta, "maior") == 0){
                        printf("seu numero e 16");
                        printf("\nSeu resultado: ");
                        scanf("%s", resultado);

                        if (strcmp(resultado, "sim") == 0) {
                            printf("acertei o seu numero.");

                        } else {
                            printf("seu numero e 17");
                            printf("\nSeu resultado: ");
                            scanf("%s", resultado);

                            if (strcmp(resultado, "sim") == 0) {
                                printf("acertei o seu numero.");

                            } else {
                                printf("seu numero e 18");
                                printf("\nSeu resultado: ");
                                scanf("%s", resultado);

                                if (strcmp(resultado, "sim") == 0) {
                                    printf("acertei o seu numero.");

                                }else{
                                    printf("seu numero e 19");
                                    printf("\nSeu resultado: ");
                                    scanf("%s", resultado);
    
                                    if (strcmp(resultado, "sim") == 0) {
                                        printf("acertei o seu numero.");
                                    }                                    
                                }
                            }
                        }                        
                    }else{
                        if (strcmp(proposta, "menor") == 0) {
                            printf("O seu numero e 14\n");
                            valor == 26;
                            printf("Seu resultado: ");
                            scanf("%s", resultado);
        
                            if (strcmp(resultado, "sim") == 0) {
                                printf("acertei o seu numero.");
        
                            } else {
                                printf("seu numero e 13");
                                printf("\nSeu resultado: ");
                                scanf("%s", resultado);
        
                                if (strcmp(resultado, "sim") == 0) {
                                    printf("acertei o seu numero.");
        
                                } else {
                                    printf("seu numero e 12");
                                    printf("\nSeu resultado: ");
                                    scanf("%s", resultado);
        
                                    if (strcmp(resultado, "sim") == 0) {
                                        printf("acertei o seu numero.");
        
                                    } else {
                                        printf("seu numero e 11");
                                        printf("\nSeu resultado: ");
                                        scanf("%s", resultado);
        
                                        if (strcmp(resultado, "sim") == 0) {
                                            printf("acertei o seu numero.");
                                        }
                                    }
                                }
                            }
                        }                        
                    }   
                // FIM 10 A 20 
                // MENOR QUE 10
            }else{
                printf("O seu numero e maior ou meor que 5");
                printf("\nSeu resultado: ");
                scanf("%s", proposta); 
                
                if(strcmp(proposta, "maior") == 0){
                    printf("O seu numero e 6");
                    printf("\nSeu resultado: ");
                    scanf("%s", resultado);   
                    
                    if(strcmp(resultado, "sim") == 0){
                        printf("acertei o seu numero");

                    }else{
                        printf("O seu numero e 7");
                        printf("\nSeu resultado: ");
                        scanf("%s", resultado);   
                        
                        if(strcmp(resultado, "sim") == 0){
                            printf("acertei o seu numero");
    
                        }else{
                            printf("O seu numero e 8");
                            printf("\nSeu resultado: ");
                            scanf("%s", resultado);   
                            
                            if(strcmp(resultado, "sim") == 0){
                                printf("acertei o seu numero");
        
                            }else{
                                printf("O seu numero e 9");
                                printf("\nSeu resultado: ");
                                scanf("%s", resultado);   
                                
                                if(strcmp(resultado, "sim") == 0){
                                    printf("acertei o seu numero");
            
                                }                                
                            }                      
                        }                   
                    }
                }else{
                    printf("O seu numero e 4");
                    printf("Seu resultado: ");
                    scanf("%s", resultado);   
                    
                    if(strcmp(resultado, "sim") == 0){
                        printf("acertei o seu numero");

                    }else{
                        printf("O seu numero e 3");
                        printf("\nSeu resultado: ");
                        scanf("%s", resultado);   
                        
                        if(strcmp(resultado, "sim") == 0){
                            printf("acertei o seu numero");
    
                        }else{
                            printf("O seu numero e 2");
                            printf("\nSeu resultado: ");
                            scanf("%s", resultado);   
                            
                            if(strcmp(resultado, "sim") == 0){
                                printf("acertei o seu numero");
        
                            }else{
                                printf("O seu numero e 1");
                                printf("\nSeu resultado: ");
                                scanf("%s", resultado);   
                                
                                if(strcmp(resultado, "sim") == 0){
                                    printf("acertei o seu numero");
            
                                }                                
                            }                      
                        }                   
                    }
                }
            }
        }
    }
}
/*if (strcmp(proposta, "maior") == 0) {
    printf("O seu numero e maior que 30\n");
    valor == 30;
    printf("Seu resultado: ");
    scanf("%s", proposta);

    if (strcmp(proposta, "maior") == 0) {
        printf("O seu numero e maior que 40\n");
        valor == 40;
        printf("Seu resultado: ");
        scanf("%s", proposta);

        if (strcmp(proposta, "maior") == 0) {
            printf("O seu numero e menor que 50\n");
            valor == 50;
            printf("Seu resultado: ");
            scanf("%s", proposta);
        }
    }

} else if (strcmp(proposta, "menor") == 0) {
    printf("O seu numero e menor que 10\n");
    valor == 10;
    printf("Seu resultado: ");
    scanf("%s", proposta);

    if (strcmp(proposta, "menor") == 0) {
        printf("O seu numero e menor que 5\n");
        valor == 5;
        printf("Seu resultado: ");
        scanf("%s", proposta);
    }
}*/