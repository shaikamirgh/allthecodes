import cv2
import numpy
cam = cv2.VideoCapture(0)
cam.set(cv2.CAP_PROP_FRAME_HEIGHT,700)
cam.set(cv2.CAP_PROP_FRAME_WIDTH,1000)
while True:
    ignore,frame = cam.read()
    cv2.imshow('my  webcam',frame)
    #cv2.rectangle(frame,200,200)
    
    if cv2.waitKey(1)==ord('q'):
        break;
cam.release()
cv2.destroyAllWindows()

#enter q to quit