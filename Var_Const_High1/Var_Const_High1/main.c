#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
//
//int main()
//{
//
//	//Release모드로 변경하게 되면
//	//아래 nResult = 0
//	//반복문은 무시해버린다. 
//
//	//최적화 라는것은 코드에서 군살을 빼겠다는 것이다.
//	//아주 뻔~ 한것 논리적으로 매우 당연한, 효율이 나쁘다고 확인된다면 하지말아라.
//	//컴파일러가 컴파일을 할때 그 코드를 없애버리고 다이어트를 시켜버린다. 
//	//이 수준이 우리가 생각하는 것 이상이다. 
//
//	//최적화 = 특정 변수(자료)에 대해 의존성이 존재하는 연산들을 구별 해낼수 있어야 한다.
//
//	//리팩토링 = 최적화와는 좀 다르다, 구조적인 부분을 건드리는 것.
//
//	//컴파일러 최적화 예시
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
//	// const예시////////////////////////////////
//	///////////////////////////////////////////
//
//	////<< 1번 예시 식 >>
//	////이런것을 하드코딩이라한다.
//	//int nInput = 0;
//
//	//printf("점수를 입력하세요 : ");
//	//scanf("%d", &nInput);
//
//	//if (nInput >= 70)printf("합격입니다.\n");
//	//else printf("불합격입니다.\n");
//
//
//	//<< 2번 예시 식>>
//	const int nCUTOFF = 70;
//	int nInput = 0;
//
//	printf("점수를 입력하시오 : ");
//	scanf_s("%d", &nInput);
//	//70이라는 숫자대신 합격 기준 점수 라는 
//	//상대적 의미를 부여해 코드를 작성할 수 있다.
//	if (nInput > nCUTOFF)
//		printf("합격입니다.\n");
//	else
//		printf("불합격입니다.\n");
//
//
//		return 0;
//
//}





/* 이 식이 잘하는 사람이 쓴 식이다.

void GetName(char *pszName, int nSize)	// 2.포인터를 하는 대상에 대해 Write를 하게 되어있다.
{
	printf("Input Your name : ");
	char szBuffer[32];
	gets_s(szBuffer, sizeof(szBuffer));
	strcpy_s(pszName, nSize, szBuffer);
}


void PrintName(const char* pszName)	//3. 읽기만 한다. 
//매개변수가 상수형 포인터, 함수에서 포인터가 가리키는 대상메모리에 
//쓰기를 시도할 수 없다. 
{
	printf("Your name is %s.\n", pszName);
}

int main(void)
{
	char szName[32] = { 0 };
	GetName(szName, sizeof(szName));// 1. 이 메모리에 대고 GetName함수는 쓰기를 시도한다.
	return 0;
}


여기까지  */



//만약 위 식에서
//void PrintName(const char* pszName) //읽기만 하는 함수에서 쓰기만 일어난다.
//{									//Warning이 뜬다. > 컴파일 단계에서 이런 오류를 알아 내준다는것은 정말 고마운 일이다. 
//									//Const 문자 한글자가 큰 변화를 일으킨다.
//									//Const는 정말 잘 기억 해주면 좋다. 
//	printf("Your name is %s\n", pszName);
//	//*pszName = 'A';
//	strcpy_s(pszName, 2, 'A');
//}



////constptr03.c
//
//int main()
//{
//	int nData = 10;
//	//포인터가 가리키는 대상을 상수화한다.
//	const int *pnData = &nData;
//
//	//포인터 변수 자체를 상수화한다.
//	int* const pnNewData = &nData;
//
//
//	printf("%d\n", pnData);
//	printf("%d", *pnNewData);
//	// 아래 두 구문은 모두 에러
//	/**pnData = 20;
//	pnNewData = NULL;*/
//
//	return 0;
//}
// >>>> error C2166 : l-value가 const개체를 지정합니다.
//에러가 뜬다. 








//심볼릭 상수를 만드는 또 다른 방법 
//1. 전처리기
//#define CUTOFF 70
//
//int main(void)
//{
//	int nInput = 0;
//
//	printf("점수를 입력하세요 : ");
//	scanf("%d", &nInput);
//
//	//컴파일러는 컴파일 하기 전에 CUTOFF를 70으로 치환한다. 
//	if (nInput < CUTOFF) printf("합격");
//	else printf("불합격");
//
//	return 0;
//}

//2. 전처리기를 활용한 배열
//#define MAXLENGTH 32
//int main(void)
//{
//	int nInput = 0;
//	char szName[MAXLENGTH] = { 0 };//이런것도 가능하다. 
//}




// C++참조형에 대하여 좀더 설명 하자면 다음과 같다. 
// 
//int _tmain(int argc, _TCHAR* argv[])
//{
//	int nData = 10;
//
//	int &rData = nData;          //중요*** rData는 절대 바뀌지 않는다. 
//	rData = 20;
//
//	int* pnData = &nData; // 이 식은 int* const pnData = &nData와 비슷한 느낌이다.
//	*pnData = 20;
//
//  int nNewData;
// pnData = &nNewData;  //이런식으로 절대 변경안된다. 
//						//pnData가 상수화가 되었기 때문에 1 = 3과 같은 뜻
// 
// 
//	printf("%d\n", nData);
//	return 0;
//
//}