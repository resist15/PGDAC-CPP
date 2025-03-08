#include <string>
class Student{
	private:
	int studentId;
	std::string studentName;
	int salary;
	std::string stream;
	public:
	
	Student();
	
	Student(int studentId, std::string studentName, int salary, std::string stream);
	
	void accept();

	void display() const;
	void printThis() const;
};
