# 프로그램명: 튜플을 딕셔너리로 변경하고, 학점을 추가하여 학생 정보를 출력
# 작성자: yeonmew
# 작성일: 2022-12-18

student_tup=(('2022001218','삐약','010-8888-8888'),('2022010002','짹짹','010-9999-9999'))


student_dic = dict((x,[y,z]) for x,y,z in student_tup)#튜플을 수정하여 {학번:[이름,전화번호]}의 딕셔너리로 변경

print('학생의 정보 목록')

student_dic['2022001218'].append(4.0) #append로 마지막 항목에 학점 추가
student_dic['2022010002'].append(4.5)

for key in student_dic.keys() :
    print('{', end ='') #end=''을 사용하여 {} 완료 전 줄바꿈 막기
    print("'{}' : {}".format(key, student_dic[key]), end = '') 
    print('}', end = '\n') #end='\n'로 {}가 완료된 후 개행이 되도록

Sum = 0 
for key in student_dic.keys() :
    Sum = Sum + student_dic[key][2] #sum에 [2]번째 value인 학점을 대입연산
 
print('전체 학생의 학점 평균 :', Sum / len(student_dic.keys())) #평균값을 계산하여 출력
