# WAP to blur and smoothen and image

import cv2 as cv
import matplotlib.pyplot as plt

img=cv.imread('messi.jpeg')
img_rgb=cv.cvtColor(img,cv.COLOR_BGR2RGB)
img_avgBlur=cv.blur(img_rgb,(3,3))
img_gBlur=cv.GaussianBlur(img_rgb,(3,3),0)
images=[img_rgb,img_avgBlur,img_gBlur]
titles=['original','avg blur','gaussian blur']
for i in range(3):
    plt.subplot(1,3,i+1);plt.title(titles[i]);plt.imshow(images[i])