#include <stdio.h>
int main()
{
    int ara[9],araa[6],i,low;
    while(scanf("%d %d %d %d %d %d %d %d %d",&ara[0],&ara[1],&ara[2],&ara[3],&ara[4],&ara[5],&ara[6],&ara[7],&ara[8])==9){


         int sum=0;
         for(i=0;i<9;i++){
         sum+=ara[i];
         }
        araa[0]=sum-ara[0]-ara[4]-ara[8];
        araa[1]=sum-ara[0]-ara[5]-ara[7];
        araa[2]=sum-ara[1]-ara[5]-ara[6];
        araa[3]=sum-ara[1]-ara[3]-ara[8];
        araa[4]=sum-ara[2]-ara[4]-ara[6];
        araa[5]=sum-ara[2]-ara[3]-ara[7];
        low=araa[0];
        for(i=1;i<6;i++){
             if (araa[i]<low)
                low=araa[i];

    }
    
    while(1){
                if(low==araa[1]){printf("BCG "); break;}
                if(low==araa[0]){printf("BGC "); break;}
                if(low==araa[5]){printf("CBG "); break;}
                if(low==araa[4]){printf("CGB "); break;}
                if(low==araa[3]){printf("GBC "); break;}
                if(low==araa[2]){printf("GCB "); break;}

    }
                printf("%d\n",low);
    }
        return 0;
}
