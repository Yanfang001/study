 
// #include<stdio.h>
//int  main()
// {
// long int a,b,c,d,ab,cd,product;       
//  	 for(a=1;a<=9;a++)
//	  for(b=0;b<=9;b++)
//	  for(c=0;c<=9;c++)
//	  for(d=0;d<=9;d++) 
//	  {
//	  	ab=a*10+b;
//	  	cd=c*10+d;
//	  product=b*1000+a*100+d*10+c;
//  	if(ab*cd==product)
//  	{
//  	printf("%-8d",product); 
//  }
//}
//  return 0;
//  } 
//                                                                      ab*cd=badc
//#include<stdio.h>
// int main( )
// {
//  int a=17,i;
//  for(i=0;i<100;i++)
//  if(i%17==0) 
//  printf("%-5d",i);
//  return 0;
// }                                                                      17除 

//{
//	int a,b,c;
//	for(a=0;a<=9;a++)
//	for(b=0;b<=9;b++)
//	for(c=0;c<=9;c++)                  
//if((a*100+b*10+c+c*100+b*10+a)==1333)
//	printf("%5d%5d%5d\n",a,b,c);
// } 																	abc+cba=1333

//{
//	int i,a,c=0,sum=0;
//for(i=0;i<10;i++)
//	{
//		scanf("%d",&a);
//		if(a<0)
//		{
//			  c++;
//			  sum+=a;
//		}  
//	}
//		printf("非负数有%d个，和为%d",c,sum);   
//}																		负数个数，和

//{
//	int i,sum=0;
//	for(i=0;i<=100;i++)
//	if(i%2==0)
//	sum+=i;
//	printf("%d",sum); 
// } 																	100以内偶数


//#include<stdio.h>
//int fun(int a,int s);
// int main( )
// {
// 	int i=5,s=0,sum;
// 	sum=fun(i,s); 
// 	printf("%d",sum);
//}
// int fun(int i,int s)
// {
// 	int a;
// 	scanf("%d",&a);
//     s+=a;
// if(i==1) return s;
// else  return fun(i-1,s); 
// }																递归求输入的和 

//{
//	int i,sum=0;
//	for(i=1;i<=100;i++)
//	sum+=i;
//	printf("%d",sum); 
//}
//

//{int i,sum=0;
//for(i=1;i<=99;i+=2)
//sum+=i*(i+1)*(i+2);	
//printf("%d",sum);
//}                                           1*2*3+3*4*5...

//{
//	char a[20],i;
//	gets(a);
//	for(i=0;i<20;i++) 
//	if(a[i]=='a')
//	a[i]='*';
//	puts(a);
//}											a='*'
//
//#define  max 10
//{int a[max],i,t;
//for(i=0;i<max;i++)
//scanf("%d",&a[i]);
//for(i=0;i<max/2;i++)
//{
//	t=a[i];
//a[i]=a[max-i-1];
//a[max-i-1]=t;
//}
//for(i=0;i<max;i++)
//printf("%2d",a[i]);
//}									逆序 

//{
//int a[3][3],i,j;
//for(i=0;i<3;i++)
//for(j=0;j<3;j++) 
//scanf("%d",&a[i][j]);
//for(i=0;i<3;i++)
//for(j=0;j<3;j++)
//{
//if(i!=j&&(i+j)!=2)
//printf("%5d",a[i][j]); 
//printf("\n");
//}
//}										除对角线 

//{
//int a;
//scanf("%d",&a);
//if(a>0)
//printf("z\n");
//else
//printf("f\n");
//if(a%2) 
//printf("j\n");
//else
//printf("o");
//}									正负奇偶 
	
//	{
//int i,sum=0;
//for(i=1;i<=200;i++) 
//if(i%5!=0)
//sum+=i;
//printf("%d",sum);
//	}

