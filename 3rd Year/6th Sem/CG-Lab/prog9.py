# Read image and extract low level features such as edges, filtering techniques

import cv2 as cv
import matplotlib.pyplot as plt

img=cv.imread('messi.jpeg')
img_gray=cv.cvtColor(img,cv.COLOR_BGR2GRAY)
img_edges=cv.Canny(img,threshold1=100,threshold2=200)
plt.imshow(img_edges)

img = cv.imgread('chess.png')
img_gray=cv.cvtColor(img,cv.COLOR_BGR2GRAY)
img_f = np.float32(img_gray)
img_corner = cv.cornerHarris(img_f, 2,5,0.07)
img_corner = cv.dialate(img_corner, None)
img[img_corner > 0.01*img_corner.max()] = [0,0,255]
plt.imshow(img)
