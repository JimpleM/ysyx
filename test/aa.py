import RPi.GPIO as GPIO
GPIO.setmode(GPIO.BOARD)
GPIO.setup(14, GPIO.OUT)
GPIO.output(14, GPIO.HIGH)
    