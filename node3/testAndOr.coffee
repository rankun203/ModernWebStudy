#!/usr/bin/env coffee

for i in [1..98]
  if(i>48&&i<57||i>=65&&i<=90||i>=97&&i<=122)
    console.log i