//#include<stdio.h> 
//#include<math.h> 
//int a,n,t=0,i;
//scanf("%d%d",&a,&n);
//for(i=1;i<=n;i++)
//{
//	t+=a;
//	a=a*pow(10,i); 
//}
//printf("%d",t);
//}
//
// #include<stdio. h>
// void main()
// {
// int i, a, n;
// long int sum=0;
// st=0;
// printf(uot;请输a和n:＂);
// scanf(%d%d,&a, &n);
// for(i=1;=n;i++) 
// st=st+a;
// sum=sum+st;
//a=a*10;
// printf("%ld n,sum);
//}
//
// #includesstdio. h>
// void main()
//{
// int a[5];
// int i,j, max, sum=0;
// float average;
// printf(＆quot;请输入5个数:＂);
//for(i=0;i<5;i++)
// scanf("%d",&a[i]);
// max=a[O];
//for(j=0;j<5;j++)
//{
// sum=sum+a[j];
//f(max<a[j])
// max=a[j];
//}
// average=1.0/5 *sum;
// printf(max=%d, verage=%f\n,max,average);
//}
//
// #include<stdio. h>
//
// void main()
// {
// int i;
//for(i=200<=400;i++)
//if(%3==0)&&(-6)%10==0))
// printf("%d\n",i);
// printf("\n");
//}
//
// #<stdio. h>
// void main()
// {
// fint i,j,n1;
// char a[20];
// printf(＆quot;请输入字符串:＂);
// gets(a)
// nl=strlen(a);
// for(i=0;i<nl;i++)
//if(a[i]!='a'&&a[i]!='\0') 
// printf("%c", a[i]);
// printf("\n");
//}
//
//  #include<stdio. h>
// void main()
// {
// int i, n=O, sum=0;
// int a[10];
// printf(请输入10个数:);
//for(i=0;i<10++)
// scanf("%d",&a[i]);
//for(i=0i<10i++)
// if(a[i]<=0) 
// {
// 	sum=sum+a[i];
//}
//n++;
//}
// printf(＆quot;非正个数是％d,sum=%d\n",n,sum); 
//}
//
//
// #include<stdio. h>
//
// #include<string. h>
//
// void main( )
// { 
// int i, j,t, n;
// char a[10];
// printf(＆quot;请输入字符串:＂); 
// gets(a) ;
// n=strlen(a);
// for(i=0;i<n/2; i++) 
// t=a[i];
// a[i]=a[n-l-i];
// a[n-1-i]=t;
//}
//for(j=0;j<n;j++)
//printf("%c",a[i]);
//printf("\n");
//}
//
//#include <stdio.h>
//void selectsort(int* p);
//int main()
//{
//    int a[10]={6,2,4,7,5,8,9,10,3,1};
//    selectsort(a);
//    for(int i=0;i<10;i++)
//    {
//        printf("%d ",a[i]);
//    }   
//    return 0;
//}
//void selectsort(int* p)
//{
//    int flag;
//    int temp;
//    for(int i=0;i<9;i++)
//    {
//        flag=i;
//        for(int j=i;j<9;j++)
//        {
//            if(*(p+j+1)<*(p+flag))
//            {
//                flag=j+1;
//            }
//        }
//        temp=*(p+i);
//        *(p+i)=*(p+flag);
//        *(p+flag)=temp;
//    }
//}
//
//
//#include <stdio.h>
//void selectsort(int* p);
//int main()
//{
//    int a[10]={6,2,4,7,5,8,9,10,3,1};
//    
//    selectsort(a);
//    
//    for(int i=0;i<10;i++)
//    {
//        printf("%d ",a[i]);
//    }
//    
//    return 0;
//}
//
//#void selectsort(int* p)
//{
//    int flag;
//    int temp;
//    for(int i=0;i<9;i++)
//    {
//        flag=i; 
//        for(int j=i;j<9;j++)
//        {
//            if(*(p+j+1)<*(p+flag))
//            {
//                flag=j+1;
//            }
//        }
//        temp=*(p+i);
//        *(p+i)=*(p+flag);
//        *(p+flag)=temp;
//    }
//}

//#include <stdio.h>
//int main( ) 
//{
//char a[20];
//int i;
//gets(a);
//for(i=0;a[i]!='\0';i++)
//if(a[i]>='A'&&a[i]<='Z')
//a[i]=a[i]+32;
//puts(a);
//return 0;
//}


