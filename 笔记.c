//
//  main.c
//  C_exercise
//
//  Created by GeekJason on 2019/1/5.
//  Copyright © 2019年 GeekJason. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
//------
#define _FILE_ ;//宏名后必须留空白 //表示当前文件名
#define _DATE_ ;//MM DD YYYY
#define _TIME_ ;//HH:MM:SS
#define _LINE_ ;//now line
#define _STDC_ ;//if ANSI ->1
//------
#define ADD(x) ((x)+(x))//无宏陷阱写法



int shuixianhua(int x)
{
    int ge,shi,bai;
    ge = x % 10;
    shi = x/10%10;
    bai = x/100;
    if(ge*ge*ge+shi*shi*shi+bai*bai*bai == x)
    {
        return 1;
        
    }
    else
    {
        return 0;
    }
}


void qiupingfang()
{
    int a = 1,b = 4,c = 4;
    double x1,x2;
    printf("请输入一元二次方程的三个系数:\n");
    scanf("%d,%d,%d",&a,&b,&c);
    x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
    x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
    printf("一元二次方程的两个实数根：\n");
    printf("x1= %.2f\n",x1);
    // return 0;
}

void add()
{
    int number1,number2;
    int sum;
    printf("请输入\n");
    scanf("%d%d",&number1,&number2);
    sum = number1 + number2;
    printf("%d+%d = %d\n",number1,number2,sum);
    
}


void compare()
{
    int a,b,c;
    printf("\n 请输入三个数");
    scanf("%d,%d,%d",&a,&b,&c);
    printf("\na = %d,b = %d,c = %d\n",a,b,c);
    // return 0 ;
}

void xiaoshu()
{
    float x = 123456.789;
    double y = 123456789.123456;
    printf("x = %f,y = % f\n",x,y);
    
}

void xiaoshu2()
{
    float x = 123.456;
    printf("%f\n %10f\n %10.2f\n %.2f\n %-10.2f\n",x,x,x,x,x);
    
}

void zhishu()
{
    float f = 1234.567;
    printf("%e\n",f);
    
}
void leixing()
{
    double result;
    char ch = 'A';
    int i = 2;
    float f = 2.3f;
    double d = 3.4;
    result = (ch/i)+(f*d)-(f+1.5);
    printf("result = %f\n",result);
    
}

void leixingzhuanhuan()
{
    int a = 3 , b = 5;
    float c = 3.6f;
    b = a+(int)c;
    
    printf("b = %d\n",b);
    
}

int getRandNum()
{
    //    srand(time(NULL));//随机数种子
    return rand();
}

double areaOfTriangle(double a,double b,double c)
{
    double area;
    double s;
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}

int main()
{
    // insert code here...
    printf("Hello, World!\n");
    printf("File : %s\n", __FILE__);
    int a = 0;
    a = ADD(2)*ADD(2) ;
    
    printf("%d\n",a);
    //add();
    //compare();
    //    xiaoshu();
    //    xiaoshu2();
    //    zhishu();
    //    qiupingfang();
    //leixing();
    leixingzhuanhuan();
    int x = getRandNum();
    printf("%d\n",x);
    
    //    double x1,y1,z1;
    //    double area;
    //    printf("请输入三边边长：");
    //    scanf("%lf,%lf,%lf",&x1,&y1,&z1);
    //    area = areaOfTriangle(x1, y1, z1);
    //    printf("%lf\n",area);
    int n;
    int is;
    printf("请输入一个三位的整数:\n");
    scanf("%d\n",&n);
    is = shuixianhua(n);
    if(is)
    {
        printf("%d是水仙花数\n",n);
        
    }
    else
    {
        printf("%d不是水仙花数\t",n);
    }
    return 0;
    
}


