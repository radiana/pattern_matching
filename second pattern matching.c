#include <stdio.h>
char f(char,char);
int state [4][3];

int main()
{
    char p[80] = {"aaba"};
    char t[80] = {"abcaabaca"};
    int n,k,s,i,index;

    state[0][0] = 1;
    state[0][1] = 0;
    state[0][2] = 0;
    state[1][0] = 2;
    state[1][1] = 0;
    state[1][2] = 0;
    state[2][0] = 2;
    state[2][1] = 3;
    state[2][2] = 0;
    state[3][0] = -1;
    state[3][1] = 0;
    state[3][2] = 0;
    n = strlen(t);
    k = 0;
    s = 0;
    while(k<n && s != -1)
    {
        if(t[k] == 'a')
            i = 0;
          if(t[k] == 'b')
            i = 1;
            if(t[k] == 'x')
            i = 2;

            s = f(s,i);
            k = k + 1;
    }

    if(s == -1)
        index = k-strlen(p);
    else
        index = -1;

    printf("p = %s\n\n",p);
    printf("t = %s",t);

    if(index != -1)
        printf("index of p in t is %d",index);
    else
        printf("does not exist in t\n\n");
}

char f(char sk,char tk)
{
    return(state[sk][tk]);
}




