#include <iostream>
#include <string> //�������� ����������� �������� �� �������� �


//  ������� 49. ������. ������ � 7
//  ������ ���������������� � - ����������� ����� �������� ���������, ������������ � ������ � ����� 

//  String
int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	
	// ������ �� ����� ��   � ���������� �������� ����������� ('\0')
	/*
	char c_str[]{ 'H', 'e', 'l', 'l', 'o', '\0' }; // ('\0')  � ���� ������������
	for (int i = 0; i < 5; i++)
	std::cout << c_str[i];
	std::cout << std::endl;

	std::cout << c_str << std::endl;

	char c_str2[]{"Hello world!" };
	std::cout << c_str2 << std::endl;
	*/
	
	// ������� ������
	/*
	std::string new_str;
	std::cout << new_str << std::endl;
	new_str = "Hello word!";
	std::cout << new_str << std::endl;
	new_str = "Bye world!";
	std::cout << new_str << std::endl;
	// ������������ �����
	new_str = new_str + " (C) student";
	new_str += "!!!";
	std::cout << new_str << std::endl;
	*/

	//������������ - �������
	//������� ���� ��� ����� ����� � ���� �����
	
	// ���� ������ 
	/*
	std::cout << "������! ��� ���� �����?\n���� ->";
	std::string name;
	std::cin >> name;
	std::cout << "������, " << name << "!\n";
	std::cout << "��� �� ���������?\n���� ->";
	std::string job;
	std::cin.ignore();
	std::getline(std::cin, job);
	std::cout << "���, " << job << "? �����!\n";
	std::cout << "� ������� ���� ���?\n���� -> ";
	int age;
	std::cin >> age;
	std::cout << "�����-�� � ��� ���� " << age << " ���....\n";
	*/
	//����� (� ���) - �������, ����������� �������� ����� ����� ������. ������ ����� �������� ����� ������� �������.

	//���� 50
	//������ �����.
	std::string str = "Hello world!";
	// ������ lenghth � size  ������������ ����� ������
	//std::cout << str.size() << std::endl; 
	//std::cout << str.length() << std::endl; //������������ ������

	// �����  insert
	/*str.insert(3, "123");
	std::cout << str << std::endl;
	*/
	
	//����� replace

	//str.replace(3, 4, "321");
	//std::cout << str << std::endl;
	//std::cout << str << std::endl;

	//����� find
	//std::cout << str.find('o') << std::endl; //4
	//����� rfind, ������������ ������� ���������� ������ � ������
	//std::cout << str.find('o', 6) << std::endl; //7

	//����� substr, ������������ ��������� �� ������
	
	std::cout << str.substr(3) << std::endl; //lo wrld!
	std::cout << str.substr(3, 5) << std::endl; // lo wo

	n = 123;
	std::string num_str = std::to_string(n);
	num_str += "!";
	std::cout << num_str << std::endl;






	return 0;
}