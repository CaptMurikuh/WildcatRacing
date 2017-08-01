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

myFont = font.Font(family = "Helvetica", size = 20, weight = "bold")

####    RESETTING THE SIM    ####
def resetSim():
	global count_flag
	count_flag = False
	global count
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
####    END RESETTING THE SIM    ####



####	EXITING THE SIM    ####
def exitProgram():
	print("Exit Button pressed")
        #GPIO.cleanup()
	win.quit()
####    END EXITING THE SIM    ####



####    TIMER FUNCTION    ####
def startTimer():
    global count_flag
    count_flag = True
    global count
    count = 000000
    lightSequence = True

    time.sleep(1)
    preStage = tk.Label(win , text = "PRE-STAGE" , font = myFont , relief = "groove" , height =1, width =12 , bg="yellow")
    preStage.grid(row=1, column=5)
    win.update()

    time.sleep(1)
    stage = tk.Label(win , text = "STAGE" , font = myFont , relief = "groove" , height =1, width =12 , bg="yellow")
    stage.grid(row=2, column=5)
    win.update()

    time.sleep(0.5)
    amber1 = tk.Label(win , text = " " , font = myFont , relief = "groove" , height =1, width =12 , bg="yellow")
    amber1.grid(row=3, column=5)
    win.update()

    time.sleep(0.5)
    amber2 = tk.Label(win , text = " " , font = myFont , relief = "groove" , height =1, width =12 , bg="yellow")
    amber2.grid(row=4, column=5)
    win.update()

    time.sleep(0.5)
    amber3 = tk.Label(win , text = " " , font = myFont , relief = "groove" , height =1, width =12 , bg="yellow")
    amber3.grid(row=5, column=5)
    win.update()

    time.sleep(0.5)
    green = tk.Label(win , text = " " , font = myFont , relief = "groove" , height =1, width =12 , bg="green")
    green.grid(row=6, column=5)
    win.update()

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
def stopTimer():
    global count_flag
    count_flag = False
    global count

    if count == 0:
        amber1 = tk.Label(win , text = " " , font = myFont , relief = "groove" , height = 1 , width = 12 , bg = "yellow")
        amber1.grid(row=3, column = 5)
        amber2 = tk.Label(win , text = " " , font = myFont , relief = "groove" , height = 1 , width = 12 , bg = "yellow")
        amber2.grid(row=4, column = 5)
        amber3 = tk.Label(win , text = " " , font = myFont , relief = "groove" , height = 1 , width = 12 , bg = "yellow")
        amber3.grid(row=5, column = 5)
        green = tk.Label(win , text = " " , font = myFont , relief = "groove" , height = 1 , width = 12 , bg = "green")
        green.grid(row=6, column = 5)
        red = tk.Label(win , text = " " , font = myFont , relief = "groove" , height =1, width =12 , bg="red")
        red.grid(row=7, column=3)
        reactTime = tk.Label(win , text = "--:--:--" , font = myFont , height =2, width =12)
        reactTime.grid(row=2, column=5)
        win.update()

####	END TIMER FUNCTION    ####


#######         INITIALIZING MAIN GUI WINDOW        ########

#MAIN WINDOW TITLE
win.title("Wildcat Racing TreeSim")
win.geometry('800x480')

#EXIT BUTTON
exitButton  = tk.Button(win, text = "Exit", font = myFont, command = exitProgram, height =2 , width = 8)
exitButton.grid(row=0, column=1)

#RESET BUTTON
resetButton = tk.Button(win, text = "Reset", font = myFont, command = resetSim, height = 2, width =8 )
resetButton.grid(row=0, column=0)

#START BUTTON
startButton = tk.Button(win, text = "Start" , font = myFont, command = startTimer, height =2 , width =4)
startButton.grid(row=1, column=0)

#GO BUTTON
goButton = tk.Button(win, text = "GO!" , font = myFont , command = stopTimer , height =2 , width = 4 , bg="green")
goButton.grid(row=1, column=1)

#REACTION TIME TIMER
reactTime = tk.Label(win , text = "00:00:00" , font = myFont , height =2, width =12)
reactTime.grid(row=5, column=1)

#PRE-STAGE "LIGHT"
preStage = tk.Label(win , text = "PRE-STAGE" , font = myFont , relief = "groove" , height =1, width =12 , bg="grey")
preStage.grid(row=1, column=5)

#STAGE "LIGHT"
stage = tk.Label(win , text = "STAGE" , font = myFont , relief = "groove" , height =1, width =12 , bg="grey")
stage.grid(row=2, column=5)

#AMBER1 "LIGHT"
amber1 = tk.Label(win , text = " " , font = myFont , relief = "groove" , height =1, width =12 , bg="grey")
amber1.grid(row=3, column=5)

#AMBER2 "LIGHT"
amber2 = tk.Label(win , text = " " , font = myFont , relief = "groove" , height =1, width =12 , bg="grey")
amber2.grid(row=4, column=5)

#AMBER3 "LIGHT"
amber3 = tk.Label(win , text = " " , font = myFont , relief = "groove" , height =1, width =12 , bg="grey")
amber3.grid(row=5, column=5)

#GREEN "LIGHT"
green = tk.Label(win , text = " " , font = myFont , relief = "groove" , height =1, width =12 , bg="grey")
green.grid(row=6, column=5)

#RED "LIGHT"
red = tk.Label(win , text = " " , font = myFont , relief = "groove" , height =1, width =12 , bg="grey")
red.grid(row=7, column=5)

tk.mainloop()
