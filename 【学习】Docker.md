# 【笔记】Docker的使用方法

## 安装Docker
### 环境查看
1. 查看系统内核版本

        uname -r
2. 查看系统版本信息

        cat /etc/os-release
### 安装
帮助文档:
        
        https://docs.docker.com/get-started/overview/
1. 卸载旧的版本

        yum remove docker \
                        docker-client \
                        docker-client-latest \
                        docker-common \
                        docker-latest \
                        docker-latest-logrotate \
                        docker-logrotate \
                        docker-engine
2. 安装需要的依赖
        
        yum install -y yum-utils
3. 设置镜像的仓库
    
        yum-config-manager \
           --add-repo \
           https://mirrors.aliyun.com/docker-ce/linux/centos/docker-ce.repo
4. 更新yum软件索引
   
        yum makecache fast
5. 安装docker相关的内容  -ce 社区版 -ee 企业版
   
        yum install docker-ce docker-ce-cli containerd.io
    安装指定版本的docker

        yum install docker-ce-<VERSION_STRING> docker-ce-cli-<VERSION_STRING> containerd.io
6. 启动docker
   
        systemctl start docker
7. 检查安装是否成功

        docker version
8. 测试docker

        docker run hello-world
9. 查看镜像

        docker images
10. 卸载docker

        yum remove docker-ce docker-ce-cli containerd.io
        rm -rf /var/lib/docker
        rm -rf /var/lib/containerd
## Docker的常用命令
### 帮助命令

1. 显示docker的系统信息
   
        docker info
2. docker的帮助命令

        docker 命令 --help
    相关命令行地址

        https://docs.docker.com/reference/
### 镜像命令
1. 查看所有本地的主机上的镜像

        docker images
    解释:

        REPOSITORY 镜像的仓库源
        
        TAG        镜像的标签

        IMAGE ID   镜像的id

        CREATED    镜像的创建时间

        SIZE       镜像的大小

    可选项：

        -a, --all   列出所有镜像
        -q, --quiet 只显示镜像id

2. 搜索镜像

        docker search 镜像名称

    可选项：

        --filter=STARS=3000 搜索出来收藏大于3000的镜像

3. 下载镜像

        docker pull 镜像名称

    可选项：

        docker pull 镜像名称[:tag]
        docker pull mysql:5.7
4. 删除镜像

        docker rmi -f 镜像id或镜像名称

    删除多个镜像

        docker rmi -f 镜像id 镜像id 镜像id 镜像id 镜像id

    删除全部镜像

        docker rmi -f $(docker images -aq)
### 容器命令

1. 新建容器并启动

        docker run [可选参数] iamge
    
    参数说明：

        --name=="Name" 容器名字
        -d             后台方式运行
        -it            使用交互方式运行，进入容器查看内容
        -p             指定容器的端口 -p 8080:8080
            -p ip:主机端口:容器端口
            -p 主机端口:容器端口
            -p 容器端口
            容器端口
        -p             随机指定端口
    测试

        docker run -it centos /bin/bash
2. 查看正在运行的容器

        docker ps
    可选项：

        -a, --all 列出正在运行的容器+历史运行过的容器
        -n=?      显示最近创建的容器
        -q        只显示容器的编号
3. 退出容器

    容器直接停止并退出

        exit

    容器不停止并退出

        Ctrl+p+q 
4. 删除容器

    删除指定的容器

        docker rm 容器id

    删除全部容器

        docker rm -f $(docker ps -aq)
        docker ps -a -q|xargs docker rm
5. 启动和停止容器
   
    启动容器

        docker start 容器id

    重启容器

        docker restart 容器id

    停止当前正在运行的容器

        docker stop 容器id

    强制停止当前容器

        docker kill 容器id
### 常用的其他命令
1. 后台启动容器

        docker run -d 镜像名

    docker发现没有前台应用，就会停止容器
2. 查看日志

        docker logs
    参数说明

        -tf           显示日志
        --tail number 显示日志条数
    测试

        docker run -d centos /bin/bash -c "while true;do echo zhangmingwu;sleep 1;done"
        docker logs -tf --tail 10 容器id
3. 查看容器中的内部进程信息

        docker top 容器id
        ps -ef

4. 查看镜像的元数据

        docker inspect 容器id
5. 进入当前正在运行的容器
   
    进入容器后开启一个新的终端，可以在里面操作

        docker exec -it 容器id /bin/bash

    进入容器正在执行的终端，不会启动新的进程

        docker attach 容器id 
6. 从容器拷贝文件到主机
        
        docker cp 容器id:容器内路径 主机的目的路径

![avatar](./docker小结1.jpg)
![avatar](./docker小结2.jpg)
![avatar](./docker小结3.jpg)

