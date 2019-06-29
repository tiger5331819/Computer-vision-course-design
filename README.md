# Computer-vision-course-design  
计算机视觉课程设计（手掌测量）  
## 实验环境  
IDE：Visual Stdio 2019  
opencv：4.1  
## 实验内容  
+ 测量各个手指的长度与宽度  
+ 测量虎口的角度  
+ 测量手掌宽度  
+ 测量手腕宽度  
## 代码要求    
>共用头文件： Head.h  
>主函数：Computer-vision-course-design.cpp  
>>代码提交包含：1.头文件 2.类实现cpp  
>>+ 头文件需要被保护  
>>+ 类需提供API  
>>+ 文件以姓名命名  
>>>代码样例：  
>>>- 头文件  
>>>```c++
>>>#ifndef _TEXT_H_
>>>#define _TEXT_H_
>>>#include.....
>>>
>>>class test
>>>{
>>>	    int i;
>>>	    int b;
>>>public:
>>>	    void show();
>>>};
>>>#endif
>>>```
>>>- 类实现于cpp中
>>>```c++
>>>#include"text.h"
>>>void test::show()
>>>{
>>>	..........
>>>}
>>>```
---
## 分工与完成情况  
* 苏琥元：负责程序整体编写与培训以及实验报告撰写    
* 孙文科：大拇指长度和宽度检测  
    >+ 完成  
* 闫彩东：食指长度和宽度检测  
    >+ 完成
* 苏琥元：中值长度和宽度检测  
    >+ 完成  
* 周宗宇：无名指长度和宽度检测  
    >+ 完成  
* 张淇：小拇指长度和宽度检测  
    >+ 完成  
* 温奇凡：手掌虎口角度检测  
    >+ 完成  
* 张衍希：手掌宽度检测  
    >+ 完成  
* 高雅：	手腕宽度检测  
    >+ 完成  
---
## 应用场景展示
![Computer-vision-course-design 应用场景](https://github.com/tiger5331819/Computer-vision-course-design/blob/master/Computer%20vision%20course%20design/%E6%89%8B%E6%8C%87%E6%A3%80%E6%B5%8B%E5%AE%9E%E9%99%85%E5%BA%94%E7%94%A8%E6%83%85%E5%86%B5.png "应用场景")  
## 原始图像  
![Computer-vision-course-design 原始图像](https://github.com/tiger5331819/Computer-vision-course-design/blob/master/Computer%20vision%20course%20design/1.jpg "原始图像")  
## 图像处理展示  
![Computer-vision-course-design 图像处理](https://github.com/tiger5331819/Computer-vision-course-design/blob/master/Computer%20vision%20course%20design/%E8%AE%A1%E7%AE%97%E6%9C%BA%E8%A7%86%E8%A7%89%E8%AF%BE%E7%A8%8B%E8%AE%BE%E8%AE%A1.png "处理结果")  
## 结果展示
![Computer-vision-course-design 结果展示](https://github.com/tiger5331819/Computer-vision-course-design/blob/master/Computer%20vision%20course%20design/%E8%AE%A1%E7%AE%97%E6%9C%BA%E8%A7%86%E8%A7%89%E8%AF%BE%E7%A8%8B%E8%AE%BE%E8%AE%A1.png "结果展示")  
---
## 参考资料  
[c++](https://www.runoob.com/cplusplus/cpp-tutorial.html)  
[opencv](https://opencv.org/)  
[opencv library](https://docs.opencv.org/)  
[微软c++支持文档](https://docs.microsoft.com/zh-cn/cpp/?view=vs-2019#pivot=langlib)  
[Visual Studio支持文档](https://docs.microsoft.com/zh-cn/visualstudio/?view=vs-2019)  
