import os, cv2, numpy as np
dirp = os.path.dirname(os.path.realpath(__file__))
for file in os.listdir(dirp):
	if file.endswith(".jpg") or file.endswith(".jpeg") or file.endswith(".png"):
                print("Rewriting " + os.path.join(dirp, file) + "...")
                new = os.path.join(dirp, file)
                img = cv2.imread(new)
                hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)
                gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
                lower_blue = np.array([110,50,50])
                upper_blue = np.array([130,255,255])
                res = cv2.bitwise_and(img,hsv)
                cv2.imwrite(new, gray)
                cv2.imwrite(new, res)
