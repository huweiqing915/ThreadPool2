/*************************************************************************
	> File Name: Singleton.h
	> Author: huwq
	> Mail:huweiqing915@gmail.com 
	> Created Time: 2014年04月29日 星期二 00时46分17秒
 ************************************************************************/

#ifndef SINGLETON_H_
#define SINGLETON_H_

class Singleton {
public:
	static Singleton* instance()
	{
		if(p == NULL)
		{
			_lock.lock();
			if(p == NULL)
			{
				p = new Singleton;
			}
			_lock.unlock();
		}
		return p;
	}
private:
	Singleton() { }
	static Singleton *p;
	static Lock _lock;
};

Singleton::Singleton *p = NULL;
Singleton::Lock _lock;

#endif