//#include <stdio.h>
//#include <math.h>
//int main( ) 
//{
//	int i,a,b,c;
//	for(i=100;i<1000;i++)
//	{
//	a=i/100;
//	b=i%100/10;
//	c=i%10;
//	if((c*c*c+b*b*b+a*a*a)==i)
//	printf("%d\n",i);
//}
//}


//#include <stdio.h>
//#include <math.h>
//int main( ) 
//{
//	int a,b,c,sum,s;
//	 for(a=1;a<=9;a++)
//	 for(b=0;b<=9;b++)
//	 for(c=0;c<=9;c++)
//	 {
//	 	s=a*100+b*10+c;
//	 	sum=pow(a,3)+pow(b,3)+pow(c,3);
//		 if(s==sum) 
//		 printf("%d\n",s); 
//	 }
//}

//#include "stdio.h"
//int main() 
//{
//	int i;
//	float sum=100,h=50;
//	for(i=2;i<=10;i++)
//	{
//		sum+=2*h;
//		h=h/2;
//	 } 
//	 printf("%f,%f",sum,h);
//	 return 0;
//}


//#include "stdio.h"
//int main() 
//{
// int i=0;
// for(i;i<=200;i++)
// if(i%3==0&&(i-6)%10==0) 
// printf("%d\n",i); 
//}

//#include "stdio.h"
//int main() 
//{
//	int i,n,p=1;
//	printf("输入一个数以求阶乘：");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++);
//	{
//	p=p*i;
//	printf("%d",p);
//}
//	return 0;
//}

//#include "stdio.h"
//int main() 
//{
//	int i,j,result;
//for (i=1;i<10;i++)
//{ for(j=1;j<10;j++)
//{
//result=i*j;
//printf("%d*%d=%-3d",i,j,result);
//}
//printf("\n");
//return 0;
//}

     

//#include<stdio.h>
//int main()
//{
//long f1,f2;
//int i;
//f1=f2=1;
//for(i=1;i<=20;i++)
//{ printf("%12ld%12ld",f1,f2);
//if(i%2==0) 
//printf("\n");
//f1=f1+f2;
//f2=f1+f2;
//}


//#include <stdio.h>
//int main()
//{
//int m,i,k,h=0,leap=1;
//printf("\n");
//for(m=101;m<=200;m++)
//{
//k=sqrt(m+1);
//for(i=2;i<=k;i++)
//if(m%i==0)
//{
//leap=0;
//break;
//}
//if(leap) 
//{
//printf("%-4d",m);
//h++;
//if(h%10==0)
//printf("\n");
//}
//leap=1;
//}
//printf("\nThetotal is %d",h);
//}

//#include <stdio.h>
//main()
//{
//static int k[10];
//int i,j,n,s;
//for(j=2;j<1000;j++)
//{
//n=-1;
//s=j;
//for(i=1;i<j;i++)
//{
//if((j%i)==0)
//{ 
//n++;
//s=s-i;
//k[n]=i;
//}
//}
//if(s==0)
//{
//printf("%d is a wanshu: ",j);
//for(i=0;i<n;i++)
//printf("%d,",k[i]);
//printf("%d\n",k[n]);
//}
//}
//}


//#include <stdio.h>
//main()
//{ int a[4][4],b[4][4],i,j; 
//printf("input 16 numbers: ");
//for(i=0;i<4;i++)
//for(j=0;j<4;j++)
//{ 
//scanf("%d",&a[i][j]);
//b[3-j][i]=a[i][j];
//}
//printf("arrayb:\n");
//for(i=0;i<4;i++)
//{ 
//for(j=0;j<4;j++)
//printf("%6d",b[i][j]);
//printf("\n");
//}
//return 0;
//}

