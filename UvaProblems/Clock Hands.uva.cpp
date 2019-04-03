#include<stdio.h>
#include<math.h>

int main()
{

    double hour , min ;
    double ans , pans ;


    while(1)
    {
        scanf("%lf:%lf",&hour,&min);
        if(hour==0&&min==0) break;

        pans = ((hour*5.0)-min) ;
        ans = ( pans + (min/12))*6.0 ;

        if(ans<0)ans = ans*(-1) ;

        if(ans>=180)printf("%0.3lf\n",360.0-ans) ;
        else printf("%0.3lf\n",ans) ;

    }

    return 0 ;

}
