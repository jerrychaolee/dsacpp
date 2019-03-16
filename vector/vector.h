#pragma once

using Rank = int;	//秩

#define DEFAULT_CAPACITY 3	//默认的初始容量（实际中可以设置更大）

template <typename T> class Vector {
	//向量模板类
protected:
	Rank _size;	int _capacity;	T* _elem;	//规模、容量、数据区
	void copyFrom(T const* A, Rank lo, Rank hi);	//复制数组区间A[lo, hi)
	void expand();	//空间不足时扩容
	void shrink();	//填装因子过小时压缩
	bool bubble(Rank lo, Rank hi);	
};