//#include <stdio.h>
//int  main()
//{
//int i,j,a[6][6];
//for(i=0;i<=5;i++)
//{
//a[i][i]=1;a[i][0]=1;
//}
//for(i=2;i<=5;i++)
//for(j=1;j<=i-1;j++)
//a[i][j]=a[i-1][j]+a[i-1][j-1];
//for(i=0;i<=5;i++)
//{
//for(j=0;j<=i;j++)
//printf("%4d",a[i][j]);
//printf("\n");
//}
//return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//main()
//{ 
//float a[4][5],sum1,sum2;
//int i,j;
//for(i=0;i<3;i++)
//for(j=0;j<4;j++)
//scanf("%f",&a[i][j]);
//for(i=0;i<3;i++)
//{
//sum1=0;
//for(j=0;j<4;j++)
//sum1+=a[i][j];
//a[i][4]=sum1/4;
//}
//for(j=0;j<5;j++)
//{
// sum2=0;
//for(i=0;i<3;i++)
//sum2+=a[i][j];
//a[3][j]=sum2/3;
//}
//for(i=0;i<4;i++)
//{
// for(j=0;j<5;j++)
//printf("%6.2f",a[i][j]);
//printf("\n");
//}
//return 0;
//}


//#include <stdio.h> 
//main()
//{  
//char  s[80],c;
//int  j,k;
//printf("\nEnter a string: ");
//gets(s);
//printf("\nEnter a character: ");
//c=getchar( );
//for(j=k=0;s[j]!= '\0';j++)
//if(s[j]!=c)
//s[k++]=s[j];
//s[k]= '\0';
//printf("\n%s",s);
//return 0;
//}


//#include "stdio.h"
//void sort(int *x,int n)
//{
//int i,j,k,t;
//for(i=0;i<10;i++)
//{
//k=i;
//for(j=i+1;j
//if(x[j]>x[k]) k=j;
//if(k!=i)
//{
//t=x[i];
//x[i]=x[k];
//x[k]=t;
//}
//}
//}
//void main()
//{
//FILE *fp;
//int *p,i,a[10];
//fp=fopen("p9_1.out","w");             
//p=a;
//printf("Input 10 numbers:");
//for(i=0;i<10;i++)
//scanf("%d",p++);
//p=a;
//sort(p,10);
//for(p;*p!='\0';p++)
//{  
//printf("%d ",*p);
//fprintf(fp,"%d ",*p);  }
//system("pause"); 
//fclose(fp);
//}


//#include "stdio.h"
//int main()
//{  
//int a[10]={0,12,17,20,25,28,30};    
//int  x , i, j=6;             
//printf("Enter a number: ");  
//scanf("%d",&x);
//a[0]=x;
//i=j;                
//while(a[i]>x)
//{  
//a[i+1]=a[i]; i--; 
//  }  
//a[++i]=x;
//j++;            
//for(i=1;i<=j;i++) 
//printf("%d",a[i]);
//printf("\n");
//return 0;
//}


//#include <stdio.h>
//replace(char *s,char c1,char c2)
//{ 
//while(*s!='\0')
//{ 
// if (*s==c1)
//*s=c2;
//s++;  
//}
//}
//main()
//{ FILE *fp; 
//char str[100],a,b;
//if((fp=fopen("p10_2.out","w"))==NULL) 
//{
// printf("cannot open the file\n");
//exit(0);           
//}
//printf("Enter a string:\n");
//gets(str);
//printf("Enter a&&b:\n");
//scanf("%c,%c",&a,&b);
//printf("%s\n",str);
//fprintf(fp,"%s\n",str);
//replace(str,a,b);
//printf("The new string is%5s\n",str);
//fprintf(fp,"The new string is%5s\n",str);
//fclose(fp);



//#include <stdio.h>
//void fun(int a[],int n)
//{int i,j,t;
//for(i=0;i<=n-1;i++)
//for(j=0;j<=n-1-i;j++) 
//if(a[j]>a[j+1]) {t=a[j];a[j]=a[j+1];a[j+1]=t;}
//}
//main()
//{int a[10]={12,45,7,8,96,4,10,48,2,46},n=10,i;
//FILE *f;
//if((f=fopen("myf2.out","w"))==NULL)
//printf("open file myf2.out failed!\n");
//fun(a,10);
//for(i=0;i<10;i++)
//{printf("M",a[i]);
//
//fprintf(f,"M",a[i]);
//}
//fclose(f);
//}


