//1.题目：求1+2!+3!+…+19!的和
//(1).程序分析：此程序只是把累加变成了累乘。
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





//2.题目：利用递归方法求5!。
//(1).程序分析：递归公式：fn=fn_1*4!
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






//3.题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
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





//4.题目：有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。问第4个人岁数，他说比第
// 　　　3个人大2岁。问第三个人，又说比第2人大两岁。问第2个人，说比第一个人大两岁。最后
// 　　　问第一个人，他说是10岁。请问第五个人多大？
//(1).程序分析：利用递归的方法，递归分为回推和递推两个阶段。要想知道第五个人岁数，需知道
// 　　　　　　第四人的岁数，依次类推，推到第一人（10岁），再往回推。


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







//5.题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
//(1).程序分析：学会分解出每一位数


//#include<stdio.h>
//int main()
//{
//    long a,b,c,d,e,x;
//    scanf("%ld",&x);
//    a=x/10000;               /*分解出万位*/
//    b=x%10000/1000;           /*分解出千位*/
//    c=x%1000/100;             /*分解出百位*/
//    d=x%100/10;               /*分解出十位*/
//    e=x%10;                    /*分解出个位*/
//    if (a!=0) printf("there are 5, %ld %ld %ld %ld %ld\n",e,d,c,b,a);
//    else if (b!=0) printf("there are 4, %ld %ld %ld %ld\n",e,d,c,b);
//    else if (c!=0) printf(" there are 3,%ld %ld %ld\n",e,d,c);
//    else if (d!=0) printf("there are 2, %ld %ld\n",e,d);
//    else if (e!=0) printf(" there are 1,%ld\n",e);
//    return 0;
//}





//6.题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。
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
//    if(ge==wan&&shi==qian)             /*个位等于万位并且十位等于千位*/
//        printf("this number is a huiwen\n");
//    else
//        printf("this number is not a huiwen\n");
//    return 0;
//}






//7.题目：请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续
// 　　　判断第二个字母。
//(1).程序分析：用情况语句比较好，如果第一个字母一样，则判断用情况语句或if语句判断第二个字母。



//#include<stdio.h>
//int main()
//{
//    char letter;
//    printf("please input the first letter of someday\n");
//    while((letter=getchar())!='Y')             /*当所按字母为Y时才结束*/
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





//8.题目：Press any key to change color, do you want to try it. Please hurry up!
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
//    textbackground(color);   /*设置文本的背景颜色*/
//    cprintf("This is color %d\r\n", color);
//    cprintf("Press any key to continue\r\n");
//    getch();                /*输入字符看不见*/
//  }
//}复






// 9.题目：学习gotoxy()与clrscr()函数　　　


//#include "conio.h"
//#include "stdio.h"
//void main(void)
//{
//  clrscr();         /*清屏函数*/
//  textbackground(2);
//  gotoxy(1, 5);     /*定位函数*/
//  cprintf("Output at row 5 column 1\n");
//  textbackground(3);
//  gotoxy(20, 10);
//  cprintf("Output at row 10 column 20\n");
//  getch();
//}新





10.练习函数调用（C++）


//#include<stdio.h>
//void hello_world(void)
//{
//    printf("Hello, world!\n");
//}
//void three_hellos(void)
//{
//    int counter;
//    for (counter = 1; counter <= 3; counter++)
//        hello_world();    /*调用此函数*/
//}
//int main()
//{
//    three_hellos();      /*调用此函数*/
//    return 0;
//}

 


