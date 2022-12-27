# 프로그램명: 문자열과 메소드
# 작성자: yeonmew
# 작성일: 2022.11.23

str1 = "yEonMeW"
str2 = " <- 공백 -> "
str3 = "랍스터 레드와인 버터구이"
today = "2022-11-23"

print(str1.upper()) # 모두 대문자로 변환
print(str1.lower(), "\n") # 모두 소문자로 변환

print(str2.lstrip()) # 왼쪽 공백 제거
print(str2.rstrip()) # 오른쪽 공백 제거
print(str2.strip(), "\n") # 양쪽 공백 제거

print(str3)
print(str3.replace("랍스터", "스테이크"), "\n") # 단어 변경

print(today)
print(today.split("-"))
print(today.split("-",1), "\n") # 분리 개수 설정

print(type(today), "\n")

print(str1*10)