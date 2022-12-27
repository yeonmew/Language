# 프로그램명: 커피 메뉴 수정 프로그램
# 작성자: yeonmew
# 작성일: 2022.11.24

str1 = "아이스 아메리카노, 카라멜 마끼야또, 바닐라 딜라이트, 콜드브루"
print("""현재 커피 메뉴는 %s입니다
""" %str1)

menu1 = input('변경 전 메뉴: ')
menu2 = input('변경 후 메뉴: ')
str1.replace(menu1,menu2)

print("""
%s 메뉴를 %s (으)로 변경이 완료되었습니다.""" %(menu1,menu2))
print('현재 최종 메뉴 목록은 %s입니다' %str1)