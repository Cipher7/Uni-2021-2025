# Write program to read digital image. Split image into 4 quadrants.

import cv2 as cv
import matplotlib.pyplot as plt

img=cv.imread('puppy.png')
img_rgb=cv.cvtColor(img,cv.COLOR_BGR2RGB)
h,w,channels=img.shape
cx=h//2
cy=w//2
tl=img_rgb[0:cx,0:cy]
tr=img_rgb[0:cx,cy:w]
bl=img_rgb[cx:h,0:cy]
br=img_rgb[cx:h,cy:w]
plt.subplot(221);plt.imshow(tl)
plt.subplot(222);plt.imshow(tr)
plt.subplot(223);plt.imshow(bl)
plt.subplot(224);plt.imshow(br)