# Read image and extract low level features such as edges, filtering techniques

import cv2 as cv
import matplotlib.pyplot as plt

img=cv.imread('messi.jpeg')
img_gray=cv.cvtColor(img,cv.COLOR_BGR2GRAY)
img_edges=cv.Canny(img,threshold1=100,threshold2=200)
plt.imshow(img_edges)