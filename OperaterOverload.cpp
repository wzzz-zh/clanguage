/*

��������أ����������ʵ���Ͼ��Ǻ�������
	
	��Ա���������
		��ֵ�����"="ֻ������Ϊ��Ա���������������Ϊ��Ա����Ҫ������Ϊȫ�ֺ�����һ������Ŀ

	ȫ�����������
		ͬ��

	��ֵ���������
		���ǵ�ԭ���ĸ�ֵ"="��������ڸ�ֵ��ʱ����ʹ��ߵĶ�������ݵ����ұ߶�������ݣ��������ָ�ֵ��ʽ��ĳЩ��������Σ�գ�
		�������ǳ���������⣬�ڶ�����ָ�������£����ֻ��ʹ��ָ��������ͬ����ô�ͻ����ǳ���������⡣���ʱ��Ӧ������
		��ֵ��������ǳ���������⣬��������ķ�����������ֵ�Ķ���ָ������ݷ����µĿռ䡣��ֵ����������غ�������ֵ����
		����������ԭ����ֵ���������ʽ�ȼ�����߶������������ԡ�
		ͬʱ��ע��Ĭ�Ͽ������캯��Ҳ������������⣬Ĭ�Ͽ������캯��Ҳֻ��ǳ������

	�ɱ䳤����ʵ��
	{
		�ؼ�����ֵ�����ʵ�֣��������캯��ʵ�֣�[]��������أ�push_back()����ʵ�֣���̬����Ĺؼ���		
		
		push_back()���Ѿ�����õ��ڴ�ռ��ڽ��ж�̬���������:
			new (p)T(value),��T�๹��ĳ�ԱֵΪvalue�Ķ������pָ����棬��placement new

		
	}

	����ת�����������
		operater Type(){};����ת����������ص�ʱ�򣬲���Ҫ����ֵ���ͣ���Type���ͱ�������һ������ֵ������
		����ת����������Ա���ʽ�ĵ��ã������벻ͬ���͵Ķ������������ʱ��������ʽ��������ת�������


	�����Լ����������
		ǰ�������Լ���������أ��������Ⱥ��õĺ�һ��������Ϊ��ĳ�Ա����ʱû�в���������Ϊȫ�ֺ���ʱ�����
		һ�����Լ����������
		���������Լ���������أ�˵�����ϣ���һ�����õĲ���int���ں������в���ʹ�ã�ֻ����������ǰ�������


	���������ע�����
		1.��������ز��ı�����������ȼ���
		2.".",".*","::","?:",sizeof��Щ��������ܱ����أ�
		3.����(),[],->,=��Щ�����ʱ����Ҫ����Ϊ��Ա������

*/