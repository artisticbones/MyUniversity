## 2.6 复习题
1. C++ 程序的模块叫什么？
- 函数
2. 预处理器编译指令#include <iostream> 是做什么用的？
- 告知编译器在处理到该条语句时，将该语句替换成iostream文件的内容
3. using namespace std；语句做何使用？
- 可以使得程序使用 std 命名空间的定义
4. 什么语句可以用来打印短语“Hello World”，然后开始新的一行？
- cout << "Hello World" << endl;
5. 什么语句可以用来创建名为cheeses的整数变量？
- int cheeses；
6. 什么语句可以用来将值32赋给变量cheeses？
- cheeses = 32；
7. 什么语句可以用来将从键盘输入的值读入变量cheeses中？
- cin >> cheeses;
8. 什么语句可以用来打印“We have X varieties of cheeses，”，其中X为变量cheeses的当前值。
- cout << "We have " << cheeses << "varities of cheeses,";
9. 下面的函数原型指出了关于函数的那些信息？
- int froop(double t);
- void rattle(int n);
- int prune(void);
> 1. 函数有返回类型为int型,函数名称为froop，函数参数即需要接受的信息为double；
> 2. 函数无返回类型，函数名称为rattle，函数需要接受信息为int型；
> 3. 函数有返回类型为int型，函数名称为prune，函数不需要接受参数信息；
10. 定义函数时，在什么情况下不必使用关键字return？
- 在函数定义为void类型时。
11. 假设您编写的main()函数包含如下代码：
cout << "Please enter your PIN: ";
而编译器指出cout是一个未知标识符。导致这种问题的原因很可能是什么？指出三种修复这种问题的方法。
原因：
- 在文件头部没有执行#include <iostream>；
- 在函数体或者文件中没有使用using namespace std；
方法：
- 在文件头添加预处理器编译指令#include <iostream>；
- 在文件中使用using namespace std；
- 在文件中使用using namespace std::cout；
## 2.7 编程练习
1. 编写一个C++ 程序，它显示您的姓名和地址。
- PrintSelfInfo.cpp;
2. 编写一个C++ 程序，它要求用户输入一个以long为单位的距离，然后将它转换为码（一 long 等于 220 码）。
- ReverseDistance.cpp;
3. 编写一个C++ 程序，它使用3个用户定义的函数(包括main())，并生成下面的输出：
Three blind mice
Three blind mice
See how they run
See how they run
- ThreeFunction.cpp
4. 编写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月，如下所示：
Enter your age: 29
- ConvertAgetoMonth.cpp
5. 编写一个程序，其中的 main() 调用一个用户定义的函数(以摄氏温度值为参数，并返回相应的华氏温度值)。该程序按下面的格式要求用户输入摄氏温度值，并显示结果:
Please enter a Celsius value: 20
20 degrees Celsius is 68 degrees Fahrenheit.
下面是转换公式:
华氏温度 = 1.8 × 摄氏温度 + 32.0
- TemperatureConvert.cpp
6. 编写一个程序，其main()调用一个用户定义的函数(以光年值为参数，并返回对应天文单位的值)。该程序按下面的格式要求用户输入光年值，并显示结果:
Enter the number ogf light years: 4.2
4.2 light years = 265608 astronomical units.
天文单位是从地球到太阳的平均距离(约150000000 公里或93000000 英里)，光年是光一年走的距离(约10万亿公里或6万亿英里)(除太阳外，最近的恒星大约离地球4.2亿光年)。请使用double类型，转化公式为:
1光年 = 63240天文单位
- UnitConversion.cpp
7. 编写一个程序，要求用户输入小时数和分钟数。在main()函数中，将这两个值传递给一个void函数，后者以下面这样的格式显示这两个值：
Enter the number of hours: 9
Enter the number of minutes: 28
Time: 9:28
- TimeFormat.cpp