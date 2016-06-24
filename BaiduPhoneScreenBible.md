Baidu USA 电话面试面经
===

1. 非常注重C++基础，题目不难，但要求bug free
	
	Technical questions:
	
	1. How to validate a binary search tree?
	2. C++ constructor, destructor, implement memory allocator, slab allocator, how to avoid memory fragmentation? (red-black tree)
	3. Implement LRU cache, complexity of map and unordered_map.
	4. Search a matrix which has all rows sorted and all columns sorted. optimal O(m+n)
	5. Implement c++ STL vector<T>. Prove that the average complexity of "push_back" is O(1).
	6. Why is git better than SVN?

2. 今天收到了Baidu AI lab 的拒信，终于也可以上来好好分享一下电面的经历。

	OA 是写一个calender 的类 完成他需要的一些小的功能。
	
	两次电面第一次是看对C++类的基本概念的掌握，第二次是看对最大堆和最小堆的理解和应用。

	之前也有人分享过，题目感觉和他差不多。其实一直在move on，但是加了电面第三面理由是觉得交流有问题。刚刚发来拒信说position filled。

	恩， 自己程度确实还没到，再接再厉，看了地里好多好心人的帖子，帮助很大，也希望自己能帮助大家。

	Phone interview 1:(c++)
	
	1. Constructor  
	2. Deconstructor
	3. Valid BST
	
	Phone interview 2:(c++)
	
	1. 问了我的backgroud
	2. Largest kth values in valuesvector  //return vector<int>
	// follow up optimize
	3. 斐波那契数列

	> **Emplace** : Efficiently increase vector container size by one	> **Templates** are the foundation of generic programming, which involves writing code in a way that is independent of any particular type	> **Operator overloading** is a specific case of polymorphism in which some or all operators like +, = or == are treated as polymorphic functions 
		> **Segmentation fault** is a fault raised by hardware with memory protection, notifying an operating system about a memory access violation	> **Multiple inherit** an object or class can inherit characteristics and features from more than one parent object or parent class	> **Volatile** informs the compiler the value of the variable can change from outside without any update done by the code.	> **Polymorphism** means that some code or operations or objects behave differently in different contexts	> **delete & delete[]** release the space which the pointer point to, delete[] release the array space the pointer point to	> **variadic** funtions  are functions which take a variable number of arguments	> **Smart pointer** can automatically manage the memory based on reference counting	> **Pure virtual**
	
3. 之前没怎么在地里看到baidu面经，分享一下吧
	1. 给一段C++ code，通过修改类让程序输出预期的结果，代码比较长，但是主要考点只有一个copy constructor在返回object的时候被调用这个知识点。
	2. [leetcode word search](https://leetcode.com/problems/word-search/) 变形题，唯一的不同就是用到了c里面数组pointer而不是vector。
	3. introduce a project you are most proud of.
	4. ask questions

	属于常规题目，但是对c++比较有要求（泪奔，之前找工作，感觉Java完爆C++，刚刚转到Java，又来一个考C++的，双修才是王道）。
	
	[http://www.1point3acres.com/bbs/thread-142208-1-1.html](http://www.1point3acres.com/bbs/thread-142208-1-1.html)
	
4. 分享经验，回报论坛！ 
	
	投的是Machine learning engineer实习，Baidu在硅谷新开的AI lab 总体感觉面试难度不大，对于找实习专业户应该很轻松...
	
	我纯属打酱油... 一开始问了个ML的问题，关于gradient descent中学习率选取 
	
	第二个问题是check BST...纠结了半天，网上的code还是有挺多bug的..最好能自己写 
	
	OK就这些了，希望能帮到小伙伴们。下下星期Google，求好运！！！

	链接: [https://instant.1point3acres.com/thread/136881](https://instant.1point3acres.com/thread/136881)
来源: 一亩三分地

5. Baidu USDC

   1. Phone Interview 09/22(first).
   
   		Reverse Words in a String, 要求in place
   
   		全程中文，一共持续不到二十分钟，果断结束

	2. Phone Interview 10/07(second)

		Print diagonally matrix
   
   		全程中文，一共持续不到二十分钟，非常简单
   
   感觉百度刚来北美开研发部，待遇应该会不错（否则怎么招人，不过不确定，只是个人猜测，还望知情人士多加指点），两轮电面都非常简单，但是他们家的HR效率时快时慢，无法预测。而且貌似面试官对你本科学历比较感兴趣，毕竟是中国人。
   
6. Baidu USA phone: (不记得投的什么职位了，sw related) 45min 

	面试官直接说baidu usa 待遇很好，bar很高，好像很难进的样子。 
	
	我看到地理有很多oa的，不知道为什么我没有oa直接电面了＝＝但感觉好像并没有把握好机会 
	
	1. Project Introduction 介绍下自己做过的project, 感觉他们家对你做的东西还是很感兴趣的 
	
	2. search intertion postion 
	
		lz一开始并没有意识到这是lc的原题啊， 哭＝＝ 
		
		面试官说可以写insert after 和 insert before 现场写了binary search，但被面试官发现了bug, 就是当st > ed 的时候，我直接返回了－1 
		
		写完了这个，面试官又说啊，你这样写(mid+1, ed) 有可能miss 掉candidate啊，但他后来又说可能可以通过(st, mid-1)补救回来。 
		
		这里真心求教大家一般怎么写binary search啊， 是把st = mid+1 还是 st = mid， 可是我想st = mid的话有可能一直不终止啊， 比如st = 0, ed = 1, 要是nums < target， 进入(mid, ed)＝(0,1)，就终止不了。 还有最后返回st 还是ed，大家是怎么判断的啊

	链接: [https://instant.1point3acres.com/thread/176025](https://instant.1point3acres.com/thread/176025)
来源: 一亩三分地