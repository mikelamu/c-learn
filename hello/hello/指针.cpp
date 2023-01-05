/*
1. 定义指针 
int a = 10;
指针定义语法： 数据类型 * 指针名
int * p；
让指针记录变量a的地址
p = & a；
引用指针指向的变量 *p
*/

/*
2. 指针所占空间
32位系统下占4字节
cin<<"point takes memery space = "<< sizeof(int *) << endl;
3. 空指针
int * p = NULL;
作用：初始化指针变量 不可访问

*/
/*
常量指针 指针值可变，但指针所指的值不能变
constant int * p；
指针常量 指针所指的值可变，但指针值不能变
int * constant p；
*/