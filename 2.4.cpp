1.题目：文本颜色设置


//#include "stdio.h"
//#include "conio.h"
//void main(void)
//{
//  int color;
//  for (color = 1; color < 16; color++)
//  {
//    textcolor(color);/*设置文本颜色*/
//    cprintf("This is color %d\r\n", color);
//  }
//  textcolor(128 + 15);
//  cprintf("This is blinking\r\n");
//  getch();
//}





//2.题目：求100之内的素数


//#include<stdio.h>
//#include<math.h>
//#define N 101
//int main()
//{
//    int i,j,line,a[N],k;
//    for(k=2;k<N;k++)
//    {
//        for(i=2;i<=sqrt(k);i++)
//        {
//            if(k%i==0)
//                break;
//        }
//        if(i==(int)sqrt(k)+1)
//            printf("%d ",k);
//    }
//    return 0;
//}





//3.题目：对10个数进行排序
//(1).程序分析：可以利用选择法，即从后9个比较过程中，选择一个最小的与第一个元素交换，
// 　　　　　　下次类推，即用第二个元素与后8个进行比较，并进行交换。


//#include<stdio.h>
//int main()
//{
//    int a[10],i,j,t;
//    printf("请输入10个数：");
//    for(i=0;i<10;i++)
//        scanf("%d",&a[i]);
//    for(i=0;i<9;i++)
//        for(j=0;j<9-i;j++)
//            if(a[j]>a[j+1])
//            {
//                t=a[j];
//                a[j]=a[j+1];
//                a[j+1]=t;
//            }
//    for(i=0;i<10;i++)
//        printf("%d ",a[i]);
//    return 0;
//} 






//3.题目：求一个3*3矩阵对角线元素之和
//(1).程序分析：利用双重for循环控制输入二维数组，再将a累加后输出。



//#include "stdio.h"
//#include "conio.h"
//static void dummyfloat(float *x)
//{ 
//float y;
// dummyfloat(&y);
// }
//main()
//{
//  float a[3][3],sum=0;
//  int i,j;
//  printf("please input rectangle element:\n");
//  for(i=0;i<3;i++)
//    for(j=0;j<3;j++)
//      scanf("%f",&a[j]);
//  for(i=0;i<3;i++)
//    sum=sum+a;
//  printf("duijiaoxian he is %6.2f",sum);
//  getch();
//}






//4.题目：有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
//(1).程序分析：首先判断此数是否大于最后一个数，然后再考虑插入中间的数的情况，插入后
// 　　　　　此元素之后的数，依次后移一个位置。



//#include<stdio.h>
//int main()
//{
//    int a[11]={1,4,6,9,13,16,19,28,40,100},i,j,t,d;
//    scanf("%d",&a[10]);
//    if(a[0]>a[9])
//        d=1;
//    else
//        d=0;
//    for(i=0;i<10;i++)
//        for(j=0;j<10-i;j++)
//            if(a[j]>a[j+1])
//            {
//                t=a[j];
//                a[j]=a[j+1];
//                a[j+1]=t;
//            }
//    if(d==0)
//        for(i=0;i<11;i++)
//            printf("%d ",a[i]);
//    else
//        for(i=10;i>=0;i--)
//            printf("%d ",a[i]);
//    return 0;
//}





//5.题目：将一个数组逆序输出。
//(1).程序分析：用第一个与最后一个交换。


//#include "stdio.h"
//#include "conio.h"
//#define N 5
//main()
//{
//  int a[N]={9,6,5,4,1},i,temp;
//  printf("\n original array:\n");
//  for(i=0;i<N;i++)
//    printf("%4d",a);
//  for(i=0;i<N/2;i++)
//  {
//    temp=a;
//    a=a[N-i-1];
//    a[N-i-1]=temp;
//  }
//  printf("\n sorted array:\n");
//  for(i=0;i<N;i++)
//    printf("%4d",a);
//  getch();
//}








//6.题目：学习static定义静态变量的用法　　


//#include "stdio.h"
//#include "conio.h"
//#define N 5
//main()
//{
//  int a[N]={9,6,5,4,1},i,temp;
//  printf("\n original array:\n");
//  for(i=0;i<N;i++)
//    printf("%4d",a);
//  for(i=0;i<N/2;i++)
//  {
//    temp=a;
//    a=a[N-i-1];
//    a[N-i-1]=temp;
//  }
//  printf("\n sorted array:\n");
//  for(i=0;i<N;i++)
//    printf("%4d",a);
//  getch();
//}






//7.题目：学习static定义静态变量的用法　　　


//#include "stdio.h"
//#include "conio.h"
//main()
//{
//  int i,num;
//  num=2;
//  for(i=0;i<3;i++)
//  {
//    printf("The num equal %d \n",num);
//    num++;
//    {
//      auto int num=1;
//      printf(" The internal block num equal %d \n",num);
//      num++;
//    }
//  }
//  getch();
//}





//8.题目：学习使用external的用法。


//#include "stdio.h"
//#include "conio.h"
//int a,b,c;
//void add()
//{
//  int a;
//  a=3;
//  c=a+b;
//}
//void main()
//{
//  a=b=4;
//  add();
//  printf("The value of c is equal to %d\n",c);
//  getch();
//}






9.题目：学习使用register定义变量的方法。


//#include "stdio.h"
//#include "conio.h"
//void main()
//{
//  register int i;
//  int tmp=0;
//  for(i=1;i<=100;i++)
//  tmp+=i;
//  printf("The sum is %d\n",tmp);
//  getch();
//}








10.判断某人是否属于肥胖体型。根据身高与体重因素，医务工作者经广泛的调查
分析给出了以下按“体指数”对肥胖程度的划分：体指数t=w/h*h（w为体重，
单位为kg，h为身高，单位为m）。当t<18时，为低体重；当t介于18和25
之间时，为正常体重；当t介于25和27之间时，为超重体重；当t≧27时，
为肥胖。编程从键盘输入你的身高h和体重w，根据上式，判断体重类型。


#include<stdio.h>
int main()
{
   double t,w,h;
   scanf("%lf%lf",&w,&h);
   t=w/h*h;
   if(t<18) printf("低体重");
   else if(t>=18&&t<25)printf("正常体重");
   else if(t>=25&&t<27)printf("超重体重");
   else printf("肥胖");
   return 0;
}


