#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
int i,j,v=0;
char t,a[100];
scanf("%s",a);
int l=strlen(a);

for(i=0;i<l;i++)
{
   // printf("%d",l);
    // printf("%d",v);
    if(a[i]>'A'&&a[i]<'z'){
            if(v>0){
                for(j=0;j<v;j++){
                    printf("%c",t);
                }
            }
        t=a[i];
        v=0;
    }
    else{
      //   printf("%d %c",v,a[i]);
        v=(a[i]-48)+(v*10);
        // printf("\n%d",v);
    }
}
for(j=0;j<v;j++){
                    printf("%c",t);
                }
return 0;
}
