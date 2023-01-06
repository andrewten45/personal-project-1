# Google News Scraper for Housing
# Scrapes news articles related to the housing market
# URL: https://news.google.com/rss/search?q=housing

from requests_html import HTMLSession

url = 'https://news.google.com/rss/search?q=housing'

s = HTMLSession()

r = s.get(url)

print(r.html.html)

for title in r.html.find('title'):
    print(title.text)