//#include <stdio.h> 
//double countpi(double eps)        
//{
//int m=1;
//double temp=1.0,s=0;
//while(temp>=eps)
//{
//  s+=temp;
//temp=temp*m/(2*m+1);
//m++;
//}
//return(2*s);
//}
//main()
//{
//FILE *fp;
//double eps=1e-5,pi;
//if((fp=fopen("p7_3.out","w"))==NULL)  
//{ 
//printf("cannot open the file\n");
//return 0;          
//}
//pi= countpi(eps);
//printf("pi=%lf\n",pi);
//fprintf(fp,"pi=%lf\n",pi);
//fclose(fp);
//}                



//#include "stdio.h" 
//#include<string.h>
// int main()
//{
// char c[200],c1;
//int i,j,k;
//printf("Enter a string: ");
//scanf("%s",c);
//k=strlen(c);
//for (i=0,j=k-1;i<k/2;i++,j--)
//{
// c1=c[i];
//c[i]=c[j];
//c[j]=c1; 
//}
//printf("%s\n",c);
//return 0;
//}


//#include "stdio.h"
//void invert(char *s)
//{
//int i,j,k;
//char t;
//k=strlen(s);
//for(i=0,j=k-1;i<k/2;i++,j--)
//{
// t=*(s+i); *(s+i)=*(s+j); *(s+j)=t; 
//}
//}
//main()
//{
//FILE *fp;
//char str[200],*p,i,j;
//if((fp=fopen("p9_2.out","w"))==NULL) 
//{
// printf("cannot open thefile\n");
//exit(0); 
//}
//printf("input str:\n");
//gets(str);
//printf(“\n%s”,str);
//fprintf(fp,“%s”,str);
//invert(str);
//printf(“\n%s”,str);
//fprintf(fp,“\n%s”,str);
//fclose(fp);
//} 


//#include<stdio.h>
//main()
//{ 
//char s[80],c;
//int j,k;
//printf("\nEnter a string: ");
//gets(s);
//printf("\nEnter a character: ");
//c=getchar( );
//for(j=k=0;s[j]!='\0';j++)
//if(s[j]!=c)
//s[k++]=s[j];
//s[k]= '\0';
//printf("\n%s",s);
//return 0;
//} 



//#include "stdio.h" 
//struct student
//{
//int num;
//char *name;
//int age ;
//struct student *next;
//};
//int main()
//{
//struct student a,b,c,*head,*p;
//a.num=1001; 
//a.name="lihua"; 
//a.age=18; 
//b.num=1002;
// b.name="liuxing";
//  b.age=19;
//c.num=1003; 
//c.name="huangke"; c.age=18;
//head=&a; 
//a.next=&b;
//b.next=&c;
//c.next=NULL;
//p=head; 
//do
//{
//printf("%5d,%s,%3d ",p->num,p->name,p->age);
//p=p->next;
//}while(p!=NULL);
//return 0;
//}


#include<stdio.h>
//int main()
//{
//int i,j,t,*p,a[3];
//printf("输入三个数字:");
//for(i=0;i<3;i++)
//scanf("%d",&a[i]);
//for(i=0;i<2;i++)
//for(j=0;j<2-i;j++)
//if(a[j]>a[j+1])
//{
//t=a[j];
//a[j]=a[j+1];
//a[j+1]=t;
//}
//printf("数字由小到大排序:\n");
//for(p=a;p<(a+3);p++)
//printf("%4d",*p);
//printf("\n");
//return 0;
//}



