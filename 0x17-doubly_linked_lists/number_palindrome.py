#!/usr/bin/python3
def palidrome(num):
  a = str(num)
  return (a == a[::-1])
def highp(low, high):
  total = []
  for s in range(high, low, -1):
    for t in range(high, low, -1):
      prod = s * t
      if palidrome(prod):
        total.append(prod)
  print (max(total))

highp(99, 999)
