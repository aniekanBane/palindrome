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
    pal, num = palindrome(input("Your word/phrase > "))
    print("Palindrome: {}, Length: {}", pal, num)
    
