import time
upper = int(input("Enter upper range: "))  

start= time.time() 
for num in range(1,upper + 1):  
   if num > 1:  
       for i in range(2,num):  
           if (num % i) == 0:  
               break  
       else:  
           print(num)
end=time.time()
total=(end-start)*1000
print("Tiempo en milisegundos "+str(total)) 