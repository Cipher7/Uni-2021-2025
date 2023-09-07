import os
import requests
from bs4 import BeautifulSoup

for i in range(10):
    try:
        page = requests.get(f'https://xkcd.com/{i}/').content
        soup = BeautifulSoup(page, 'html.parser')
        image = soup.find('div', {'id': 'comic'}).img['src']
        print(image)
        with open(os.path.join('comics', image.split('/')[-1]), 'wb') as f:
            f.write(requests.get('https://' + image[2:]).content)
    except Exception:
        continue
print('Done!')