//全局变量
//全局变量是具有外部链接属性的
//static修饰全局变量的时候
//全局变量的外部链接属性就变成了内部链接属性
//其他源文件（.c）就不能在使用到这个全局变量
//static int g_val = 2023;
int g_val = 2023;

int Add(int x, int y)
{
	return(x + y);
}