# WAP to detect faces in an image

import cv2 as cv
import matplotlib.pyplot as plt

img = cv.imread('faces.png')
img_gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
fc = cv.CascadeClassifier(cv.data.haarcascades + 'haarcascade_frontalface_default.xml')
faces = fc.detectMultiScale(img_gray, 1.3, 2)
for (x, y, w, h) in faces:
    cv.rectangle(img, (x, y), (x + w, y + h), (255, 0, 0), 2)

img_rgb = cv.cvtColor(img, cv.COLOR_BGR2RGB)

plt.imshow(img_rgb)
plt.axis('off')  # Hide axis
plt.show()