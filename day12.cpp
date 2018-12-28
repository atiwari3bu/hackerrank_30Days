#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        string first_name;
        string last_name;
        int id;
        // Write your constructor here

        Student(string first_name, string last_name, int id, vector<int> scores):Person(first_name, last_name, id){
            this->testScores=scores;
        }

        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate(){
            int no_of_scores=0;
            int sum=0;
            for(auto iter=testScores.begin();iter!=testScores.end();++iter){
                sum+=*iter;              
                ++no_of_scores; 
            }
            int average=sum/no_of_scores;
            if(average>=90 && average <= 100) return 'O';
            else if(average>=80 && average <90 ) return 'E';
            else if(average>=70 && average <80 ) return 'A';
            else if(average>=55 && average <70 ) return 'P';
            else if(average>=40 && average <55) return 'D';
            else if(average <40 ) return 'T';
            return 'K'; // Dummy return
         }

};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
