//1.题目：将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。
// 程序分析：对n进行分解质因数，应先找到一个最小的质数k，然后按下述步骤完成： 
//(1)如果这个质数恰等于n，则说明分解质因数的过程已经结束，打印出即可。
//(2)如果n<>k，但n能被k整除，则应打印出k的值，并用n除以k的商,作为新的正整数n,
//　 重复执行第一步。
//(3)如果n不能被k整除，则用k+1作为k的值,重复执行第一步。


//#include <stdio.h>
//int main()
//{
//	int n,i,j,s=1;
//	printf("请输入正整数用于分解：");
//	scanf("%d",&n);
//	printf("%d=",n);
//for(i=2;i<n;i++)
//{
//	while(n!=i)
//	{
//		if(n%i==0)
//		{
//			printf("%d*",i);
//			n=n/i;
//		}
//		else break;
//	}
//	
//}
//printf("%d",i);
//}





//2.题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
//  程序分析：利用辗除法
  
  
//#include<stdio.h>
//int main()
//{
//	int m,n,c,t,p;
//	printf("请输入两个正整数以求最大公约数和最小公倍数：\n");
//	scanf("%d,%d",&m,&n);
//	printf("判断，大值给m，小值给n");
//	printf("\n");
//	if(m<n)
//	{
//	c=m;   
//	m=n;
//	n=c;	
//	} 
//	p=m*n;
//while(n!=0)
//	 {
//	 	t=m%n;
//	 	m=n;
//	 	n=t;
//	 }
//	 printf("最大公约数为%-5d,最小公倍数为%-5d",m,p/m);
//}






//3.题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
//  程序分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去
// 　　　　　　掉不满足条件的排列。


//#include<stdio.h>
//int main()
//{
//	int i,j,k,m=0,s;
//	printf("能组成互不相同且无重复数字的三位数有：\n");
//	for(i=1;i<=4;i++)
//	for(j=1;j<=4;j++)
//	for(k=1;k<=4;k++)
//	if(i!=j&&j!=k)
//	{
//		s=i*100+j*10+k;
//		printf("%-6d",s);
//		m++;
//		if(m%5==0)
//		printf("\n");
//	}
//	printf("共%d个数字",m); 
//}





//4.题目：企业发放的奖金根据利润提成。利润(I)低于或等于10万元时，奖金可提10%；利润高
// 　　　于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可可提
// 　　　成7.5%；20万到40万之间时，高于20万元的部分，可提成5%；40万到60万之间时高于
// 　　　40万元的部分，可提成3%；60万到100万之间时，高于60万元的部分，可提成1.5%，高于
// 　　　100万元时，超过100万元的部分按1%提成，从键盘输入当月利润I，求应发放奖金总数？
//      (1)程序分析：请利用数轴来分界，定位。注意定义时需把奖金定义成长整型。　　


//#include<stdio.h>
//int main()
//{
//	 long int i,p2,p4,p6,p10,p11;
//	 double s;
//	printf("请输入利润I(利润需大于100000元):");
//	scanf("%ld",&i);
//	p2=100000*0.1;						10万奖金 
//	p4=p2+100000*0.075;					10万奖金 +20万部分奖金 
//	p6=p4+200000*0.05;					10万奖金 +20万奖金 +40万奖金 （部分） 
//	p10=p6+200000*0.03;					10万奖金 +20万奖金 +40万奖金 +60万奖金 （部分） 
//	p11=p10+400000*0.015;               10万奖金 +20万奖金 +40万奖金 +60万奖金+100万部分 
//	if(i<=100000)  s=i+i*0.1;
//	else if(i<=200000) s=i+p2+(i-100000)*0.075;
//	else if(i<=400000) s=i+p4+(i-200000)*0.05;
//	else if(i<=600000) s=i+p6+(i-400000)*0.03;	
//	else if(i<=1000000) s=i+p10+(i-600000)*0.015;
//	else s=i+p11+(i-1000000)*0.01;
//	printf("%lf",s);
//}





//5.题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
//（1）程序分析：在10万以内判断，先将该数加上100后再开方，再将该数加上268后再开方，如果开方后
// 　　　　　　的结果满足如下条件，即是结果。请看具体分析：
 
 
// #include <stdio.h>
// #include <math.h>
// int mian( )
// {
// 	long int i,x,y;
// 	for(i=1;i<100000;i++)
// 	{
// 		x=sqrt(i+100);
// 		y=sqrt(i+268);
// 		if(x*x==i+100&&y*y==i+268)
// 		printf("%5d",i);
// 		
//	 }
//	 return 0;
//  } !



