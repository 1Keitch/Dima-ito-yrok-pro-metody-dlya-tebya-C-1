#include <iostream>
#include <string> //библиота позволяющая работать со строками С


//  Занятие 49. Строки. Модуль № 7
//  Строка программирование С - упорядочный набор символов элементов, объединнённых в массив в конце 

//  String
int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	
	// Строки из языка СИ   и приминения нулевого терминатора ('\0')
	/*
	char c_str[]{ 'H', 'e', 'l', 'l', 'o', '\0' }; // ('\0')  с нуль терминатором
	for (int i = 0; i < 5; i++)
	std::cout << c_str[i];
	std::cout << std::endl;

	std::cout << c_str << std::endl;

	char c_str2[]{"Hello world!" };
	std::cout << c_str2 << std::endl;
	*/
	
	// Объекты стринг
	/*
	std::string new_str;
	std::cout << new_str << std::endl;
	new_str = "Hello word!";
	std::cout << new_str << std::endl;
	new_str = "Bye world!";
	std::cout << new_str << std::endl;
	// Конкатинация строк
	new_str = new_str + " (C) student";
	new_str += "!!!";
	std::cout << new_str << std::endl;
	*/

	//Конкатенация - процесс
	//Слияния двух или более строк в одну новую
	
	// Ввод строки 
	/*
	std::cout << "Привет! Как тебя зовут?\nВвод ->";
	std::string name;
	std::cin >> name;
	std::cout << "Привет, " << name << "!\n";
	std::cout << "Кем ты работаешь?\nВвод ->";
	std::string job;
	std::cin.ignore();
	std::getline(std::cin, job);
	std::cout << "Ого, " << job << "? Круто!\n";
	std::cout << "А сколько тебе лет?\nВвод -> ";
	int age;
	std::cin >> age;
	std::cout << "Когда-то и мне было " << age << " лет....\n";
	*/
	//Метод (в ООП) - функция, применяймая объектом каого либбо класса. Каждый класс обладает своим набором методов.

	//Урок 50
	//Методы строк.
	std::string str = "Hello world!";
	// методы lenghth и size  возвращающие длину строки
	//std::cout << str.size() << std::endl; 
	//std::cout << str.length() << std::endl; //традиционный способ

	// Метод  insert
	/*str.insert(3, "123");
	std::cout << str << std::endl;
	*/
	
	//Метод replace

	//str.replace(3, 4, "321");
	//std::cout << str << std::endl;
	//std::cout << str << std::endl;

	//Метод find
	//std::cout << str.find('o') << std::endl; //4
	//Метод rfind, возвращающий позицию последнего строки в строку
	//std::cout << str.find('o', 6) << std::endl; //7

	//Метод substr, возвращающий подстроки из строки
	
	std::cout << str.substr(3) << std::endl; //lo wrld!
	std::cout << str.substr(3, 5) << std::endl; // lo wo

	n = 123;
	std::string num_str = std::to_string(n);
	num_str += "!";
	std::cout << num_str << std::endl;






	return 0;
}