#可用 print 语句打印  
print "Hello,World!\n"   
#可用 puts 语句打印  
puts  "Hello,World!\n"   
#可以先声明一个变量，然后再用 puts 语句  
a = "Hello,World!\n"     
puts a  
#可以先写个函数再调用  
def say(name)  
   "Hello,#{name}"  
end  
puts say("World!")
