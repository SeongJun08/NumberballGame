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
	int numbercount = 3;
	//4�ڸ� ���ھ߱��� �� ���� ������ ����� ��ȯ

	while (count < numbercount)
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

	for (int i = 0; i < numbercount; i++)
	{
		std::cout << chosenNumbers[i] << " ";
	}

	std::cout << "���� �߱� ���ӿ� ���� ���� ȯ���մϴ� �� ������ 3�ڸ� ���� �߱� �����̸� ���ӵ� ���ڴ� ����Ͻ� �� �����ϴ� 3�ڸ� ���� �� ���߽� ���ڿ� ���� ������ ���� �ȳ��ص帮�� �ֽ��ϴ�\
		Strike : ���ڵ� �ڸ����� �´� Ball : ���ڴ� ������ �ڸ����� Ʋ���� Out : ���ڵ� �ڸ����� Ʋ���� ����ְ� �÷������ּ���";

	while (true)
	{
		int guessNum[3];
		for (int i = 0; i < numbercount; i++)
		{
			std::cin >> guessNum[i];
		}

		if (guessNum[0] == guessNum[1] || guessNum[0] == guessNum[2] || guessNum[1] == guessNum[2])
		{
			std::cout << "������ ���ڴ� ����� �� �����ϴ�" << std::endl;
			break;
		}


		int strike = 1;

		//strike
		for (int i = 0; i < numbercount; i++)
		{
			if (chosenNumbers[i] == guessNum[i])
			{
				std::cout << strike << "Strike" << " ";
				strike++;
			}
			if (strike == 4)
			{
				std::cout << "Congratulation!";
				return 0;
			}

			for (int j = 0; j < numbercount; j++)
			{
				if (chosenNumbers[i] == guessNum[j])
				{

				}
			}
			
		}

	}
}