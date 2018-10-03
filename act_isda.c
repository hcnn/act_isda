#include "act_isda.h"

double act_isda(int y1, int m1, int d1, int y2, int m2, int d2) 
{    
    if( y1 == y2 ){
        double denom = (isaleapyear(y2) ? 366e0 : 365e0);
        
        int diff_days = date_to_jd(y2, m2, d2);
        diff_days -= date_to_jd(y1, m1, d1);

        if(diff_days < 0){
            fprintf(stderr, "Newer date y2-m2-d2 is older than previous date y1-m1-d1."); 
            exit(-1); 
        }else if(diff_days == 0){
            return 0e0;
        }else{
            return (double)(diff_days) / denom;
        }
        
     }else if( y1 < y2 ){
        int diffa = date_to_jd(y1, 12, 31);
        diffa -= date_to_jd(y1, m1, d1);

        double denoma = (isaleapyear(y1) ? 366e0 : 365e0);

        int diffb = date_to_jd(y2, m2, d2);
        diffb -= date_to_jd(y2, 1, 1);

        double denomb = (isaleapyear(y2) ? 366e0 : 365e0);

        int diffy = (y2 - y1 - 1);

        return (  ((double)(diffa) / denoma) 
                + ((double)(diffb) / denomb)  
                + (double)(diffy) );
    }else{
        fprintf(stderr, "Newer date y2-m2-d2 is older than previous date y1-m1-d1."); 
        exit(-1);  
    }
}
