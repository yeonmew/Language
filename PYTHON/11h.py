# 프로그램명: 저녁메뉴 맞추기
# 작성자: yeonmew
# 작성일: 2022.11.24

dish = input('''저녁 메뉴: ㅇㅇㅊㅂ
입력: ''')

if dish == '연어초밥': # if 조건이 참인 경우 실행
    print("감사합니다.")
    print("어디서 주문할까요?")
else: # else 조건이 거짓인 경우 실행
    print("%s이 아닙니다. 다시 생각해보세요." %dish)
    print("ㅇㅇ초밥")