# 프로그램명: 리스트, 추가, 삭제
# 작성자: yeonmew
# 작성일: 2022.11.23

list1 = ['2022-11-23', 'mew', 9]
print(list1)
list1.append('append로 추가')
list1.insert(0, 'insert로 추가') # 삽입할 위치
print(list1)

list2 = ['mew', 'galaxy', 'milkyway']
print(list2)
del list2[1] # 1번째 위치의 값 지우기
print(list2)
list2.remove("milkyway") # 입력값 지우기
print(list2)