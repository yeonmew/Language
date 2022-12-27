/*
* 프로그램명: 한글낱말에 해당하는 영어단어 맞추기
* 작성자: yeonmew
* 작성일: 2022-05-24
*/

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
class Dict {
    string eng; //영어 낱말, string 타입
    string kor; //한글 낱말, string 타입
public:
    Dict(string eng, string kor) {
        this->eng = eng;
        this->kor = kor;
    }
    string getEng() { return eng; } //해당 객체의 영어 낱말을 리턴
    string getKor() { return kor; } //해당 객체의 한글 낱말을 리턴
};
int main() {
    string example[4] = { "" };
    bool sw = false;
    srand((unsigned)time(0)); // 시작할 때마다, 다른 랜덤 수를 발생시키기 위한 seed 설정
    cout << "*******************************************" << endl;
    cout << "한글 낱말에 해당하는 영어단어 맟추기 프로그램" << endl;
    cout << "*******************************************" << endl;
    cout << "학번: 2022 이름 : yeonmew" << endl;
    cout << "*******************************************\n" << endl;
    vector<Dict> v;
    v.push_back(Dict("human", "인간"));
    v.push_back(Dict("baby", "아기"));
    v.push_back(Dict("society", "사회"));
    v.push_back(Dict("photo", "사진"));
    v.push_back(Dict("painting", "그림"));
    v.push_back(Dict("love", "사랑"));
    v.push_back(Dict("emotion", "감정"));
    v.push_back(Dict("dall", "인형"));
    v.push_back(Dict("animal", "동물"));
    v.push_back(Dict("bear", "곰"));
    v.push_back(Dict("lion", "사자"));
    v.push_back(Dict("tiger", "호랑이"));
    v.push_back(Dict("trade", "거래"));
    int n = rand(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수를 n에 발생
    int right = 0;
    int wrong = 0;
    while (true) {
        int index = rand() % v.size();
        cout << "문제 : " << v[index].getKor() << endl;
        int exIndex = rand() % 4; // 4개중에 하나에 정답 넣기
        example[exIndex] = v[index].getEng();
        for (int i = 0; i < 4; ++i) {
            if (i != exIndex) { // 정답을 제외하고 남은 칸에 보기 추가
                sw = true;
                while (sw) { // 보기에 중복이 없게 하기
                    n = rand() % v.size();
                    if (example[0] != v[n].getEng() &&
                        example[1] != v[n].getEng() &&
                        example[2] != v[n].getEng() &&
                        example[3] != v[n].getEng())
                    {
                        example[i] = v[n].getEng();
                        sw = false;
                    }
                }
            }
        }
        for (int i = 0; i < 4; ++i)
            cout << "(" << i + 1 << ") " << example[i] << ' ';
        cout << "\n 답:>> ";

        int answer;
        cin >> answer;
        if (answer >= 1 && answer <= 4) {
            if (exIndex == answer - 1) {
                cout << "맞았습니다.\n" << endl;
                ++right;
            }
            else {
                cout << "틀렸습니다.\n" << endl;
                ++wrong;
            }
        }
        else {
            cout << "프로그램을 종료합니다." << endl;
            cout << "*************************" << endl;
            cout << "지금까지의 정답/오답 통계" << endl;
            cout << "*************************" << endl;
            cout << "- 총  테스트 문제 : " << right + wrong << "문제" << endl;
            cout << "- 정답           : " << right << "문제" << endl;
            cout << "- 오답           : " << wrong << "문제" << endl;
            cout << "*************************" << endl;
            break;
        }
        }
        for (int i = 0; i < 4; ++i) // 초기화를 안해주면 중복인지 확인할 때 문제가 생김
            example[i] = "";
    }