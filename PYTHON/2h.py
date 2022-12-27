# 프로그램명: 입출력 예제
# 작성자: yeonmew
# 작성일: 2022.11.23

icecream = '러브미'
three = '3개'

take = icecream + three  # 러브미 3개
# take = '주세요' # 덮어쓰기가 되어서 three + icecream을 대입했던 것이 없어진다.
take += ' 주세요' # 러브미 3개 주세요

print(icecream)
print(len(icecream)) # 공백 포함 글자 수
print(icecream[0]) # 첫 번째 위치는 0