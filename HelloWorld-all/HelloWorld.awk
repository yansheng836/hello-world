[root@Linux ~]# echo | awk '{print "Hello,World!"}'  
Hello,World!  
[root@Linux ~]# echo | awk 'BEGIN {print "Hello,World!"}'
Hello,World!  
[root@Linux ~]# awk 'BEGIN {print "Hello,World!"}'  
Hello,World!  
[root@Linux ~]# echo "hello world" | awk '{print}'  
hello world 
