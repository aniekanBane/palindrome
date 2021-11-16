import re

def palindrome(string:str):
  characters = ''.join(re.findall(r'[a-z]+', string.lower()))
  flipped = characters[::-1]
  pal = characters == flipped
  num_chr = len(characters) if pal else 0
  return pal, num_chr

if __name__ == '__main__':
  print("Is it a palindrome ?")
  kg = True
  while(kg):
    entry = input("Your word/phrase > "))
    if entry == 'stop': kg = False
    
    pal, num = palindrome(entry)
    print("Palindrome: {}, Length: {}", pal, num)
    
