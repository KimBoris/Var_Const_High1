#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
//
//int main()
//{
//
//	//Release���� �����ϰ� �Ǹ�
//	//�Ʒ� nResult = 0
//	//�ݺ����� �����ع�����. 
//
//	//����ȭ ��°��� �ڵ忡�� ������ ���ڴٴ� ���̴�.
//	//���� ��~ �Ѱ� �������� �ſ� �翬��, ȿ���� ���ڴٰ� Ȯ�εȴٸ� �������ƶ�.
//	//�����Ϸ��� �������� �Ҷ� �� �ڵ带 ���ֹ����� ���̾�Ʈ�� ���ѹ�����. 
//	//�� ������ �츮�� �����ϴ� �� �̻��̴�. 
//
//	//����ȭ = Ư�� ����(�ڷ�)�� ���� �������� �����ϴ� ������� ���� �س��� �־�� �Ѵ�.
//
//	//�����丵 = ����ȭ�ʹ� �� �ٸ���, �������� �κ��� �ǵ帮�� ��.
//
//	//�����Ϸ� ����ȭ ����
//	//int nResult = 0;
//
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	nResult = 10;
//	//}
//	//	printf("nResult = %d", nResult);
//
//	//return 0;
//
//
//
//
//	////////////////////////////////////////////
//	// const����////////////////////////////////
//	///////////////////////////////////////////
//
//	////<< 1�� ���� �� >>
//	////�̷����� �ϵ��ڵ��̶��Ѵ�.
//	//int nInput = 0;
//
//	//printf("������ �Է��ϼ��� : ");
//	//scanf("%d", &nInput);
//
//	//if (nInput >= 70)printf("�հ��Դϴ�.\n");
//	//else printf("���հ��Դϴ�.\n");
//
//
//	//<< 2�� ���� ��>>
//	const int nCUTOFF = 70;
//	int nInput = 0;
//
//	printf("������ �Է��Ͻÿ� : ");
//	scanf_s("%d", &nInput);
//	//70�̶�� ���ڴ�� �հ� ���� ���� ��� 
//	//����� �ǹ̸� �ο��� �ڵ带 �ۼ��� �� �ִ�.
//	if (nInput > nCUTOFF)
//		printf("�հ��Դϴ�.\n");
//	else
//		printf("���հ��Դϴ�.\n");
//
//
//		return 0;
//
//}





/* �� ���� ���ϴ� ����� �� ���̴�.

void GetName(char *pszName, int nSize)	// 2.�����͸� �ϴ� ��� ���� Write�� �ϰ� �Ǿ��ִ�.
{
	printf("Input Your name : ");
	char szBuffer[32];
	gets_s(szBuffer, sizeof(szBuffer));
	strcpy_s(pszName, nSize, szBuffer);
}


void PrintName(const char* pszName)	//3. �б⸸ �Ѵ�. 
//�Ű������� ����� ������, �Լ����� �����Ͱ� ����Ű�� ���޸𸮿� 
//���⸦ �õ��� �� ����. 
{
	printf("Your name is %s.\n", pszName);
}

int main(void)
{
	char szName[32] = { 0 };
	GetName(szName, sizeof(szName));// 1. �� �޸𸮿� ��� GetName�Լ��� ���⸦ �õ��Ѵ�.
	return 0;
}


�������  */



//���� �� �Ŀ���
//void PrintName(const char* pszName) //�б⸸ �ϴ� �Լ����� ���⸸ �Ͼ��.
//{									//Warning�� ���. > ������ �ܰ迡�� �̷� ������ �˾� ���شٴ°��� ���� ���� ���̴�. 
//									//Const ���� �ѱ��ڰ� ū ��ȭ�� ����Ų��.
//									//Const�� ���� �� ��� ���ָ� ����. 
//	printf("Your name is %s\n", pszName);
//	//*pszName = 'A';
//	strcpy_s(pszName, 2, 'A');
//}



////constptr03.c
//
//int main()
//{
//	int nData = 10;
//	//�����Ͱ� ����Ű�� ����� ���ȭ�Ѵ�.
//	const int *pnData = &nData;
//
//	//������ ���� ��ü�� ���ȭ�Ѵ�.
//	int* const pnNewData = &nData;
//
//
//	printf("%d\n", pnData);
//	printf("%d", *pnNewData);
//	// �Ʒ� �� ������ ��� ����
//	/**pnData = 20;
//	pnNewData = NULL;*/
//
//	return 0;
//}
// >>>> error C2166 : l-value�� const��ü�� �����մϴ�.
//������ ���. 








//�ɺ��� ����� ����� �� �ٸ� ��� 
//1. ��ó����
//#define CUTOFF 70
//
//int main(void)
//{
//	int nInput = 0;
//
//	printf("������ �Է��ϼ��� : ");
//	scanf("%d", &nInput);
//
//	//�����Ϸ��� ������ �ϱ� ���� CUTOFF�� 70���� ġȯ�Ѵ�. 
//	if (nInput < CUTOFF) printf("�հ�");
//	else printf("���հ�");
//
//	return 0;
//}

//2. ��ó���⸦ Ȱ���� �迭
//#define MAXLENGTH 32
//int main(void)
//{
//	int nInput = 0;
//	char szName[MAXLENGTH] = { 0 };//�̷��͵� �����ϴ�. 
//}




// C++�������� ���Ͽ� ���� ���� ���ڸ� ������ ����. 
// 
//int _tmain(int argc, _TCHAR* argv[])
//{
//	int nData = 10;
//
//	int &rData = nData;          //�߿�*** rData�� ���� �ٲ��� �ʴ´�. 
//	rData = 20;
//
//	int* pnData = &nData; // �� ���� int* const pnData = &nData�� ����� �����̴�.
//	*pnData = 20;
//
//  int nNewData;
// pnData = &nNewData;  //�̷������� ���� ����ȵȴ�. 
//						//pnData�� ���ȭ�� �Ǿ��� ������ 1 = 3�� ���� ��
// 
// 
//	printf("%d\n", nData);
//	return 0;
//
//}