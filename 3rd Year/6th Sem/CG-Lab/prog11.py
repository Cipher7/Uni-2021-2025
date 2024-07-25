# WAP to contour and image

import cv2 as cv
import matplotlib.pyplot as plt

img = cv.imread('chessboard.png')
img_gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
img_edges = cv.Canny(img_gray, threshold1=100, threshold2=200)
contours, hierarchy = cv.findContours(img_edges, cv.RETR_TREE, cv.CHAIN_APPROX_SIMPLE)
cv.drawContours(img, contours, -1, (0, 255, 0), 3)
plt.imshow(cv.cvtColor(img, cv.COLOR_BGR2RGB))
plt.axis('off')  # Hide axis
plt.show()
