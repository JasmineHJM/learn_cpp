#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

//operator new��operator delete����



void Test2() 
{    
	// ���뵥��Test���͵Ķ���    
	Test* p1 = new Test;    
	delete p1;        
	// ����10��Test���͵Ķ���    
	Test* p2 = new Test[10];    
	delete[] p2; 
}
	/* operator new��
	�ú���ʵ��ͨ��malloc������ռ䣬��malloc����ռ�ɹ�ʱֱ�ӷ��أ�
	����ռ�ʧ�ܣ�����ִ�пռ䲻��Ӧ�Դ�ʩ��
	�����Ӧ�Դ�ʩ�û������ˣ���������룬�������쳣�� */ 
void *__CRTDECL operator new(size_t size) _THROW1(_STD bad_alloc) 
{    
	// try to allocate size bytes    
	void *p;    
	while ((p = malloc(size)) == 0)        
	if (_callnewh(size) == 0)        
	{           
		// report no memory            
		// ��������ڴ�ʧ���ˣ�������׳�bad_alloc �����쳣            
		static const std::bad_alloc nomem;            
		_RAISE(nomem);        
	}

		return (p);
	}

	/* operator delete: �ú���������ͨ��free���ͷſռ�� */ 
void operator delete(void *pUserData) 
{
		_CrtMemBlockHeader * pHead;
		RTCCALLBACK(_RTC_Free_hook, (pUserData, 0));
		if (pUserData == NULL)
			return;
		_mlock(_HEAP_LOCK);  /* block other threads */       
		__TRY 
			/* get a pointer to memory block header */            
			pHead = pHdr(pUserData);
		    /* verify block type */            
		    _ASSERTE(_BLOCK_TYPE_IS_VALID(pHead->nBlockUse));
		    _free_dbg(pUserData, pHead->nBlockUse);
		__FINALLY           
			_munlock(_HEAP_LOCK);  
		/* release other threads */        
		__END_TRY_FINALLY

			return;
}

/* free��ʵ�� */
#define   free(p)              
_free_dbg(p, _NORMAL_BLOCK)
