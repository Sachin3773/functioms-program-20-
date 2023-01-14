#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//General functions
/*int sum(int a,int b)
{
    int c=a+b;
    return c;
}
int factorial(int a)
{
    int fact=1;
    while(a>0)
    {
        fact=fact*a;
        a--;
        
    }
    return fact;
}
int subtract(int a,int b)
{
    int c;
    if(a>=b)
    c=a-b;
    else
    c=b-a;
    return c;
}
int multiply(int a,int b)
{
    int c;
    c=a*b;
    return c;
}
void divide(int a,int b)
{
    int c;
    c=a/b;
    printf("%d\n",c);
}
int power(int a,int b)
{
    int i,c=1;
    while(b--)
    c=c*a;
    return c;
}
void swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    printf("%d %d\n",a,b);
}
void reversearr()
{
    int n;
    printf("enter n :\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of array:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n/2;i++)
    {
    int c;
    c=a[i];
    a[i]=a[n-1-i];
    a[n-1-i]=c;
    }
    for(int i=0;i<n;i++)
    printf("%d\n",a[i]);
}
void prime_of_any_digit()
{
    int n;
    printf("enter the digit :\n ");
    scanf("%d",&n);
    int l,u;
    l=pow(10,n-1);
    u=pow(10,n)-1;
    for(int i=l;i<=u;i++)
    {
        int a=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            a++;
        }
        if(a==2)
        printf("%d \n",i);
    }
}
int main()
{
  int a,b;
   printf("enter two numbers\n");
   scanf("%d%d",&a,&b);
   printf("%d+%d=%d\n",a,b,sum(a,b));
   printf("factorial of numbers : %d %d\n",factorial(a),factorial(b));
   printf("%d-%d=%d\n",a,b,subtract(a,b));
   printf("%d*%d=%d \n",a,b,multiply(a,b));
   divide(a,b);
   printf("%d\n",power(a,b));
   swap(a,b);
   reversearr();
   prime_of_any_digit();
   return 0;
}*/
/*void digitcount()
{
    int n;
    scanf("%d",&n);
    int k=0;
    while(n)
    {
       n= n/10;
        k++;
    }
    printf("%d\n",k);
}
void convertbinary()
{
    int a;
    scanf("%d",&a);
    while(a!=0)
    {
        a=a/2;
        k++;
    }
    int c[k];
    while(a!=0)
    {
        b=a%2;
        a=a/2;
        c[i]=b;
    }
   for(int i=k;i>=0;i--)
   printf("%d",c[i]);
}
int main()
{
    digitcount();
}*/
/*int sum(int a[],int n)
{
    int sum=0;
    for(int i=0; i<n ; i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
int main()
{
   int x[5]={3,6,4,8,1} ;
   int result =sum(x,5);
   printf("%d",result);

}*/
/*void maxminarr(int a[],int n)
{
    int min=a[0],max=a[0];
    for(int i=0;i<n;i++)
    {
        if(min>a[i])
        min=a[i];
        if(max<a[i])
        max=a[i];
    }
    printf("min=%d\nmax=%d",min,max);                                             //min max arr
}
void main()
{
    int x;
    printf("enter the size of array:");
    scanf("%d",&x);
    int y[x];
    for(int i=0;i<x;i++)
    scanf("%d",&y[i]);
    maxminarr(y,x);
}*/
/*int lcm(int a, int b)
{
    int l,lcmm;
    for(int i=1;i<=a;i++)
    {if(a%i==0&&b%i==0)
    l=i;
    }
    lcmm=(a*b)/l;
    printf("%d",lcmm);
}
int main()
{
    int a,b;
    printf("enter two numbers:");                                 //lcm
    scanf("%d %d",&a,&b);
    lcm(a,b);
}*/
/*int fibonacci(int n)
{
    int c=1,a=0,b=1;
    printf("0 1 ");
    for(int i=1;i<=n-2;i++)
    {
        c=a+b;
        printf("%d ",c);                                  //fibonacci
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fibonacci(n);
}*/
/*int fact(int a)
{
    int b=1;
    for(int i=a;i>0;i--)                                        //fibonacci
    {
        b=b*i;
    }
    return b;
}
int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    printf("%d",fact(n));
}*/
/*int sum_of_digit(int a)
{
    int b=0,c=0;                                                    //sum of digit
    while(a!=0)
    {
        c=a%10;
        b=b+c;
        a=a/10;
    }
    return b;
}
int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    printf("%d",sum_of_digit(n));
}*/
/*void palindrome(int n)
{
   int b=0,a,k;
   k=n;
   while(n!=0)
   {
      a=n%10;
      b=a+b*10;
      n=n/10;
   }
   if(b==k)
   printf("it is palindrome");
   else
   printf("it is not palindrome");                                               //palindrome
}
void main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    palindrome(n);
}*/
/*void arr(int a[],int n)
{
    int *p;
    p=a;
    printf("enter array elements:");
    for(int i=0;i<n;i++)
    scanf("%d",&p[i]);
    for(int i=0;i<n;i++)                                                          //array input using pointer
    printf("%d ",p[i]);
}
void main()
{
    int n;
    printf("enter size of array :");
    scanf("%d",&n);
    int a[n];
    arr(a,n);
}*/
/*int perfectnumber(int a)
{
    int s=0,k;
    
    
        
            k=a;
            for(int j=1;j<a;j++)
            {
                if(a%j==0)
                s=s+j;
            }
            if(k==s)
            return 1;
            else
            return 0;
        
    
}                                                                  //perfect number
int main()
{
    int n,m;
    printf("enter range :\n");
    scanf("%d %d",&n,&m);
    for(int i=n;i<m;i++)
    {
        if(perfectnumber(i))
        printf("%d\n",i);
    }
}*/
/*int armstrong(int a)
{
    int l,b=0,k,c;
    c=a;
    l=log10(a)+1;
    while(a)
    {
       k=a%10;
       b=b+pow(k,l);
       a=a/10;
    }                                                                        //armtrong in given interval
    if(c==b)
    return 1;
    else
    return 0;
}
int main()
{
    int n,m;
    printf("enter range:");
    scanf("%d %d",&n,&m);
    for(int i=n;i<=m;i++)
    {
       if(armstrong(i))
       printf("%d\n",i);
    }
}*/
/*int strong(int a)
{
    int s=0,k,fact,c;
    c=a;
    while(a)
    {
        k=a%10;
        fact=1;
        while(k)
        {
            fact=fact*k;
            k--;
        }
        s=s+fact;
        a=a/10;                                                        //strong number in given range
    }
    if(s==c)
    return 1;
    else
    return 0;
}
int main()
{
    int n,m;
    printf("enter the range :");
    scanf("%d%d",&n,&m);
    for(int i=n;i<=m;i++)
    {
        if(strong(i))
        printf("%d\n",i);
    }
}*/
/*int prime(int a)
{
    int c=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        c++;
    }
    if(c==2)
    return 1;
    else
    return 0;                                                                       //prime in given range
}
int main()
{
    int n,m;
    printf("enter range :");
    scanf("%d %d",&n,&m);
    for(int a=n;a<=m;a++)
    {
        if(prime(a))
        printf("%d\t",a);
    }
}*/
