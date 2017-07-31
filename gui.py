import tkinter as tk
from tkinter import font
import time

#import RPi.GPIO as GPIO
"""
GPIO.setmode(GPIO.BOARD)
GPIO.setup(40, GPIO.OUT)
GPIO.output(40, GPIO.LOW)
"""
win = tk.Tk()

myFont = font.Font(family = "Helvetica", size = 36, weight = "bold")

#RESETTING THE SIM
def resetSim():
	global count_flag
	count_flag = False
	count = 000000
	reactTime['text'] = "00:00:00"
	#PRE-STAGE
	preStage = tk.Label(win , text = "PRE-STAGE" , font = myFont , relief = "groove" , height =1, width =12 , bg="grey")
	preStage.grid(row=3, column=3)

	#STAGE
	stage = tk.Label(win , text = "STAGE" , font = myFont , relief = "groove" , height =1, width =12 , bg="grey")
	stage.grid(row=4, column=3)

	#AMBER1
	amber1 = tk.Label(win , text = " " , font = myFont , relief = "groove" , height =1, width =12 , bg="grey")
	amber1.grid(row=5, column=3)

	#AMBER2
	amber2 = tk.Label(win , text = " " , font = myFont , relief = "groove" , height =1, width =12 , bg="grey")
	amber2.grid(row=6, column=3)

	#AMBER3
	amber3 = tk.Label(win , text = " " , font = myFont , relief = "groove" , height =1, width =12 , bg="grey")
	amber3.grid(row=7, column=3)

	#GREEN
	green = tk.Label(win , text = " " , font = myFont , relief = "groove" , height =1, width =12 , bg="grey")
	green.grid(row=8, column=3)

	#RED
	red = tk.Label(win , text = " " , font = myFont , relief = "groove" , height =1, width =12 , bg="grey")
	red.grid(row=9, column=3)

#EXITING THE SIM
def exitProgram():
	print("Exit Button pressed")
        #GPIO.cleanup()
	win.quit()

#TIMER FUNCTION
def start():
    global count_flag
    count_flag = True
    count = 000000

	#time.sleep(1)
	#preStage['bg'] = "yellow"

    while True:
        if count_flag == False:
            break
        # put the count value into the label
        reactTime['text'] = str(count)
        # wait for 0.1 seconds
        time.sleep(0.01)
        # needed with time.sleep()
        win.update()
        # increase count
        count += 1
def stop():
    global count_flag
    count_flag = False


#MAIN WINDOW TITLE
win.title("Wildcat Racing TreeSim")
win.geometry('800x480')

#EXIT BUTTON
exitButton  = tk.Button(win, text = "Exit", font = myFont, command = exitProgram, height =2 , width = 6)
exitButton.grid(row=0, column=1)

#RESET BUTTON
resetButton = tk.Button(win, text = "Reset", font = myFont, command = resetSim, height = 2, width =8 )
resetButton.grid(row=0, column=0)

#START BUTTON
startButton = tk.Button(win, text = "Start" , font = myFont, command = start, height =2 , width =4)
startButton.grid(row=1, column=0)

#START BUTTON
stopButton = tk.Button(win, text = "Stop" , font = myFont, command = stop, height =2, width =4)
stopButton.grid(row=1, column =1)

#REACTION TIME TIMER
reactTime = tk.Label(win , text = "00:00:00" , font = myFont , height =2, width =12)
reactTime.grid(row=2, column=3)

#PRE-STAGE
preStage = tk.Label(win , text = "PRE-STAGE" , font = myFont , relief = "groove" , height =1, width =12 , bg="yellow")
preStage.grid(row=3, column=3)

#STAGE
stage = tk.Label(win , text = "STAGE" , font = myFont , relief = "groove" , height =1, width =12 , bg="yellow")
stage.grid(row=4, column=3)

#AMBER1
amber1 = tk.Label(win , text = " " , font = myFont , relief = "groove" , height =1, width =12 , bg="yellow")
amber1.grid(row=5, column=3)

#AMBER2
amber2 = tk.Label(win , text = " " , font = myFont , relief = "groove" , height =1, width =12 , bg="yellow")
amber2.grid(row=6, column=3)

#AMBER3
amber3 = tk.Label(win , text = " " , font = myFont , relief = "groove" , height =1, width =12 , bg="yellow")
amber3.grid(row=7, column=3)

#GREEN
green = tk.Label(win , text = " " , font = myFont , relief = "groove" , height =1, width =12 , bg="green")
green.grid(row=8, column=3)

#RED
red = tk.Label(win , text = " " , font = myFont , relief = "groove" , height =1, width =12 , bg="red")
red.grid(row=9, column=3)


tk.mainloop()


#TEST
