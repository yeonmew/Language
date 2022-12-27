/*
* 프로그램명: 가상 상속 클래스
* 작성자: yeonmew
* 작성일: 2022-05-16
*/

#include <iostream>
using namespace std;
class CAnimal
{
public:
    virtual char* getSound() = 0;
    virtual char* getName() = 0;
};
void printSound(CAnimal* p)
{
    cout << p->getName() << " : " << p->getSound() << endl;
}

class CPig : public CAnimal
{
public:
    virtual char* getSound() {
        static char a[10] = "꿀꿀";
        return a;
    }
    virtual char* getName() {
        static char b[10] = "돼지";
        return b;
        }

};

class CWolf : public CAnimal
{
public:
    virtual char* getSound() {
        static char a[10] = "아우";
        return a;
    }
    virtual char* getName() {
        static char b[10] = "늑대";
        return b;
    }

};



class CRabbit : public CAnimal
{
public:
    virtual char* getSound() {
        static char a[10] = "없음";
        return a;
    }
    virtual char* getName() {
        static char b[10] = "토끼";
        return b;
    }

};

class CDog : public CWolf
{
public:
    virtual char* getSound() {
        static char a[10] = "멍멍";
        return a;
    }
    virtual char* getName() {
        static char b[10] = "개";
        return b;
    }

};

int main(void)
{
    CAnimal* p1 = new CPig;
    printSound(p1);
    CAnimal* p2 = new CWolf;
    printSound(p2);
    CAnimal* p3 = new CDog;
    printSound(p3);
    CAnimal* p4 = new CRabbit;
    printSound(p4);
    return 0;
}