//1.��Ŀ����ӡ�����еġ�ˮ�ɻ���������ν��ˮ�ɻ�������ָһ����λ�������λ���������͵��ڸ���
// ���������������磺153��һ����ˮ�ɻ���������Ϊ153=1�����η���5�����η���3�����η���
//(1).�������������forѭ������100-999������ÿ�����ֽ����λ��ʮλ����λ��


//#include<stdio.h>
//int main()
//{
//	int i,j,a,b,c;
//	printf("���ӡ��100-999��ˮ�ɻ���");
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






//2.��Ŀ�����������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ
// ������60�����µ���C��ʾ
//(1).���������(a>b)?a:b��������������Ļ������ӡ�


//#include <stdio.h>
//int main()
//{
//	int score;
//	
//	printf("������ѧ���ɼ�");
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






//3.��Ŀ������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
//(1).�������������while���,����Ϊ������ַ���Ϊ��\n��.


//#include <stdio.h>
//int main()
//{
//	char a[50];
//	int i=1,y=0,s=0,k=0,q=0;
//	printf("������һ���ַ�:\n"); 
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
//   printf("Ӣ����%d����������%d�����ո���%d����������%d��",y,s,k,q);
//   return 0;
//	
//}





//4.��Ŀ����s=a+aa+aaa+aaaa+aa��a��ֵ������a��һ�����֡�����2+22+222+2222+22222(��ʱ
// ����������5�������)������������м��̿��ơ�
//(1).����������ؼ��Ǽ����ÿһ���ֵ��


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






//5.��Ŀ��һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ��������������6=1��2��3.���
// �������ҳ�1000���ڵ�����������


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






//6.��Ŀ��һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£�������
// ��������10�����ʱ�������������ף���10�η�����ߣ�
 


//#include<stdio.h>
//int main()
//{
//    float sn=100.0,hn=sn/2;
//    int n;
//    for(n=2;n<=10;n++)
//    {
//        sn=sn+2*hn;    /*��n�����ʱ������������*/
//        hn=hn/2;        /*��n�η����߶�*/
//    }
//    printf("the total of road is %f\n",sn);
//    printf("the tenth is %f meter\n",hn);
//    return 0;
//}





//7.��Ŀ�����ӳ������⣺���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬����񫣬�ֶ����һ��
// �������ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ�����Ժ�ÿ�����϶�����ǰһ��ʣ��
// ��������һ����һ��������10���������ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ�˶��١�
//(1).�����������ȡ����˼ά�ķ������Ӻ���ǰ�ƶϡ�
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
//        x1=(x2+1)*2;/*��һ����������ǵ�2����������1���2��*/
//        x2=x1;
//        day--;
//    }
//    printf("the total is %d\n",x1);
//    return 0;
//}





//8.��Ŀ������ƹ����ӽ��б������������ˡ��׶�Ϊa,b,c���ˣ��Ҷ�Ϊx,y,z���ˡ��ѳ�ǩ����
// �����������������������Ա����������������a˵������x�ȣ�c˵������x,z�ȣ��������ҳ�
// �������������ֵ�������


//#include<stdio.h>
//int main()
//{
//    char i,j,k;/*i��a�Ķ��֣�j��b�Ķ��֣�k��c�Ķ���*/
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





//9.��Ŀ����ӡ������ͼ�������Σ�
//����������Ȱ�ͼ�ηֳ���������������ǰ����һ�����ɣ�������һ�����ɣ�����˫��
// ������������forѭ������һ������У��ڶ�������С�



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






//10.��Ŀ����һ�������У�2/1��3/2��5/3��8/5��13/8��21/13�����������е�ǰ20��֮�͡�
//1.�����������ץס�������ĸ�ı仯���ɡ�


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





