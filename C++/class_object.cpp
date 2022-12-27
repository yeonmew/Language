/*
* 프로그램명: 클래스와 객체
* 작성자: yeonmew
* 작성일: 2022-04-11
*/

#include <iostream>
using namespace std;

class Student
{
private:
    string num; //학번
    string name; //이름
    int koreanScore;
    int mathScore;
    int englishScore;
    int totalScore;
    
public: //main에서 사용 가능합니다.
   
    Student(string _num, string _name);
    static int numOfStudent;

    int getMathScore() { return mathScore; }
    int getKoreanScore() { return koreanScore; }
    int getEnglishScore() { return englishScore; }
    int getTotalScore() { return totalScore; }

    
    void scorePrint() {
        cout << "학번 : " << num << ", " << "이름 : " << name << endl;
        cout << "\t국어 : " << getKoreanScore() << ", 수학 :";
        cout << getMathScore() << ", 영어 :" << getEnglishScore() << "," << endl;
        cout << "\t전체 : " << getTotalScore() << endl;
    }
    void setKoreanScore(int score) {  
        if((0 < score) && (score <100)) { //score가 0보다 크고 100보다 작은 경우 가능하다. 
            this->koreanScore = score;
        }
        else {
            cout << "잘못된 입력입니다.";
        }
    }
    void setMathScore(int score) {
        if ((0 < score) && (score < 100)) {
        this->mathScore = score;
        }

        else {
            cout << "잘못된 입력입니다.";
        }
    }
    void setEnglishScore(int score) {
        if ((0 < score) && (score < 100)) {
        this->englishScore = score;
        }

        else {
            cout << "잘못된 입력입니다.";
        }
    }
    void calcTotalScore() {
        this->totalScore = this->englishScore + this->koreanScore + this->mathScore; 
        
    }
};

Student::Student(string _num, string _name) {
    num = _num;
    name = _name;
    koreanScore = 0;
    mathScore = 0;
    englishScore = 0;
    totalScore=0;
    numOfStudent++;
}
int Student::numOfStudent = 0; // 학생 수  0으로 초기화해서 시작한다.

void title() { //main의 타이틀 부분에서 출력될 것이다.
    cout << "+++++++++++++++실습 #3**********************" << endl;
    cout << "       클래스 및 객체 실습" << endl;
    cout << "++++++++++++++++*****************************" << endl;
    cout << "       학번 : 2022, 이름 : yeonmew" << endl;
}

int main()
{
    title(); 
    cout << "********************************************************" << endl;
    Student studentOne("1236", "mew");
    
    cout << "Before Input Score" << endl;
    studentOne.scorePrint();
    studentOne.setKoreanScore(90);
    studentOne.setMathScore(91);
    studentOne.setEnglishScore(92);
    studentOne.calcTotalScore();
    cout << "After Input Score" << endl;
    studentOne.scorePrint();
    cout << "********************************************************" << endl;
    cout << "전체 학생수 : " << Student::numOfStudent<< endl;
    cout << "********************************************************" << endl << endl;
    Student studentTwo("1237", "yeon");
    cout << "Before Input Score" << endl;
    studentTwo.scorePrint();
    studentTwo.setKoreanScore(95);
    studentTwo.setMathScore(96);
    studentTwo.setEnglishScore(97);
    studentTwo.calcTotalScore();
    cout << "After Input Score" << endl;
    studentTwo.scorePrint();
    cout << "********************************************************" << endl;
    cout << "전체 학생수 : " << Student::numOfStudent << endl;
    cout << "********************************************************" << endl;
    return 0;
}