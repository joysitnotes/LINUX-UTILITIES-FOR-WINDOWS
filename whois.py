import requests
import sys 
from bs4 import BeautifulSoup

if len(sys.argv) == 1:
    print("Domain Needed: example.com")
    exit()

url = "https://www.whois.com/whois/"+sys.argv[1]


req = requests.get(url)

soup = BeautifulSoup(req.content, 'html.parser')

element = soup.find(class_='whois-data')

if element:
    print(element.text)
else:
    print("Not found")



