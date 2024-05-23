#include <iostream>
#include <random>

int main()
{
	//���� �߱� ����
	// ������ A�� 3�ڸ� ���ڸ� ���ϰ� ��� B�� 3�ڸ� ���ڸ� ���ߴ� ����
	// 3�ڸ� ���ڴ� 0~9������ ���ڸ� �ѹ��� ����Ѵ�
	// A�� B�� ���� ���ڿ� ���� ������ ���� �̾߱�������Ѵ�
	// ��Ʈ����ũ : �ڸ����� �°� ���ڵ� ����
	// �� : ���ڴ� �´µ� �ڸ����� �ٸ�
	// �ƿ� : ���ڵ� �ڸ����� Ʋ��
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