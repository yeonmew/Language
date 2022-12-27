# 프로그램명: 사용자정의함수와 모듈
# 작성자: yeonmew
# 작성일: 2022.11.30

def add(*a): #def 함수이름(인수)
    aadd = 0
    for i in a:
        aadd += i
    return ("숫자의 합은 %s입니다." %aadd) #리턴값

num = 0
x = []
while True:
    x[num] = int(input("숫자를 입력하세요: "))
    
    if x[num] == '\n':
        break

print(add(x))