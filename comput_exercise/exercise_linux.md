# 计算物理-上机操作 0311
>相关课件和软件存放在北航云盘中，<font color=0099ff><b>计算物理基础-2024</b></font>文件夹下。
### 1. 北航超算连接
- ssh连接软件安装：以安装`electerm`为例
- 新建连接节点：
- 连接信息：
  1. 主机地址：
     `xxx.xx.xx.xx`；
  2. 用户名：查看`高性能计算平台`所发邮件，用户名形式为`jswljc24xx`；
  3. 密码：创建账户时，初始密码同样通过查询邮件获得(为方便管理，尽量不要进行更改)；
  4. 其余信息保持默认，点击保存并连接；后续连接时，选择保存的连接节点即可。 
### 2. linux常用命令
    linux命令的基本格式为：`命令 [选项] [参数]`。
    其中，`命令`表示要执行的操作；`选项`表示对命令的调用方式；`参数`表示命令的操作对象。
- `ls`：查看当前目录下的文件和文件夹--list；
  - `ls -a`：查看所有文件和文件夹；
  - `ls -l`：查看文件和文件夹的详细信息；
  - `ls -al`：查看所有文件和文件夹的详细信息；
- `mkdir`：创建文件夹--make directory；
  > `mkdir dir1`：创建一个名为`dir1`的文件夹$\rightarrow$`ls`查看；
- `cd`：切换目录--change directory；
  - `cd ..`：返回上一级目录；
  - `cd ~`：返回home目录；
  - `cd /`：返回home目录；
- `pwd`：查看当前目录的路径--print working directory；
- `touch`：创建文件；
  > `touch file1`：创建一个名为`file1`的文件$\rightarrow$`ls`查看；
- `vi`: 编辑文件；
    > `vi file1`：编辑`file1`文件；
  - `i`：进入编辑模式；
  - `esc`：退出编辑模式；
  - `:wq`：保存并退出；
  - `:q!`：不保存并退出；
- `rm`：删除文件或文件夹--remove；
  - `rm file1`：删除`file1`文件；
  - `rm -r dir1`：删除`dir1`文件夹；
- `cp`：复制文件或文件夹--copy；
  - `cp file1 file2`：复制`file1`文件为`file2`；
  - `cp -r dir1 dir2`：复制`dir1`文件夹为`dir2`；
- `mv`：移动文件或文件夹--move；
  - `mv file1 dir1`：将`file1`文件移动到`dir1`文件夹；
- `cat`：查看文件内容--concatenate；
  - `cat file1`：查看`file1`文件内容；
  
### 3. C 语言
- windows 下载c语言ide：`dev-c++`...；

- linux：`gcc`-编译C语言文件；
  > `gcc -o file1 file1.c`：编译`file1.c`文件为`file1`可执行文件；其中，`-o`表示输出文件名。
  > `./file1`：运行`file1`文件；

