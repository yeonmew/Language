# 프로그램명: dictionary
# 작성자: yeonmew
# 작성일: 2022.11.24

dict1 = {'mew': 99, 'way': 11}
print(dict1)

dict1['yeon'] = 333 # [Key 값] = [Value 값]
print(dict1, '\n')

print('1)', dict1.keys()) # Key목록 출력
print('2)', dict1.values()) # Value목록 출력
print('3)', dict1.items()) # Key:Value 쌍 별로 출력
print('4)', dict1.get('mew')) # Key로 Value 얻기
print('5)', 'mew' in dict1) # 해당 Key가 목록에 있는지 확인
print('6)', dict1.clear()) # Key:Value 쌍 모두 지우기