1.��Ŀ���ı���ɫ����


//#include "stdio.h"
//#include "conio.h"
//void main(void)
//{
//  int color;
//  for (color = 1; color < 16; color++)
//  {
//    textcolor(color);/*�����ı���ɫ*/
//    cprintf("This is color %d\r\n", color);
//  }
//  textcolor(128 + 15);
//  cprintf("This is blinking\r\n");
//  getch();
//}





//2.��Ŀ����100֮�ڵ�����


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





//3.��Ŀ����10������������
//(1).�����������������ѡ�񷨣����Ӻ�9���ȽϹ����У�ѡ��һ����С�����һ��Ԫ�ؽ�����
// �������������´����ƣ����õڶ���Ԫ�����8�����бȽϣ������н�����


//#include<stdio.h>
//int main()
//{
//    int a[10],i,j,t;
//    printf("������10������");
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






//3.��Ŀ����һ��3*3����Խ���Ԫ��֮��
//(1).�������������˫��forѭ�����������ά���飬�ٽ�a�ۼӺ������



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






//4.��Ŀ����һ���Ѿ��ź�������顣������һ������Ҫ��ԭ���Ĺ��ɽ������������С�
//(1).��������������жϴ����Ƿ�������һ������Ȼ���ٿ��ǲ����м����������������
// ������������Ԫ��֮����������κ���һ��λ�á�



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





//5.��Ŀ����һ���������������
//(1).����������õ�һ�������һ��������


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








//6.��Ŀ��ѧϰstatic���徲̬�������÷�����


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






//7.��Ŀ��ѧϰstatic���徲̬�������÷�������


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





//8.��Ŀ��ѧϰʹ��external���÷���


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






9.��Ŀ��ѧϰʹ��register��������ķ�����


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








10.�ж�ĳ���Ƿ����ڷ������͡�����������������أ�ҽ�����߾��㷺�ĵ���
�������������°�����ָ�����Է��̶ֳȵĻ��֣���ָ��t=w/h*h��wΪ���أ�
��λΪkg��hΪ��ߣ���λΪm������t<18ʱ��Ϊ�����أ���t����18��25
֮��ʱ��Ϊ�������أ���t����25��27֮��ʱ��Ϊ�������أ���t�R27ʱ��
Ϊ���֡���̴Ӽ�������������h������w��������ʽ���ж��������͡�


#include<stdio.h>
int main()
{
   double t,w,h;
   scanf("%lf%lf",&w,&h);
   t=w/h*h;
   if(t<18) printf("������");
   else if(t>=18&&t<25)printf("��������");
   else if(t>=25&&t<27)printf("��������");
   else printf("����");
   return 0;
}