7. 其他命令

        docker run -d --name nginx01 -p 3344:80 nginx
    
    参数解释:

        -d     后台运行
        --name 给容器命名
        -p     宿主机端口:容器内部端口

    本机自测:

        curl localhost:3344 

    软件的配置文件:

        whereis nginx

    查看cpu的状态

        docker stats
## Docker镜像
### commit镜像
1. 提交容器成为一个新的副本

            docker commit -m="提交的描述信息" -a="作者" 容器id 目标镜像名:[TAG]
## 容器数据卷
### 使用数据卷

1. 使用命令指定路径挂载 -v

        docker run -it -v 主机目录:容器内目录

    测试:

        docker run -it -v /home/ceshi:/home centos /bin/bash
2. 匿名挂载

    -v 容器内路径

        docker run -d -P --name nginx01 -v /etc/nginx nginx
    查看所有的volume的情况

        docker volume ls
3. 具名挂载

    -v 卷名:容器内路径

        docker run -d -P --name nginx02 -v juming-nginx:/etc/nginx nginx
    查看挂载位置

        docker volume inspect juming-nginx
4. 拓展

    ro:readonly  只能通过宿主机来操作

    rw:readwrite

        docker run -d -P --name nginx02 -v juming-nginx:/etc/nginx:ro nginx
        docker run -d -P --name nginx02 -v juming-nginx:/etc/nginx:rw nginx
## DockerFile
1. 编写dockerfile生成镜像

        FROM centos
        VOLUME ["volume01","volume02"]
        CMD echo "-----end-----"
        CMD /bin/bash
    建造镜像

        docker build -f dockerfile的路径 -t 镜像名:[TAG] .
2. 数据卷容器
    实现两个容器数据同步

        docker run -d -p 3310:3306 -v /etc/mysql/conf.d -v /var/lib/mysql -e MYSQL_ROOT_PASSWORD=123456 --name mysql01 mysql:5.7
        docker run -d -p 3310:3306 -e MYSQL_ROOT_PASSWORD=123456 --name mysql02 --volumes-from mysql01 mysql:5.7
3. DockerFile的指令

        FROM       基础镜像，一切从这里开始
        MAINTAINER 镜像是谁写的，姓名+邮箱
        RUN        镜像构建的时候需要运行的命令
        ADD        步骤:tomcat镜像，这个tomcat压缩包！添加内容
        WORKDIR    镜像的工作目录
        VOLUME     挂载的目录
        EXPOSE     保留端口配置
        CMD        指定这个容器启动时要运行的命令，只有最后一个会生效，可被替代
        EXTRYPOINT 指定这个容器启动时要运行的命令，可以追加命令
        ONBUILD    当构建一个被继承DockerFile 这个时候会运行 ONBUILD指令，触发指令
        COPY       类似ADD，将文件拷贝到镜像中
        ENV        构建的时候设置环境变量
4. 创建自己的镜像

    编写dockerfile文件

        FROM centos
        MAINTAINER xiaming<1327611048@qq.com>

        ENV MYPATH /usr/local
        WORKDIR $MYPATH

        RUN yum -y install vim
        RUM yum -y install net-tools

        EXPOSE 80

        CMD echo $MYPATH
        CMD echo "-----end-----"
        CMD /bin/bash
    查看历史创建过程

        docker history 镜像id
5. 创建自己的tomcat镜像

        FROM centos
        MAINTAINER xiaming<1327611048@qq.com>

        COPY readme.txt /usr/local/readme.txt
        ADD *.gz /usr/local/
        ADD *.gz /usr/local/

        RUN yum -y install vim

        ENV MYPATH /usr/local
        WORKDIR $MYPATH

        ENV JAVA_HOME /usr/local/jdk1.8.0_11
        ENV CLASSPATH $JAVA_HOME/lib/dt.jar:$JAVA_HOME/lib/tools.jar
        ENV CATALINA_HOME /usr/local/apache-tomcat-9.0.22
        ENV CATALINA_BASE /usr/local/apache-tomcat-9.0.22
        ENV PATH $PATH:$JAVA_HOME/bin:$CATALINA_HOME/lib:$CATALINA_HOME/bin

        EXPOSE 8080

        CMD /usr/local/apache-tomcat-9.0.22/bin/startup.sh && tail -F /url/local/apache-tomcat-9.0.22/bin/logs/catalina.out
6. 发布镜像

        docker login
        docker push
    可选参数:

        -p 密码
        -u 用户名
    测试:

        docker push kuangshen/diytomcat:1.0
7. 增加tag

        docker tag 容器id 新的tag

## Docker网络

        ip addr 查看网络地址

1. 自定义网络

      查看所有的docker网络

        docker network ls