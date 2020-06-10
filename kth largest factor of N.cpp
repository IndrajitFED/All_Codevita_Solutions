#include <stdio.h>
int main() {
int n,k,i,c=0;
scanf("%d",&n);
scanf("%d",&k);
for(i=n;i>=1;i--)
{
  if((n%i)==0)
  c++;
  if(c==k)
  {
  printf("%d",i);
  break;
  }
}
if(c!=k)
printf("1");
return 0;
}
