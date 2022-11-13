import cv2
import numpy as np
cam = cv2.VideoCapture(0)
cam.set(cv2.CAP_PROP_FRAME_HEIGHT, 700)
cam.set(cv2.CAP_PROP_FRAME_WIDTH, 1000)
# FaceCascade=cv2.CascadeClassifier('haarcascade_frontalface_default.xml')
haar_cascade = cv2.CascadeClassifier('so_haarcascade_frontalface_default.xml')

while True:
    ignore, frame = cam.read()
    grayframe = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    # faces=haar_cascade()
    #cv2.imshow('my  webcam',frame)
    faces_rect = haar_cascade.detectMultiScale(grayframe, 1.1, 9)
    for (x, y, w, h) in faces_rect:
        cv2.rectangle(frame, (x, y), (x+w, y+h), (255, 50, 50), 20)
    #cv2.circle(frame,(x+50, y+50),120,(255, 50, 50),15)

    cv2.imshow('Detected faces', frame)
    # cv2.rectangle(frame,200,200)
    # (((((ENTER q TO EXIT))))))
    if cv2.waitKey(1) == ord('q'):
        break
cam.release()
cv2.destroyAllWindows()
