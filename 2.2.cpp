//1.题目：打印出所有的“水仙花数”，所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数
// 　　　本身。例如：153是一个“水仙花数”，因为153=1的三次方＋5的三次方＋3的三次方。
//(1).程序分析：利用for循环控制100-999个数，每个数分解出个位，十位，百位。


//#include<stdio.h>
//int main()
//{
//	int i,j,a,b,c;
//	printf("请打印出100-999的水仙花数");
//	for(i=100;i<1000;i++)
//	{
//		a=i/100;
//		b=i/10%10;
//		c=i%10;
//		j=a*a*a+b*b*b+c*c*c;
//		if(i==j)
//		printf("%5d",i);
//	
//	}
//
//return 0;
//
//}






//2.题目：利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示
// 　　　60分以下的用C表示
//(1).程序分析：(a>b)?a:b这是条件运算符的基本例子。


//#include <stdio.h>
//int main()
//{
//	int score;
//	
//	printf("请输入学生成绩");
//	scanf("%d",&score);
//	score>=90?printf("A"):(score>=60?printf("B"):printf("c"));
//	return 0;
//	
//}!


//#include<stdio.h>
//int main()
//{
//  int score;
//  char grade;
//  printf("please input a score\n");
//  scanf("%d",&score);
//  grade=score>=90?'A':(score>=60?'B':'C');
//  printf("%d belongs to %c",score,grade);
//  return 0;
//}






//3.题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
//(1).程序分析：利用while语句,条件为输入的字符不为’\n’.


//#include <stdio.h>
//int main()
//{
//	char a[50];
//	int i=1,y=0,s=0,k=0,q=0;
//	printf("请输入一行字符:\n"); 
//	scanf("%c",&a[0]);
//	while(a[i++]!='\n'&&i<50)
//	{
//	scanf("%c",&a[i]);
//	}
//	i=0;
//   while(a[i]!='\n')
//   {
//   	if(a[i]>='a'&&a[i]<='z'||(a[i]>='A'&&a[i]<='Z'))
//   	y++;
//   	if(a[i]>='0'&&a[i]<='9') 
//   	s++;
//   	if(a[i]=' ')
//   	k++;
//   	else q++;
//   	i++;	
//   }
//   printf("英文有%d个，数字有%d个，空格有%d个，其他有%d个",y,s,k,q);
//   return 0;
//	
//}





//4.题目：求s=a+aa+aaa+aaaa+aa…a的值，其中a是一个数字。例如2+22+222+2222+22222(此时
// 　　　共有5个数相加)，几个数相加有键盘控制。
//(1).程序分析：关键是计算出每一项的值。


//#include<stdio.h>
//int main()
//{
//  int a,n,count=1;
//  long int sn=0,tn=0;
//  printf("please input a and n\n");
//  scanf("%d %d",&a,&n);
//  printf("a=%d,n=%d\n",a,n);
//  while(count<=n)
//  {
//    tn=tn+a;
//    sn=sn+tn;
//    a=a*10;
//    ++count;
//  }
//  printf("a+aa+...=%ld\n",sn);
//  return 0;
//}






//5.题目：一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6=1＋2＋3.编程
// 　　　找出1000以内的所有完数。


//#include<stdio.h>
//int main()
//{
//    static int k[10];
//    int i,j,n,s;
//    for(j=2;j<1000;j++)
//    {
//        n=-1;
//        s=j;
//        for(i=1;i<j;i++)
//        {
//            if((j%i)==0)
//            {
//                n++;
//                s=s-i;
//                k[n]=i;
//            }
//        }
//        if(s==0)
//        {
//            printf("%d is a wanshu",j);
//            for(i=0;i<n;i++)
//                printf("%d,",k[i]);
//            printf("%d\n",k[n]);
//        }
//    }
//    return 0;
//}






//6.题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在
// 　　　第10次落地时，共经过多少米？第10次反弹多高？
 


//#include<stdio.h>
//int main()
//{
//    float sn=100.0,hn=sn/2;
//    int n;
//    for(n=2;n<=10;n++)
//    {
//        sn=sn+2*hn;    /*第n次落地时共经过的米数*/
//        hn=hn/2;        /*第n次反跳高度*/
//    }
//    printf("the total of road is %f\n",sn);
//    printf("the tenth is %f meter\n",hn);
//    return 0;
//}





//7.题目：猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个
// 　　　第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下
// 　　　的一半零一个。到第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。
//(1).程序分析：采取逆向思维的方法，从后往前推断。
//
//
//include<stdio.h>
//int main()
//{
//    int day,x1,x2;
//    day=9;
//    x2=1;
//    while(day>0)
//    {
//        x1=(x2+1)*2;/*第一天的桃子数是第2天桃子数加1后的2倍*/
//        x2=x1;
//        day--;
//    }
//    printf("the total is %d\n",x1);
//    return 0;
//}





//8.题目：两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。已抽签决定
// 　　　比赛名单。有人向队员打听比赛的名单。a说他不和x比，c说他不和x,z比，请编程序找出
// 　　　三队赛手的名单。


//#include<stdio.h>
//int main()
//{
//    char i,j,k;/*i是a的对手，j是b的对手，k是c的对手*/
//    for(i='x';i<='z';i++)
//        for(j='x';j<='z';j++)
//        {
//            if(i!=j)
//            for(k='x';k<='z';k++)
//            {
//                if(i!=k&&j!=k)
//                {
//                    if(i!='x'&&k!='x'&&k!='z')
//                    printf("order is a--%c\tb--%c\tc--%c\n",i,j,k);
//                }
//            }
//        }
//    return 0;
//}





//9.题目：打印出如下图案（菱形）
//程序分析：先把图形分成两部分来看待，前四行一个规律，后三行一个规律，利用双重
// 　　　　　　for循环，第一层控制行，第二层控制列。



//#include<stdio.h>
//int main()
//{
//    int i,j,k;
//    for(i=0;i<=3;i++)
//    {
//        for(j=0;j<=2-i;j++)
//            printf(" ");
//        for(k=0;k<=2*i;k++)
//            printf("*");
//        printf("\n");
//    }
//    for(i=0;i<=2;i++)
//    {
//        for(j=0;j<=i;j++)
//            printf(" ");
//        for(k=0;k<=4-2*i;k++)
//            printf("*");
//        printf("\n");
//    }
//    return 0;
//}






//10.题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13…求出这个数列的前20项之和。
//1.程序分析：请抓住分子与分母的变化规律。


//#include<stdio.h>
//int main()
//{
//    int n,t,number=20;
//    float a=2,b=1,s=0;
//    for(n=1;n<=number;n++)
//    {
//        s=s+a/b;
//        t=a;a=a+b;b=t;
//    }
//    printf("sum is %9.6f\n",s);
//    return 0;
//}






