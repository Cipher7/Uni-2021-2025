# WAP to show rotation, scaling, and translation

import cv2 as cv
import matplotlib.pyplot as plt
import matplotlib
import numpy as np

img=cv.imread('puppy.png')
img_rgb=cv.cvtColor(img,cv.COLOR_BGR2RGB)
h,w,channels=img.shape

matplotlib.rc('figure',figsize=(8,8))
img_rot90=cv.rotate(img_rgb,cv.ROTATE_90_CLOCKWISE)
img_rotc90=cv.rotate(img_rgb,cv.ROTATE_90_COUNTERCLOCKWISE)
img_rot180=cv.rotate(img_rgb,cv.ROTATE_180)
img_half=cv.resize(img_rgb,(w//2,h//2))
img_2x=cv.resize(img_rgb,None,fx=2,fy=2)
img_nonUnf=cv.resize(img_rgb,None,fx=2,fy=0.5)
tx=100;ty=50
M=np.float32([[1,0,tx],[0,1,ty]])
img_trans=cv.warpAffine(img_rgb,M,(w,h))
images=[img_rot90,img_rotc90,img_rot180,img_half,img_2x,img_nonUnf, img, img_trans]
titles=['rotate 90','rotate 90 counter','rotate180','0.5x','2x','non uniform', 'original', 'translated']
for i in range(8):
    plt.subplot(3,3,i+1);plt.title(titles[i]);plt.imshow(images[i])