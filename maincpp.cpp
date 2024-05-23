#include <iostream>
#include <random>

int main()
{
	//숫자 야구 게임
	// 질문자 A가 3자리 숫자를 정하고 상대 B가 3자리 숫자를 맞추는 게임
	// 3자리 숫자는 0~9까지의 숫자를 한번만 사용한다
	// A는 B가 말한 숫자에 대해 다음과 같이 이야기해줘야한다
	// 스트라이크 : 자리수도 맞고 숫자도 맞음
	// 볼 : 숫자는 맞는데 자리수는 다름
	// 아웃 : 숫자도 자리수도 틀림
	// Ex) A : 390		->		B : 307		-> A : 1S 1B 1O


	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(1, 9);

	int chosenNumbers[3];
	int count = 0;

	while (count < 3)
	{
		int randNumber = dis(gen);
		bool isDuplicate = false;

		for (int i = 0; i < count; i++)
		{
			if (chosenNumbers[i] == randNumber)
			{
				isDuplicate = true;
				break;
			}
		}

		if (!isDuplicate)
		{
			chosenNumbers[count] = randNumber;
			++count;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		std::cout << chosenNumbers[i] << " ";
	}

	int guessNum[3];
}