# a very simple stopwatch using Tkinter
# with Python30 replace Tkinter with tkinter

import tkinter as tk
import time
def start():
    global count_flag
    count_flag = True
    count = 0.0
    while True:
        if count_flag == False:
            break
        # put the count value into the label
        label['text'] = str(count)
        # wait for 0.1 seconds
        time.sleep(0.1)
        # needed with time.sleep()
        root.update()
        # increase count
        count += 0.1
def stop():
    global count_flag
    count_flag = False
# create a Tkinter window
root = tk.Tk()
# this will be a global flag
count_flag = True
# create needed widgets
label = tk.Label(root, text='0.0')
btn_start = tk.Button(root, text='start', command=start)
btn_stop = tk.Button(root, text='stop', command=stop)
# use a grid to place the widgets
label.grid(row=0, column=0, columnspan=2)
btn_start.grid(row=1, column=0, padx=5, pady=5)
btn_stop.grid(row=1, column=1, padx=5)
# start the event loop
root.mainloop()
