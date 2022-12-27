# 프로그램명: 메뉴 좋아요
# 작성자: yeonmew
# 작성일: 2022.11.29

def sushi():
    menu = ['새우초밥','장어초밥','참치초밥','소고기초밥','연어초밥','해물라멘']
    num = 0

    while num < 10: #num이 10미만일때까지 반복
        if menu[num] == '참치초밥': #참치초밥 차례가 되면, 출력하지 않고 조건검사로 이동
            num += 1 #continue 이전에 조건을 증가시켜주지 않으면 num이 계속 같기 때문에 무한루프에 빠진다.
            continue
        if menu[num] == '해물라멘': #연어초밥 차례가 되면, 멈춘다.
            break
    
        print(menu[num], "좋아요")
    
        num += 1