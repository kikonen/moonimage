
table.pack = pack
table.unpack = unpack

function printf(...) io.write(string.format(...)) end

function love.load()
   require 'love_demo'
   os.exit()
end
