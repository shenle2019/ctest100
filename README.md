
# 编译方法
假如我们写了一个hello.c 文件 可用gcc  hello.c 来编译此文件，这样gcc会自动生成一个名字为a的可执行程序。如果你下次再编译一个新的文件，gcc hello1.c      
gcc还会自动生成一个名字为a的可执行文件，并且会把原来的a覆盖。当然gcc有指定生成可执行文件名字的参数。
我们可以用gcc -o hello hello.c来编译，编译后会生成一个hello的可执行文件。gcc -c hello.c 编译后会生成一个hello.o的中间文件。
在gcc编译时加上-g参数后可以使编译程序在编译时加上以后对程序调试的信息（建议加上此选项，因为用gdb调试的时候，
如果编译时不加-g参数，在用gdb调试时所有的函数名和变量名都是内存地址，从而不利于你调试程序）。当然这只是gcc简单的使用。还有一些

- 常用的参数解释

1. 没有任何选项：gcc  helloworld.c
结果会在与helloworld.c相同的目录下产生一个a.out的可执行文件。
2. -o选项，指定输出文件名：gcc -o helloworld helloworld.c
-o意思是Output即需要指定输出的可执行文件的名称。这里的名称为helloworld。
3. -c选项，只编译，不汇编连接：gcc -c helloworld.c
 -c意思就是Compile，产生一个叫helloworld.o的目标文件
4. -S选项，产生汇编源文件：gcc -S helloworld.c
-S意思就是aSsemble，产生一个叫helloworld.s的汇编源文件
5. -E选项，预处理C源文件：gcc -E helloworld.c
-E意思就是prEprocess。输出不是送到一个文件而是标准输出。当然可以对它进行重定向：
gcc -E helloworld.c > helloworld.txt

- 优化选项

6. -O选项，基本优化：gcc -O helloworld.c
-O意思就是Optimize，产生一个经过优化的叫作a.out的可执行文件。也可以同时使用-o选项，以指定输出文件名。如：
gcc -O -o test helloworld.c
即会产生一个叫test的经过优化的可执行文件。
7. -O2选项，最大优化：gcc -O2 helloworld.c
产生一个经过最大优化的叫作a.out的可执行文件。

- 调试选项

9. -g选项，产生供gdb调试用的可执行文件：gcc -g helloworld.c
产生一个叫作a.out的可执行文件，大小明显比只用-o选项编译汇编连接后的文件大。
10. -pg选项，产生供gprof剖析用的可执行文件：gcc -pg helloworld.c
产生一个叫作a.out的执行文件，大小明显比用-g选项后产生的文件还大。
警告信息： 
 -Wall : 显示所有常用的编译警告信息。
-W    : 显示更多的常用编译警告，如：变量未使用、一些逻辑错误。
-Wconversion : 警告隐式类型转换。
-Wshadow : 警告影子变量（在代码块中再次声明已声明的变量)
-Wcast-qual ：警告指针修改了变量的修饰符。如：指针修改const变量。
-Wwrite-strings : 警告修改const字符串。
-Wtraditional : 警告ANSI编译器与传统C编译器有不同的解释。
-Werror : 即使只有警告信息，也不编译。（gcc默认：若只有警告信息，则进行编译，若有错误信息，则不编译）
建议用此参数，因为用此参数可以提示所有的错误和警告信息，有利于提高你程序的质量。

以hello.c为例子，可以设置选项生成hello.i, hello.s, hello.o以及最终的hello文件：

hello.c : 最初的源代码文件；
hello.i : 经过编译预处理的源代码；
hello.s : 汇编处理后的汇编代码；
hello.o : 编译后的目标文件，即含有最终编译出的机器码，但它里面所引用的其他文件中函数的内存位置尚未定义。

$ gcc -Wall -c -save-temps hello.c  : 生成hello.i, hello.s, hello.o
注意-Wall 选项的使用场合：仅在涉及到编译（即会生成.o文件时，用-Wall）

还有下面介绍一下makefile文件的书写：
假设我们有下面这样的一个程序，源代码如下：

```C
/* main.c */

#include "mytool1.h"
int main(int argc，char **argv)
{
mytool1_print("hello")；
}

/* mytool1.h */
#ifndef _MYTOOL_1_H
#define _MYTOOL_1_H
void mytool1_print(char *print_str)；
#endif
/* mytool1.c */
#include "mytool1.h"
void mytool1_print(char *print_str)
{
printf("This is mytool1 print %s "，print_str)；
}
/
```

当然由于这个程序很短，我们可以这样来编译:
gcc -c main.c
gcc -c mytool1.c
gcc -o main main.o mytool1.o
 

