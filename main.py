import time
import mouse
import win32api

cps = int(input('CPS: '))
if (1/cps)/2.2 - 0.0005 > 0:
    sleep = (1/cps)/2.2 - 0.0005
else:
    sleep=(1 / cps) / 2.2
print('Press the right mouse button to click', cps, 'times per second')
#print(sleep)

while True:
    if win32api.GetKeyState(0x02) < 0:
        mouse.press(button='left')
        time.sleep(sleep)
        mouse.release(button='left')
        time.sleep(sleep)