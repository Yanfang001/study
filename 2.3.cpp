//1.��Ŀ����1+2!+3!+��+19!�ĺ�
//(1).����������˳���ֻ�ǰ��ۼӱ�����۳ˡ�
//
//
//#include<stdio.h>
//int main()
//{
//    long long s=0,n,t=1;
//    for(n=1;n<=19;n++)
//    {
//        t*=n;
//        s+=t;
//    }
//    printf("1+2!+3!...+19!=%lld\n",s);
//    return 0;
//}





//2.��Ŀ�����õݹ鷽����5!��
//(1).����������ݹ鹫ʽ��fn=fn_1*4!
//
//#include<stdio.h>
//int main()
//{
//    int i;
//    int fact(int j);
//    for(i=1;i<=5;i++)
//        printf("%d!=%d\n",i,fact(i));
//    return 0;
//}
//int fact(int j)
//{
//    int sum;
//    if(j==0)
//        sum=1;
//    else
//        sum=j*fact(j-1);
//    return sum;
//}






//3.��Ŀ�����õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������
//
//
//
//#include<stdio.h>
//int main()
//{
//    int i=5;
//    void palin(int n);
//    palin(i);
//    printf("\n");
//    return 0;
//}
//void palin(int n)
//{
//  char next;
//  if(n<=1)
//  {
//    next=getchar();
//    printf("\n\0:");
//    putchar(next);
//  }
//  else
//  {
//    next=getchar();
//    palin(n-1);
//    putchar(next);
//  }
//}





//4.��Ŀ����5��������һ���ʵ�����˶����ꣿ��˵�ȵ�4���˴�2�ꡣ�ʵ�4������������˵�ȵ�
// ������3���˴�2�ꡣ�ʵ������ˣ���˵�ȵ�2�˴����ꡣ�ʵ�2���ˣ�˵�ȵ�һ���˴����ꡣ���
// �������ʵ�һ���ˣ���˵��10�ꡣ���ʵ�����˶��
//(1).������������õݹ�ķ������ݹ��Ϊ���ƺ͵��������׶Ρ�Ҫ��֪�����������������֪��
// �����������������˵��������������ƣ��Ƶ���һ�ˣ�10�꣩���������ơ�


//#include<stdio.h>
//age(int n)
//{
//  int c;
//  if(n==1) c=10;
//  else c=age(n-1)+2;
//  return(c);
//}
//int main()
//{
//    printf("%d",age(5));
//    return 0;
//}







//5.��Ŀ����һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�
//(1).���������ѧ��ֽ��ÿһλ��


//#include<stdio.h>
//int main()
//{
//    long a,b,c,d,e,x;
//    scanf("%ld",&x);
//    a=x/10000;               /*�ֽ����λ*/
//    b=x%10000/1000;           /*�ֽ��ǧλ*/
//    c=x%1000/100;             /*�ֽ����λ*/
//    d=x%100/10;               /*�ֽ��ʮλ*/
//    e=x%10;                    /*�ֽ����λ*/
//    if (a!=0) printf("there are 5, %ld %ld %ld %ld %ld\n",e,d,c,b,a);
//    else if (b!=0) printf("there are 4, %ld %ld %ld %ld\n",e,d,c,b);
//    else if (c!=0) printf(" there are 3,%ld %ld %ld\n",e,d,c);
//    else if (d!=0) printf("there are 2, %ld %ld\n",e,d);
//    else if (e!=0) printf(" there are 1,%ld\n",e);
//    return 0;
//}





//6.��Ŀ��һ��5λ�����ж����ǲ��ǻ���������12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ��
//
//
//#include<stdio.h>
//int main()
//{
//    long ge,shi,qian,wan,x;
//    scanf("%ld",&x);
//    wan=x/10000;
//    qian=x%10000/1000;
//    shi=x%100/10;
//    ge=x%10;
//    if(ge==wan&&shi==qian)             /*��λ������λ����ʮλ����ǧλ*/
//        printf("this number is a huiwen\n");
//    else
//        printf("this number is not a huiwen\n");
//    return 0;
//}






//7.��Ŀ�����������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ���������
// �������жϵڶ�����ĸ��
//(1).�����������������ȽϺã������һ����ĸһ�������ж����������if����жϵڶ�����ĸ��



//#include<stdio.h>
//int main()
//{
//    char letter;
//    printf("please input the first letter of someday\n");
//    while((letter=getchar())!='Y')             /*��������ĸΪYʱ�Ž���*/
//    {
//        switch (letter)
//        {
//        case 'S':printf("please input second letter\n");
//            if((letter=getchar())=='a')
//                printf("saturday\n");
//            else if ((letter=getchar())=='u')
//                printf("sunday\n");
//            else
//                printf("data error\n");
//        break;
//        case 'F':printf("friday\n");break;
//        case 'M':printf("monday\n");break;
//        case 'T':printf("please input second letter\n");
//            if((letter=getchar())=='u')
//                printf("tuesday\n");
//            else if ((letter=getchar())=='h')
//                printf("thursday\n");
//            else
//                printf("data error\n");
//        break;
//        case 'W':printf("wednesday\n");break;
//        default: printf("data error\n");
//        }
//    }
//    return 0;
//}





//8.��Ŀ��Press any key to change color, do you want to try it. Please hurry up!
// 
// 
// 
//#include "conio.h"
//#include "stdio.h"
//void main(void)
//{
//  int color;
//  for (color = 0; color < 8; color++)
//  {
//    textbackground(color);   /*�����ı��ı�����ɫ*/
//    cprintf("This is color %d\r\n", color);
//    cprintf("Press any key to continue\r\n");
//    getch();                /*�����ַ�������*/
//  }
//}��






// 9.��Ŀ��ѧϰgotoxy()��clrscr()����������


//#include "conio.h"
//#include "stdio.h"
//void main(void)
//{
//  clrscr();         /*��������*/
//  textbackground(2);
//  gotoxy(1, 5);     /*��λ����*/
//  cprintf("Output at row 5 column 1\n");
//  textbackground(3);
//  gotoxy(20, 10);
//  cprintf("Output at row 10 column 20\n");
//  getch();
//}��





10.��ϰ�������ã�C++��


//#include<stdio.h>
//void hello_world(void)
//{
//    printf("Hello, world!\n");
//}
//void three_hellos(void)
//{
//    int counter;
//    for (counter = 1; counter <= 3; counter++)
//        hello_world();    /*���ô˺���*/
//}
//int main()
//{
//    three_hellos();      /*���ô˺���*/
//    return 0;
//}

 


