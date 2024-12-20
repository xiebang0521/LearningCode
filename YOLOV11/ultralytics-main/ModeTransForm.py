from ultralytics import YOLO

model = YOLO("yolo11n.pt")

model.export(format='onnx', imgsz=640, int8=True, opset=11, simplify=True, dynamic=True)