//#include<stdio.h>
//int main()
//char a[3][100],*t;
//char *p[3];
//p[3]={a[0],a[1],a[2]};
//int i;
//printf("请输入三个字符串:");
//for(i=0;i<3;i++)
//scanf("%s",p[i]);
//if(*p[0]>*p[1])
//{
//t=p[0];
//p[0]=p[1];
//p[1]=t;
//}
//if(*p[1]>*p[2])
//{
//t=p[1];
//p[1]=p[2];
//p[2]=t;
//}
//if(*p[0]>*p[1])
//{
//t=p[0];
//p[0]=p[1];
//p[1]=t;
//}
//printf("字符串由小到大排序:");
//for(i=0;i<3;i++)
//printf("%s ",p[i]);
//printf("\n");
//return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int i,j,k,t,a[11],sum;
//    printf("Please input 10 numbers\n");
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    for(i=0;i<10;i++)
//    {
//        printf("%d ",a[i]);
//    }
//    printf("\n");
//    printf("Please input a number:\n");
//    scanf("%d",&sum);
//    if(sum>a[9])
//    {
//        a[10]=sum;
//        for(i=0;i<11;i++)
//        {
//            printf("%d ",a[i]);
//        }
//    }
//    else if(sum<a[0])
//    {
//        a[10]=sum;
//        for(i=0;i<11;i++)
//        {
//            t=a[0];
//            a[0]=a[10];
//            a[10]=t;
//        }
//        for(i=0;i<11;i++)
//        {
//            printf("%d ",a[i]);
//        }
//    }
//    else if(sum>a[0]&&sum<a[10])
//    {
//        for(j=0;j<10;j++)
//        {
//            if(sum<a[j])
//            k=j;
//            break;
//        }
//        for(i=k;i<11;i++)
//        {
//            t=a[i];
//            a[i]=a[10];
//            a[10]=t;
//        }
//        for(i=0;i<11;i++)
//        printf("%d  ",a[i]);
//    }
//    return 0;
//}



//#include <stdio.h>
//int main()
//{
//    int x;
//    double y;
//    printf("请输入您的x值，x属于0-20：\n");
//    scanf("%d",&x);
//    if(x<5&&x>=0)
//    {
//        y=-x+2.5;
//        printf("%.3lf\n",y);
//    }
//    else if(x>=5&&x<10)
//    {
//        y=2-1.5*(x-3)*(x-3);
//        printf("%.3lf\n",y);
//    }
//    else if(x>=10&&x<20)
//    {
//        y=x/2-1.5;
//        printf("%.3lf\n",y);
//    }
//    else
//    {
//        printf("您输入的数不符合x的范围\n");
//    }
//    return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int a,b;
//    printf ("输入成绩：\n");
//    scanf("%d",&a);
//    b=a/10;
//    if(a>100||a<0)
//    {
//        printf("输入错误！\n");
//        exit(0);
//    }
//    else
//    {
//        switch(b)
//        {
//            case 10:printf("A\n");
//              break;
//            case 9: printf("A\n");
//              break;
//             case 8: printf("B\n");
//              break;
//            case 7: printf("C\n");
//                 break;
//            case 6:printf("D\n");
//                 break;
//            default :printf("E\n");
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int a,b,c,d,e;
//    printf("输入一个不多于五位的整数：\n");
//    scanf("%d",&a);
//    if(a>=100000||a<=0)
//    {
//        printf("输入格式错误！ \n");
//    }
//    else
//    {
//        if(a>=10000&&a<100000)
//        {
//            b=a/10000+a/1000%10*10+a/100%10*100+a%100/10*1000+a%100%10*10000;
//            printf("5位数，逆序为：%05d\n",b);
//        }
//        else if(a>=1000&&a<10000)
//        {
//            c=a/1000+a/100%10*10+a/10%10*100+a%10*1000;
//            printf("4位数，逆序为：%04d\n",c);
//        }
//        else if(a>=100&&a<1000)
//        {
//            d=a/100+a%100/10*10+(a%100)%10*100;
//            printf("3位数，逆序为：%03d\n",d);
//        }
//        else if(a>=10&&a<100)
//        {
//            e=a/10+a%10*10;
//            printf("2位数，逆序为：%02d\n",e);
//        }
//        else
//        {
//            printf("1位数，逆序为：%d\n",a);
//        }
//    }
//    return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int a,b,c,d,e,f;
//    printf("输入五位整数：\n");
//    scanf("%d",&a);
//    if(a<10000||a>=100000)
//    {
//        printf("输入的不是五位数！\n");
//        exit(0);
//    }
//    else
//    {
//        b=a/10000;
//        c=a/1000%10;
//        d=a/100%10;
//        e=a%100/10;
//        f=a%100%10;
//    }
//    if(b==f&&c==e)
//    {
//        printf("此为回文数\n");
//    }
//    else
//    {
//        printf("这个数不是回文数\n");
//    }
//    return 0;
//}


