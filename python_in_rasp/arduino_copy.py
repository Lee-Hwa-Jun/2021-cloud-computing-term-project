import serial #pip install pyserial
import time
import sys

#arduino의 정보를 담아 연결
ser = serial.Serial(
        port = '/dev/ttyACM1', #usb 포트 경로
        baudrate=115200, #보드레이트 아두이노와 통일
        bytesize=serial.EIGHTBITS,
        parity=serial.PARITY_NONE,
        stopbits=serial.STOPBITS_ONE,
        timeout=1,
        xonxoff=False,
        rtscts=False,
        dsrdtr=False,
        writeTimeout=2
        )
time.sleep(2) #안정적인 연결이 될때까지 대기
message = sys.argv #인자값 포함 예시 명령어) python3 arduino_copy.py 1
g = message[1][0]
ser.write(bytes(g.encode('utf-8')))#아두이노가 읽을 수 있게 데이터 변환

if(message[1]=='1'):
    print("\"{\"messsage\":\"Room Light ON\"}\"")
elif(message[1]=='2'):
    print("\"{\"messsage\":\"Room Light OFF\"}\"")
elif(message[1]=='3'):
    print("\"{\"messsage\":\"Bath Light ON\"}\"")
elif(message[1]=='4'):
    print("\"{\"messsage\":\"Bath Light ON\"}\"")

ser.close()#연결 해제