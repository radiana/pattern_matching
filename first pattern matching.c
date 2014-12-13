#include <stdio.h>
int main()
{
    char p[80] = {"bab"};
    char t[80] = {"aabbbabb"};
    int r,s,k,l,max,index;

    r = strlen(p);
    s = strlen(t);
    k = 0;
    max = s-r;
    while(k <= max)
    {
        for(l=0;l<r;l++)
            if(p[l] != t[k+l])
            break;

        if(l == r)
        {
            index=k;
            break;
        }
        else
            k = k+1;
    }
    if(k>max)
        index = -1;
    printf("p = %s\n",p);
    printf("t= %s\n\n",t);

    if(index != -1)
        printf("index of p in t is %d",index);
    else
        printf("p does not exist in t");


    return 0;
}