这样的话我们也可以产生main程序，而且也不是很麻烦。但是如果我们考虑一下如果有一天我们修改了其中的一个文件(比如说mytool1.c)那么我们难道还要重新输入上面的命令?也许你会说，
这个很容易解决啊，我写一个 SHELL脚本，让它帮我去完成不就可以了。是的对于这个程序来说，是可以起到作用的。但是当我们把事情想的更复杂一点，如果我们的程序有几百个源程序的时候，难道也要编译器重新一个一个的去编译?
为此，聪明的程序员们想出了一个很好的工具来做这件事情，这就是make。我们只要执行以下make，就可以把上面的问题解决掉。在我们执行make之前，
我们要先编写一个非常重要的文件。--Makefile。对于上面的那个程序来说，可能的一个Makefile的文件是：

## 这是上面那个程序的Makefile文件:
main：main.o mytool1.o

gcc -o main main.o mytool1.o

main.o：main.c mytool1.h

gcc -c main.c

mytool1.o：mytool1.c mytool1.h

gcc -c mytool1.c

 
有了这个Makefile文件，不论我们什么时候修改了源程序当中的什么文件，我们只要执行make命令，我们的编译器都只会去编译和我们修改的文件有关的文件，其它的文件它连理都不想去理的。
下面我们学习Makefile是如何编写的。
在Makefile中也#开始的行都是注释行.Makefile中最重要的是描述文件的依赖关系的说明。一般的格式是：

target：components
TAB rule

第一行表示的是依赖关系。第二行是规则。
比如说我们上面的那个Makefile文件的第二行。

main：main.o mytool1.o mytool2.o

表示我们的目标(target)main的依赖对象(components)是main.o mytool1.omytool2.o 当倚赖的对象在目标修改后修改的话，就要去执行规则一行所指定的命令。
就象我们的上面那个Makefile第三行所说的一样要执行 gcc-o main main.o mytool1.o mytool2.o 注意规则一行中的TAB表示那里是一个TAB键
Makefile有三个非常有用的变量。分别是$@，$^，$<代表的意义分别是：

$@--目标文件，$^--所有的依赖文件，$<--第一个依赖文件。
如果我们使用上面三个变量，那么我们可以简化我们的Makefile文件为：

## 这是简化后的Makefile

main：main.o mytool1.o mytool2.o

gcc -o $@ $^

main.o：main.c mytool1.h mytool2.h

gcc -c $<

mytool1.o：mytool1.c mytool1.h

gcc -c $<

mytool2.o：mytool2.c mytool2.h

gcc -c $<

经过简化后,我们的Makefile是简单了一点，不过人们有时候还想简单一点。这里我们学习一个Makefile的缺省规则

.c.o：

gcc -c $<

这个规则表示所有的 .o文件都是依赖与相应的.c文件的。例如mytool.o依赖于mytool.c这样Makefile还可以变为：

## 这是再一次简化后的Makefile

main：main.o mytool1.o mytool2.o

gcc -o $@ $^

.c.o：

gcc -c $<

好了，我们的Makefile 也差不多了，如果想知道更多的关于Makefile的规则，可以查看相应的文档。

这种模式是把函数放在单独的文件里。这样当你修改其中一个文件的话，编译程序只是再重新编译修改和相关的文件，不用都重新编译。
好，写的有点多，用心慢慢看，希望对你有所帮助。

下面主要介绍一下gdb调试程序的有关概念和使用方法：
一般来说，GDB主要帮忙你完成下面四个方面的功能：


1. 启动你的程序，可以按照你的自定义的要求随心所欲的运行程序。

2. 可让被调试的程序在你所指定的调置的断点处停住。（断点可以是条件表达式）

3. 当程序被停住时，可以检查此时你的程序中所发生的事。

4. 动态的改变你程

好了，下面做一下简单总结，用gdb调试c程序，直接键入gdb，你会直接进入gdb界面：
你可以用 help命令查看帮助，gdb命令很多，是分类的你可以 help<class> 如：help breakpoints 查看breakpoints的相关命令。进入gdb后 用 file命令载入你要调试的可执行程序。
你可以用break命令设置断点，然后用run 命令执行程序 ，当程序执行到断点处就会停止运行，你可以用next命令来next表示单步跟踪如果有函数，它不进入函数。直接执行下一步。
用step也表示单步跟踪，如果有函数，它进入函数，执行完后再接着执行下一步；
但你厌倦了一个for循环的跟踪，你可以用until来跳出整个循环体。
你可以用 info breakpoints  查看断点信息。

