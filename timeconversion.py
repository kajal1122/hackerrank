s=input()
hour=s[:2]
min=s[3:5]
sec=s[6:8]
state=s[8:]
if(hour == '12' and state=='AM'):
    print("00"+":"+min+":"+sec)
elif(hour=='12' and state=='PM'):
    print("12"+":"+min+":"+sec)
else:
    if(state=="PM"):
        temp=int(hour)+12
        hour=str(temp)
        print(hour+":"+min+":"+sec)
    else:
        print(hout+":"+min+":"+sec)
    
         
