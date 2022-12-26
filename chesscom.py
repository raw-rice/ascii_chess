import socket
import requests
from bs4 import BeautifulSoup
import urllib3

address = 'https://www.chess.com/games/archive/raw_rice'

http = urllib3.PoolManager()

response = http.request('GET', address)
soup = BeautifulSoup(response.data, 'lxml')
match = soup.find('a', class_="archive-games-background-link")

print(soup)
