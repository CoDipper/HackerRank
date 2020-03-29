//Day Twelve

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
        int subs=0;  
	public:
    Student(string firstN, string lastN, int idS, vector<int> scores): 
    Person(firstN,lastN,idS){
         this->testScores=scores;
         subs=testScores.size();
       }
    char calculate(){
        char sim;
        int avg=0, sum=0;
        for(int i=0; i<subs; i++){
            sum+=testScores[i];
        }
        avg=sum/subs;
        if(avg>=90&&avg<=100){
            sim='O';
        }else if(avg>=80&&avg<=90){
            sim='E';
        }else if(avg>=70&&avg<80){
            sim='A';
        }else if(avg>=55&&avg<70){
            sim='P';
        }else if(avg>=40&&avg<55){
            sim='D';
        }else if(avg<40){
            sim='T';
        }
        return sim;
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
