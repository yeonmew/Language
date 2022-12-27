# 프로그램명: 수강 신청 철회 프로그램
# 작성자: yeonmew
# 작성일: 2022.11.24

list1 = ['JAVA', '쿠버네티스','빅데이터','딥러닝']
print('''현재 수강 신청한 과목은 {}입니다 
''' .format(list1)) #개행문자 대신''' '''사용

withdraw1 = input('수강 신청을 철회할 첫번째 과목명: ')
list1.remove(withdraw1)
print('''{}의 수강 신청 철회가 완료되었습니다
''' .format(withdraw1))
withdraw2 = input('수강 신청을 철회할 두번째 과목명: ')
list1.remove(withdraw2)
print('''{}의 수강 신청 철회가 완료되었습니다
''' .format(withdraw2))

print('현재 최종 수강 신청 목록은 {}입니다' .format(list1))