//#include<stdio.h> 
//int main()
//{
//    char a;
//    printf("请输入一个字符.\n");
//    a=getchar();
//    if(a>='A'&&a<='Z')
//    {
//        a=a+32;
//        putchar(a);
//    }
//    else if(a>='a'&&a<='z')
//    {
//        a=a-32;
//        putchar(a);
//    }
//    else if(a>='0'&&a<='9')
//    {
//        putchar(a);
//    }
//    else if(a==' ')
//    {
//        printf("space\n");
//    }
//    else
//    {
//        printf("other\n");
//    }
//    return 0;
//}



//#include<stdlib.h> 
//int main()
//{
//    int year,month,day,year1,month1,day1,A;
//    printf("请输入你的生日\n");
//    scanf("%d-%d-%d",&year,&month,&day);
//    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
//    {
//        if(day>=0&&day<=31)
//        {
//            printf("输入日期正确，\n"); 
//        }
//        else
//        {
//            printf("输入日期错误，重新输入.\n");
//        }
//    }
//    else if(month==4||month==6||month==9||month==11)
//    {
//        if(day>=0&&day<=30)
//        {
//            printf("输入日期正确\n");
//        }
//        else
//        {
//            printf("输入日期错误，重新输入.\n");
//        }
//    }
//    else if(month==2)
//    {
//        if(year/4==0&&year/100!=0||year/400==0)
//        {
//            if(day>=0&&day<=29)
//            {
//                printf("输入日期正确\n");
//            }
//            else
//            {
//                printf("输入日期错误，重新输入.\n");
//            }
//        }
//        else
//        {
//            if(day>=0&&day<=28)
//            {
//                printf("输入日期正确.\n");
//            }
//            else
//            {
//                printf("输入日期错误，重新输入.\n");
//            }
//        }
//    }
//    else
//    {
//        printf("输入日期错误，重新输入.\n");
//    }
//    scanf("%d-%d-%d",&year1,&month1,&day1);
//    if(month1==1||month1==3||month1==5||month1==7||month1==8||month1==10||month1==12)
//    {
//        if(day1>=0&&day1<=31)
//        {
//            printf("输入日期正确.\n");
//        }
//        else
//        {
//            printf("输入日期错误，重新输入.\n");
//            exit(0);
//        }
//    }
//    else if(month1==4||month1==6||month1==9||month1==11)
//    {
//        if(day1>=0&&day1<=30)
//        {
//            printf("输入日期正确\n");
//        }
//        else
//        {
//            printf("输入日期错误，重新输入.\n");
//            exit(0);
//        }
//    }
//    else if(month1==2)
//    {
//        if(year1/4==0&&year1/100!=0||year1/400==0)
//        {
//            if(day1>=0&&day1<=29)
//            {
//                printf("输入日期正确\n");
//            }
//            else
//            {
//                printf("输入日期错误，重新输入.\n");
//                exit(0);
//            }
//        }
//        else
//        {
//            if(day1>=0&&day1<=28)
//            {
//                printf("输入日期正确\n");
//            }
//            else
//            {
//                printf("输入日期错误，重新输入.\n");
//                exit(0);
//            }
//        }
//    }
//    else
//    {
//        printf("输入日期错误，重新输入.\n");
//        exit(0);
//    }
//    if(year<year1)
//    {
//        if(month<month1)
//        {
//            A=year1-year;
//            printf("你的周岁为%d.\n",A);
//        }
//        else if(month==month1)
//        {
//            if(day<=day1)
//            {
//                A=year1-year;
//                printf("你的周岁为%d.\n",A);
//            }
//            else
//            {
//                A=year1-year-1;
//                printf("你的周岁为%d.\n",A);
//            }
//        }
//        else
//        {
//            A=year1-year-1;
//            printf("你的周岁为%d.\n",A);
//        }
//    }
//    else if(year==year1)
//    {
//        if(month>month1)
//        {
//            printf("你的日期不合法.\n");
//        }
//        if(month==month1)
//        {
//            if(day>day1)
//            {
//                printf("你的日期不合法.\n");
//            }
//            else
//            {
//                printf("你的周岁为0.\n");
//            }
//        }
//        else
//        {
//            printf("你的周岁为0.\n");
//        }
//    }
//    else
//    {
//        printf("日期不合法.\n");
//    }
//    return 0;    
//}



