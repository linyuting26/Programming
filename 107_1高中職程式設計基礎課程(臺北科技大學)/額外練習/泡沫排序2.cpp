#include  <iostream>

int  main()
{
        int  n=20;
        int  tmp;
        int  a[n]={21,24,2,47,65,1,7,12,14,28,35,27,6,9,33,4,9,10,51,3};
        for  (int  i=0;  i<n;  i++)  {
                for  (int  j=0;  j<n-i;  j++)
                        if  (a[j+1]  >  a[j])  {    /*  compare  the  two  neighbors  */
                                  tmp  =  a[j+1];                  /*  swap  a[j]  and  a[j+1]            */
                                  a[j+1]  =  a[j];
                                  a[j]  =  tmp;
                }
        }
        for(int  ix=0;ix<n;ix++)
        std::cout<<a[ix]<<"  "<<std::endl;
        return  0;
}
