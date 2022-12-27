# 프로그램명: 반려동물 입양 프로그램
# 작성자: yeonmew
# 작성일: 2022.11.24

list1 = ['토끼', '고양이']
print('현재 이 집의 반려동물 종류는{}입니다\n\n' .format(list1))

animal1 = input('새로 입양할 첫번째 반려동물의 종류를 입력하세요: ')
list1.append(animal1)
print('반려동물 {}의 입양이 완료되었습니다\n\n' .format(animal1))

animal2 = input('새로 입양할 두번째 반려동물의 종류를 입력하세요: ')
list1.append(animal2)
print('반려동물 {}의 입양이 완료되었습니다\n\n' .format(animal2))

print('현재 이 집의 반려동물 종류는{}입니다\n' .format(list1))