# 프로그램명: 입출력 예제
# 작성자: yeonmew
# 작성일: 2022.11.22

mew = 1 # 변수 선언과 동시에 초기화
print('1) 계산',"계산","'계산'",'"계산"') # 따옴표 출력
print("2) 값: ",mew)
print("3) 값은", mew,"입니다.") # 문자 사이에 변수 넣기
print("4) 값: %d\n값은 %d입니다." %(mew+mew,mew)) # %(퍼센트) 자료형으로 입력하기
print("5) 파이썬 학습 진행률은 %d%%입니다." %mew) # %%입력 시 %(퍼센트) 출력
print("6) 눈 내릴 확률이 {}% 라는데, 비 올 확률도 {}%네" .format(mew,mew)) # {} .format 사용
print(f"7) 고양이를 볼 확률 {mew}%인데, 아기 고양이일 확률도 {mew}%네") # f {변수} 사용