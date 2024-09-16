#!/usr/bin/env lua
-- MoonImage example: hello.lua

print("here")
mi = require("moonimage")

-- Load an image from a jpg file:
data, w, h, channels = mi.load("sunflowers.jpg", 'rgba')

print(w, h, channels)
print("-----------")
for y=0, 10 do
  for x=0, 10 do
    local i = y * 10 + x + 1
    local b = string.byte(data, i)
    printf(" %0x", b)
  end
  printf("\n")
end
print("-----------")

-- Write it to a bmp file:
mi.write_bmp("output.bmp", w, h, channels, data)
