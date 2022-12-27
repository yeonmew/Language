from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from webdriver_manager.chrome import ChromeDriverManager
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.by import By
import time

# step 2.크롬 드라이버 설정 및 웹 페이지 열기
driver = webdriver.Chrome(service=Service(ChromeDriverManager().install()))
url = "https://korean.visitkorea.or.kr/main/main.do#home"
driver.get(url)
time.sleep(2)

# step 3.사용자에게 검색 관련 정보들을 입력 받습니다.
#query_txt = input("1.수집할 자료의 키워드?: ")
print("\n")
query_txt = "겨울여행"

# 팝업창 갯수를 모를 경우 모두 닫기
main = driver.window_handles

for handle in main:
    if handle != main[0]:
        driver.switch_to.window(handle)
        driver.close()
        
#원리 창의로 돌아가기
driver.switch_to.window(driver.window_handles[0])

# step 4. 자동으로 검색어 입력 후 조회하기
query_txt = "겨울여행"

#2021-12월 사이트 수정
driver.find_element(By.LINK_TEXT, "검색").click()
element=driver.find_element(By.ID, "inp_search")
# element.click()
element.send_keys(query_txt)
element.send_keys(Keys.ENTER)
time.sleep(5)

# step 6. BeautifulSoup로 제목만 추출하기
from bs4 import BeautifulSoup
html_1 = driver.page_source # 현재 페이지의 전체 소스코드를 다 가져오기
soup_1 = BeautifulSoup(html_1, "html.parser")

content_1 = soup_1.find("ul", "list_thumType type1").find_all("div", "tit")
# print(content_1)
for i in content_1:
    print(i.get_text().replace("\n","").strip())

    print("데이터수집이 마무리되었습니다.")

    # step7. 표준 출력 방향을 바꾸어 txt 파일에 저장하기
import sys

# f_name = input("결과를 저장할 파일명을 쓰세요(예:c:\\temp\\riss.txt): ")
f_name = "c:\\h_python\\겨울여행.txt"
orig_stdout = sys.stdout
file = open(f_name, 'a', encoding="UTF-8")
sys.stdout = file # 모니터에 출력하지 말고 file에 출력해라

for i in content_1:
    print(i.get_text().replace("\n","").strip())

file.close()
sys.stdout = orig_stdout #원래대로 변경 - 다시 화면에 출력시켜라

print("요청하신 데이터 수집 작업이 정상적으로 완료되었습니다")
print('수집된 결과는 {}에 저장되었습니다' .format(f_name))

driver.close()