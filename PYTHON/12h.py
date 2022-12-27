# 프로그램명: 학점 출력
# 작성자: yeonmew
# 작성일: 2022.11.24

a = int(input("점수를 입력하세요: "))

if a == 100:
    print('A+ 입니다.')
elif a >= 90 and a <100: # elif == else if
    print("A 입니다.")
elif a >= 80 and a <90:
    print("B 입니다.")
elif a >= 70 and a <80:
    print("C 입니다.")
else:
    print('F 입니다.')