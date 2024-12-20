from ultralytics import YOLO
import cv2
import numpy as np
# 加载预训练的 YOLOV11n 模型
cap = cv2.VideoCapture(0)

model = YOLO('yolo11n.onnx')
source = 'person.jpg'

while True:
    ret, frame = cap.read()  # 摄像头读取, ret为是否成功打开摄像头, true,false ,frame 为视频的没一帧图像
    frame = cv2.flip(frame, 1)  # 摄像头是和人对立的，将图像左右调换回来正常显示
    cv2.imshow("person", frame)

    # c = cv2.waitKey(50)
    # if cv2.waitKey(1) & 0xff == ord('q'):
    #     cv2.imwrite("test.png", frame)
    #     break
    if cv2.waitKey(5000):
        cv2.imwrite("person.jpg", frame)
        results = model.predict(source, stream=True, save=True)

        for r in results:
            boxes = r.boxes
            masks = r.masks
            probs = r.probs
cap.release()
cv2.destroyAllWindows()