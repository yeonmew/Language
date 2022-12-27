# 프로그램명: 입출력 예제
# 작성자: yeonmew
# 작성일: 2022.11.23

salmon = '양파토핑 연어초밥'

print(salmon)
print(len(salmon)) # 공백 포함 글자 수
split = salmon.split(" ")
print(len(split),"\n")

print(salmon[0],"\n") # 첫 번째 위치는 0

print(salmon[ : 4]) # 앞 생략 시, 처음부터
print(salmon[5 : ]) # 뒤 생략 시, 끝까지
print(salmon[ : : -1],'\n') # 거꾸로

print(salmon[ : : 2]) # 처음부터 끝까지 2간격으로
print(salmon[1 : 7]) # [ 이상 : 미만 ]
print(salmon[0 : 8 : 7]) # [이상 : 미만 : 간격]
