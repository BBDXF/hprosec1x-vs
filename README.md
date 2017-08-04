
[TOC]

# 修改说明  
- 项目中使用boost::asio替代了原来的asio库，所以需要自己下载和编译boost库。  
- 在原始http/asio/Transport.cpp中，当服务器使用Transfer-Encoding: chunked 方式时，没有问题，但是在Go服务器中，没有使用这种方式，导致137行的readsome阻塞，程序无反应，修改方式如下：
```c++
// 125-129
bool nosize = !len;
size_t n = std::min<size_t>(len, response.size()); // 将header修改为response
for (size_t i = 0; i < n; ++i, --len) {
    responseStream << (char) response_stream.get();
};
```
- 同时，使用VS编译时，因为有两套Client.h&cpp文件，编译会出现警告，并且生成时找不到部分实现，修改其中一套文件名就可以正常通过了！  

参见[url](https://github.com/hprose/hprose-cpp1x/issues/7)

# 1 Boost编译  
- `C:\boost_1_64_0`我使用的是1.64版本，下载到C盘根目录下。  
- 在命令行中运行`bootstrap.bat`命令，生成了b2.exe和bjam.exe。  
- 直接运行b2.exe按照默认配置编译所有的模块。  

等待编译完毕。  

如果需要特定模块，自己查资料。

# 2 项目依赖
- 将`C:\boost_1_64_0` 添加到头文件依赖目录 
- 将`C:\boost_1_64_0\stage\lib`添加到库依赖目录  

# 3 run
放心大胆地编译吧！  

===========   
官方没有合并前，后续更新地址  https://github.com/BBDXF/hprosec1x-vs.git  

By xin.zhang  
`2017年8月4日 10:46:02`  