//题目：输入某年某月某日，判断这一天是这一年的第几天？
//1.程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊
// 　　　　　　情况，闰年且输入月份大于3时需考虑多加一天。

 
// #include <stdio.h>
// int main()
// {
// 	int year,month,day,flag=0,sum=0;
// 	printf("请输入年月日：\n");
// 	scanf("%d,%d,%d",&year,&month,&day);
// 	if((year%4==0&&year%100==0)||year%400==0)
// 	flag=1;
// 	switch(month)
// 	{
// 		case 1:sum=0;break;
// 		case 2:sum=31;break;
// 		case 3:sum=59;break;
// 		case 4:sum=90;break;
// 		case 5:sum=120;break;
// 		case 6:sum=151;break;
// 		case 7:sum=181;break;
// 		case 8:sum=212;break;
// 		case 9:sum=243;break;
// 		case 10:sum=273;break;
// 		case 11:sum=304;break;
// 		case 12:sum=334;break;
// 		default:printf("data error");
//	 }
//	 if(month>=3&&flag==1)
//	 sum+=day+1;
//	 else sum+=day;
//	  printf("%d",sum); 
//	  return 0;
// }
 
 
 
//#include <stdio.h>
//int main()
//{
//  int day,month,year,sum,leap;
//  printf("please input year,month,day\n");
//  scanf("%d,%d,%d",&year,&month,&day);
//  switch(month) /*先计算某月以前月份的总天数*/
//  {
//    case 1:sum=0;break;
//    case 2:sum=31;break;
//    case 3:sum=59;break;
//    case 4:sum=90;break;
//    case 5:sum=120;break;
//    case 6:sum=151;break;
//    case 7:sum=181;break;
//    case 8:sum=212;break;
//    case 9:sum=243;break;
//    case 10:sum=273;break;
//    case 11:sum=304;break;
//    case 12:sum=334;break;
//    default:printf("data error");break;
//  }
//  sum=sum+day; /*再加上某天的天数*/
//  if(year%400==0||(year%4==0&&year%100!=0)) /*判断是不是闰年*/
//    leap=1;
//  else
//    leap=0;
//  if(leap==1&&month>2) /*如果是闰年且月份大于2,总天数应该加一天*/
//    sum++;
//  printf("It is the %dth day.",sum);
//  return 0;
//}





//6.题目：输入三个整数x,y,z，请把这三个数由小到大输出。
//(1).程序分析：我们想办法把最小的数放到x上，先将x与y进行比较，如果x>y则将x与y的值进行交换，
// 　　　　　　然后再用x与z进行比较，如果x>z则将x与z的值进行交换，这样能使x最小。
 
 
//#include <stdio.h>
//int main()
//{
//	int x,y,z,t;
//	printf("请输入三个整数:\n");
//	scanf("%d%d%d",&x,&y,&z);
//	if(x>y)
//	{
//		t=x;
//		x=y;
//		y=t;
//	}
//	if(x>z)
//	{
//		t=x;
//		x=z;
//		z=t;
//	}
//	if(y>z)
//	{
//		t=y;
//		y=z;
//		z=t;
//	}
//	printf("从小到大依次排序：\n");
//	printf("%d,%d,%d",x,y,z);
//return 0;
//}


  
   


//7.题目：要求输出国际象棋棋盘。
//1.程序分析：用i控制行，j来控制列，根据i+j的和的变化来控制输出黑方格，还是白方格。
//2.程序源代码：
// 代码如下:



//#include <stdio.h>
//int main()
//{
//  int i,j;
//  for(i=0;i<8;i++)
//  {
//    for(j=0;j<8;j++)
//      if((i+j)%2==0)
//        printf("%c%c",219,219);
//      else
//        printf("  ");
//    printf("\n");
//  }
//  return 0;
//}  复




 
 
// 8.题目：打印楼梯，同时在楼梯上方打印两个笑脸。
//(1)程序分析：用i控制行，j来控制列，j根据i的变化来控制输出黑方格的个数。


//#include <stdio.h>
//int main()
//{
//  int i,j;
//  printf("\1\1\n"); /*输出两个笑脸*/
//  for(i=1;i<11;i++)
//  {
//    for(j=1;j<=i;j++)
//      printf("%c%c",219,219);
//    printf("\n");
//  }
//  return 0;
//}复 





//9.题目：古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月
// 　　　后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？(求到第40个月) 
//(1).程序分析：　兔子的规律为数列1,1,2,3,5,8,13,21…


//#include <stdio.h>
//int main()
//{
//long int  i,f1=1,f2=1,sum;
//	printf("第一个月的有%d只兔子，第二个月的有%d只兔子\n",f1,f2);
//for(i=3;i<=40;i++)
//{
//	sum=f1+f2;
//	f1=f2;
//	f2=sum ;
//	printf("第 %ld 个月有 %ld 只兔子\n",i,sum);
//}
//return 0;
//}





//10.题目：判断101-200之间有多少个素数，并输出所有素数。
//(1).程序分析：判断素数的方法：用一个数分别去除2到sqrt(这个数)，如果能被整除，
// 　　　　　　则表明此数不是素数，反之是素数。 


#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,k=0;
	printf("请判断101-200之间的素数：\n");
    for(i=101;i<=200;i++)
    {
	for(j=2;j<=sqrt(i);j++)
    	if(i%j==0) break;
    	if(j>sqrt(i))
		{
		k++;
    	printf("%5d是素数",i);
    }
    	if(k%5==0)
    	printf("\n");
    }
}