//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int a,b,c,d,e;
//    printf("请输入三个整数\n");
//    scanf("%d,%d,%d",&a,&b,&c);
//    d=b+c;
//    e=fabs(b-c);
//    if(d>a&&e<a)
//    {
//        if(a==b&&b==c)
//        {
//            printf("等边三角形\n");
//        }
//        else if(a==b||b==c||a==c)
//        {
//            if(a==sqrt(b*b+c*c)||b==sqrt(a*a+c*c)||c==sqrt(b*b+a*a))
//            {
//                printf("等腰直角三角形\n");
//            }
//            else
//            {
//                printf("等腰三角形\n");
//            }
//        }
//        else if(a==sqrt(b*b+c*c)||b==sqrt(a*a+c*c)||c==sqrt(b*b+a*a))
//        {
//            printf("其能构成直角三角形.\n");
//        }
//        else
//        {
//            printf("其能构成一般三角形.\n");
//        }
//    }
//    else
//    {
//        printf("不能构成三角形.\n");
//    }
//    return 0;
//}



//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//    int a,b;
//    srand(time(NULL)); 
//    a=rand()%100+1;
//    printf("输入价格,100以内.\n");
//    scanf("%d",&b);
//    if(a==b)
//    {
//        printf("商品归你了！\n"); 
//    }
//    else if(a<b)
//    {
//        printf("猜高了，正确价格为%d.\n",a);
//}
//    else
//    {
//        printf("猜低了，正确价格为%d.\n",a);
//    }
//    return 0;
//}



//#include<stdio.h>
//int main()
//{
//    int n,x,y;
//    float a,b;
//    printf("  你买了一箱n个苹果，虫子每x小时能吃掉一个苹果，假设虫子在吃完一个苹果之前不会吃另一个，那么经过y小时你还有多少个完整的苹果？\n"); 
//    printf("请输入n x y 的值.\n");
//    scanf("%d%d%d",&n,&x,&y);
//    a=(float)y/x;
//    b=n-a;
//    if(b>=0)
//    {
//        printf("还剩%d个苹果.\n",(int)b);
//    }
//    else
//    {
//        printf("还剩0个苹果.\n"); 
//    }
//    return 0;
//}
//}



//#include<stdio.h>
//int main()
//{
//    int x,y=0,i;
//    printf("请输入一个整数：\n");
//    scanf("%d",&x);
//    if(x%2==0)
//    {
//        for(i=0;i<=x;i+=2)
//        {
//            y=y+i;
//        }
//    }
//    else if(x%2==1)
//    {
//        for(i=1;i<=x+1;i+=2)
//        {
//            y=y+i;
//        }
//    }
//     printf("对应的值为%d",y);
//     return 0;
// } 



#include<stdio.h>
int main()
{
    int x,y=0,i;
    printf("请输入一个整数：\n");
    scanf("%d",&x);
    if(x%2==0)
    {
        for(i=0;i<=x;i+=2)
        {
            y=y+i;
        }
    }
    else if(x%2==1)
    {
        for(i=1;i<=x+1;i+=2)
        {
            y=y+i;
        }
    }
     printf("对应的值为%d",y);
     return 0;
 } 
123
