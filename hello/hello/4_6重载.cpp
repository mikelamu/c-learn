/*
	继承：面向对象三大特性之一
		下级成员具有上级别成员的一些共性
		语法：class 子类名: 继承方式 父类名
		继承方式：
			1、公共继承public
				父类public、protected权限不变，private不被继承
			2、保护继承protected
				父类public、protected权限都变为protected，private不被继承
			3、私有继承private
				父类public、protected权限都变为private，private不被继承
		继承中的对象模型：
			父类的所有非静态成员属性都会被子类继承
			父类私有属性被编译器隐藏无法访问
			查看单个类的布局
				vs开发人员命令提示符
				cd到目录下， c1 /d1 reportSingleClassLayout 需要查看的类名
*/