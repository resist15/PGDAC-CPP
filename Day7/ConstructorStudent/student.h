#include <string>
class Student{
	private:
	int studentId;
	std::string studentName;
	int salary;
	std::string stream;
	public:
	
	Student();
	
	Student(int, std::string, int, std::string);
	
	void accept();

	void display() const;
	void printThis() const;
};
