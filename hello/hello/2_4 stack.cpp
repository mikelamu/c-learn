/*
	3.5.1 stack ��������
		���stack��һ���Ƚ����(First In Last Out,FILO)�����ݽṹ����ֻ��һ������
		����������ջ�������õĶ���ӿ�
		���캯����
			stack<T> stk; //stack����ģ����ʵ�֣� stack�����Ĭ�Ϲ�����ʽ
			stack(const stack &stk); //�������캯��
		��ֵ������
			stack& operator=(const stack &stk); //���صȺŲ�����
		���ݴ�ȡ��
			push(elem); //��ջ�����Ԫ��
			pop(); //��ջ���Ƴ���һ��Ԫ��
			top(); //����ջ��Ԫ��
		��С������
			empty(); //�ж϶�ջ�Ƿ�Ϊ��
			size(); //����ջ�Ĵ�С
*/