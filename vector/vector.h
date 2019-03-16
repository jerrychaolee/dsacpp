#pragma once

using Rank = int;	//��

#define DEFAULT_CAPACITY 3	//Ĭ�ϵĳ�ʼ������ʵ���п������ø���

template <typename T> class Vector {
	//����ģ����
protected:
	Rank _size;	int _capacity;	T* _elem;	//��ģ��������������
	void copyFrom(T const* A, Rank lo, Rank hi);	//������������A[lo, hi)
	void expand();	//�ռ䲻��ʱ����
	void shrink();	//��װ���ӹ�Сʱѹ��
	bool bubble(Rank lo, Rank hi);	
};