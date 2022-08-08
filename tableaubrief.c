#include <stdio.h>

int main(){
    int T[13];//classe1
    int L[15];//classe2
    int tri[28];//tableau trie
    int i,j,c,classe,nbr=0,h=13;
    int max,min;
    do{
    printf("entrer le numero de la classe :");
    scanf("%d",&classe);
    if(classe==1){
        for(i=0;i<13;i++){
        printf("entrer la moyenne des eleves de la classe 1 num %d : ",i+1);
        scanf("%d",&T[i]);
    }
    
    max=T[0];
    for(i=0;i<13;i++){
        if (max<T[i] )
        max=T[i];
        
    }
    printf("le maximum des moyennes de la classe 1 est: %d\n",max);
    min=T[0];
    for(i=0;i<13;i++){
        if (min>T[i] )
        min=T[i];
    }
    printf("le minimum des moyennes de la classe 1 est: %d\n",min);

    for(i=0;i<13;i++){
        if(T[i]>10){
            nbr=nbr+1;
        }
    }
    printf("le nombre des notes >10 de la classe 1 est :%d\n",nbr);
    

    
    
    for(i=0;i<12;i++){
    for(j=i+1;j<13;j++){
        if ( T[i] > T[j] ) {
            c = T[i];
            T[i] = T[j];
            T[j] = c;
        }
        
        }
    }
        printf("le tableau trie dans l'ordre croissant:");
        for(i=0;i<13;i++){
            printf("%d\t",T[i]);
        }
    }

    
    else if (classe==2){
        for(i=0;i<15;i++){
        printf("entrer la moyenne des eleves de la classe 2 num %d:",i+1);
        scanf("%d",&L[i]);
    }
    max=L[0];
    for(i=0;i<15;i++){
        if (max<L[i] )
        max=L[i];
        
    }
    printf("le maximum des moyennes de la classe 2 est: %d\n",max);

    min=L[0];
    for(i=0;i<15;i++){
        if (min>L[i] )
        min=L[i];
    }
    printf("le minimum des moyennes de la classe 2 est: %d\n",min);

    for(i=0;i<15;i++){
        if(L[i]>10){
            nbr=nbr+1;
        }
    }
    printf("le nombre des notes >10 de la classe 2 est :%d\n",nbr);

    

   
    
}
else if (classe==3){
    for(i=0;i<13;i++){
        //printf("entrer les notes des eleves des 2 classes num %d : ",i+1);
        tri[i]=T[i];
       
    }
    for(i=0;i<13;i++){
        tri[h]=T[i];
        h++;
    }

    for(i=0;i<27;i++){
    for(j=i+1;j<28;j++){
        if ( tri[i] > tri[j] ) {
            c = tri[i];
            tri[i] = tri[j];
            tri[j] = c;
        }
        
        }
    }
        printf("le tableau trie les notes dans l'ordre croissant:");
        for(i=0;i<28;i++){
            printf("%d\t",tri[i]);
        }
    }
   else{
    printf("veuillez choisir 1 ou 2 ou 3");

   }
    }while(classe!=0);

}
